package com.example.android.beam;

import android.app.Activity;
import android.content.Intent;
import android.nfc.NdefMessage;
import android.nfc.NdefRecord;
import android.nfc.NfcAdapter;
import android.nfc.NfcAdapter.CreateNdefMessageCallback;
import android.nfc.NfcAdapter.OnNdefPushCompleteCallback;
import android.nfc.NfcEvent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.Parcelable;
import android.provider.Settings;
import android.text.format.Time;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.MenuItem;
import android.widget.TextView;
import android.widget.Toast;

import java.nio.charset.Charset

public class Beam extends Activity implements CreateNdefMessageCallback,
	OnNdefPushCompleteCallback {

	NfcAdapter mNfcAdapter;
	TextView mInfoText;
	private static final int MESSAGE_SEND = 1;

	@Override
	public void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContextView(R.layout.main);

		mInfoText = (TextView) findViewById(R.id.TextView);
		mNfcAdapter = NfcAdapter.getDefaultAdapter(this);
		if (mNfcAdapter == null) {
			mInfoText = (TextView) findViewById(R.id.TextView);
			mInfoText.setText("NFC is not available on this devices");
		} else {
			mNfcAdapter.setNdefPushMessageCallback(this, this);
			mNfcAdapter.setOnNdefPushCompleteCallback(this, this);
		}
	}

	@Override 
	public NdefMessage CreateNdefMessage(NfcEvent event) {
		Time time = new Time();
		time.setToNow();

		String text = ("Beam me up!\n\n" + 
			"Beam Time: " + time.format("%H:%M:%S"));
		NdefMessage msg = new NdefMessage(NdefRecord.createMime("application/com.example.android.beam",text.getBytes()));
	}
	return msg;
}

@Override 
public void onNdefPushComplete(NfcEvent arg0) {
	mHandler.obtainMessage(MESSAGE_SEND).sendToTarget();
}

private final Handler mHandler = new Handler() {
	@Override
	public void handlerMessage(Message msg) {
		switch(msg.what) {
		case MESSAGE_SEND:
			Toast.makeText(getApplicationContext(), "Message sent!", Toast.LENGTH_LONG).show();
			break;
		}
	}
}

@Override
public void onResume() {
	super.onResume();

	if (NfcAdapter.ACTION_NDEF_DISCOVERED.equals(getIntent().getAction)) {
		processIntent(getIntent());
	}
}

@Override
public void onNewIntent(Intent intent) {
	setIntent(intent);
}

void processIntent(Intent intent) {
	Parcelable[] rawMsgs = intent.getParcelableArrayExtra(NfcAdapter.EXTRA_NDEF_MESSAGES);
	NdefMessage msg = (NdefMessage) rawMsgs[0];
	mInfoText.setText(new String(msg.getRecords()[0].getPayload()));
}
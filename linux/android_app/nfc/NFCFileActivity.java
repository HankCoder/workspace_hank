public class NFCFileActivity extend Activity implements CreateBeamUrisCallback {
	private NfcAdapter mNfcAdapter;
	private PendingIntent mPendingIntent;
	//要保存到SD卡根目录的文件的路径
	private final String targetFileName = "/sdcard/temp_icon.png";

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_nfcfile);
		mNfcAdapter = NfcAdapter.getDefaultAdapter(this);
		mPendingIntent = PendingIntent.getActivity(this, 0, new Intent(this, getClass()), 0);

		//指定触发NFC传输的回调对象
		mNfcAdapter.setBeamPushUrisCallback(this, this);
		try {
			//下面的代码将assets目录中的icon.png文件复制到SD卡的根目录，文件名由targetFilename指定

			InputStream is = getResources().getAssets().open("icon.png");
			FileOutputStream fos = new FileOutputStream(targetFileName);
			byte[] buffer = new byte[10000];
			int n = is.read(buffer);
			fos.write(buffer, 0, n);
			fos.close();
			in.close();
		} catch (Exception e){

		}
	}

	@Override
	public Uri[] createBeamUris(NfcEvent event) {
		Uri[] uris = new Uri[1];

		Uri uri = Uri.parse("file://" + targetFileName);
		uris[0] = uri;
		return uris;
	}
}
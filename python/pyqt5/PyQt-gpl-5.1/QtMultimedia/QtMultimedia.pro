TEMPLATE = lib
CONFIG += warn_on plugin
QT += multimedia
CONFIG += release

win32 {
    PY_MODULE = QtMultimedia.pyd
    target.files = QtMultimedia.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtMultimedia.so
    target.files = QtMultimedia.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtMultimedia
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qsoundeffect.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioinput.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudiodeviceinfo.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioprobe.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudiooutput.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qabstractvideobuffer.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcameraexposure.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaencodersettings.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudio.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qvideoprobe.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qabstractvideosurface.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qvideosurfaceformat.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediametadata.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediacontent.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaresource.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qradiotuner.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaplayer.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcamera.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediacontrol.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaobject.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmultimedia.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudiodecoder.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaplaylist.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioformat.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcameraimageprocessing.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qradiodata.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediatimerange.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediaservice.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediarecorder.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcameraimagecapture.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qmediabindableinterface.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qsound.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/QtMultimediamod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudiorecorder.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qvideoframe.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qcamerafocus.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudiobuffer.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtMultimedia
HEADERS = sipAPIQtMultimedia.h
SOURCES = sipQtMultimediaQCameraImageCapture.cpp sipQtMultimediaQList0100QCameraFocusZone.cpp sipQtMultimediaQList0100QAudioFormatSampleType.cpp sipQtMultimediaQList0100QMediaResource.cpp sipQtMultimediaQAbstractVideoBuffer.cpp sipQtMultimediaQMediaObject.cpp sipQtMultimediaQList0100QMediaContent.cpp sipQtMultimediaQList0100QMediaTimeInterval.cpp sipQtMultimediaQAudioDeviceInfo.cpp sipQtMultimediaQAudioDecoder.cpp sipQtMultimediacmodule.cpp sipQtMultimediaQAudio.cpp sipQtMultimediaQSoundEffect.cpp sipQtMultimediaQCameraExposureFlashModes.cpp sipQtMultimediaQMediaPlayer.cpp sipQtMultimediaQVideoProbe.cpp sipQtMultimediaQCameraFocus.cpp sipQtMultimediaQMediaResource.cpp sipQtMultimediaQCameraFocusZone.cpp sipQtMultimediaQMediaRecorder.cpp sipQtMultimediaQAudioInput.cpp sipQtMultimediaQCameraExposure.cpp sipQtMultimediaQMediaPlayerFlags.cpp sipQtMultimediaQMediaContent.cpp sipQtMultimediaQVideoEncoderSettings.cpp sipQtMultimediaQMediaService.cpp sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp sipQtMultimediaQAudioBuffer.cpp sipQtMultimediaQMediaControl.cpp sipQtMultimediaQMediaPlaylist.cpp sipQtMultimediaQList0100QAudioFormatEndian.cpp sipQtMultimediaQMediaMetaData.cpp sipQtMultimediaQCameraLockTypes.cpp sipQtMultimediaQList0100QAudioDeviceInfo.cpp sipQtMultimediaQAudioOutput.cpp sipQtMultimediaQVideoFrame.cpp sipQtMultimediaQList0100QVideoFramePixelFormat.cpp sipQtMultimediaQAudioProbe.cpp sipQtMultimediaQAudioEncoderSettings.cpp sipQtMultimediaQCameraFocusFocusModes.cpp sipQtMultimediaQAbstractVideoSurface.cpp sipQtMultimediaQMultimedia.cpp sipQtMultimediaQRadioTuner.cpp sipQtMultimediaQSound.cpp sipQtMultimediaQCamera.cpp sipQtMultimediaQMediaTimeInterval.cpp sipQtMultimediaQAudioFormat.cpp sipQtMultimediaQImageEncoderSettings.cpp sipQtMultimediaQCameraImageProcessing.cpp sipQtMultimediaQMediaTimeRange.cpp sipQtMultimediaQMediaBindableInterface.cpp sipQtMultimediaQCameraCaptureModes.cpp sipQtMultimediaQAudioRecorder.cpp sipQtMultimediaQVideoSurfaceFormat.cpp sipQtMultimediaQRadioData.cpp
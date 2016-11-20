TEMPLATE = lib
CONFIG += warn_on plugin
QT += multimedia
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtMultimedia.pyd
    target.files = QtMultimedia.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtMultimedia.so
    target.files = QtMultimedia.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtMultimedia
sip.files = ../sip/QtMultimedia/qsoundeffect.sip ../sip/QtMultimedia/qaudioinput.sip ../sip/QtMultimedia/qaudiodeviceinfo.sip ../sip/QtMultimedia/qaudioprobe.sip ../sip/QtMultimedia/qaudiooutput.sip ../sip/QtMultimedia/qabstractvideobuffer.sip ../sip/QtMultimedia/qcameraexposure.sip ../sip/QtMultimedia/qmediaencodersettings.sip ../sip/QtMultimedia/qaudio.sip ../sip/QtMultimedia/qvideoprobe.sip ../sip/QtMultimedia/qabstractvideosurface.sip ../sip/QtMultimedia/qvideosurfaceformat.sip ../sip/QtMultimedia/qmediametadata.sip ../sip/QtMultimedia/qmediacontent.sip ../sip/QtMultimedia/qcamerainfo.sip ../sip/QtMultimedia/qmediaresource.sip ../sip/QtMultimedia/qradiotuner.sip ../sip/QtMultimedia/qmediaplayer.sip ../sip/QtMultimedia/qcamera.sip ../sip/QtMultimedia/qcameraviewfindersettings.sip ../sip/QtMultimedia/qmediacontrol.sip ../sip/QtMultimedia/qmediaobject.sip ../sip/QtMultimedia/qmultimedia.sip ../sip/QtMultimedia/qaudiodecoder.sip ../sip/QtMultimedia/qmediaplaylist.sip ../sip/QtMultimedia/qaudioformat.sip ../sip/QtMultimedia/qcameraimageprocessing.sip ../sip/QtMultimedia/qradiodata.sip ../sip/QtMultimedia/qmediatimerange.sip ../sip/QtMultimedia/qpymultimedia_qlist.sip ../sip/QtMultimedia/qmediaservice.sip ../sip/QtMultimedia/qmediarecorder.sip ../sip/QtMultimedia/qcameraimagecapture.sip ../sip/QtMultimedia/qmediabindableinterface.sip ../sip/QtMultimedia/qsound.sip ../sip/QtMultimedia/QtMultimediamod.sip ../sip/QtMultimedia/qaudiorecorder.sip ../sip/QtMultimedia/qvideoframe.sip ../sip/QtMultimedia/qcamerafocus.sip ../sip/QtMultimedia/qabstractvideofilter.sip ../sip/QtMultimedia/qaudiobuffer.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtMultimedia.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"

    equals(QT_MINOR_VERSION, 5) {
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
    }
}

TARGET = QtMultimedia
HEADERS = sipAPIQtMultimedia.h
SOURCES = sipQtMultimediaQCameraImageCapture.cpp sipQtMultimediaQCameraViewfinderSettings.cpp sipQtMultimediaQList0100QCameraFocusZone.cpp sipQtMultimediaQList0100QAudioFormatSampleType.cpp sipQtMultimediaQList0100QMediaResource.cpp sipQtMultimediaQAbstractVideoBuffer.cpp sipQtMultimediaQMediaObject.cpp sipQtMultimediaQList0100QMediaContent.cpp sipQtMultimediaQList0100QMediaTimeInterval.cpp sipQtMultimediaQAudioDeviceInfo.cpp sipQtMultimediaQAudioDecoder.cpp sipQtMultimediacmodule.cpp sipQtMultimediaQAbstractVideoFilter.cpp sipQtMultimediaQAudio.cpp sipQtMultimediaQSoundEffect.cpp sipQtMultimediaQCameraExposureFlashModes.cpp sipQtMultimediaQMediaPlayer.cpp sipQtMultimediaQVideoProbe.cpp sipQtMultimediaQCameraFocus.cpp sipQtMultimediaQMediaResource.cpp sipQtMultimediaQCameraFocusZone.cpp sipQtMultimediaQMediaRecorder.cpp sipQtMultimediaQCameraFrameRateRange.cpp sipQtMultimediaQList0100QCameraInfo.cpp sipQtMultimediaQAudioInput.cpp sipQtMultimediaQCameraInfo.cpp sipQtMultimediaQVideoFilterRunnable.cpp sipQtMultimediaQCameraExposure.cpp sipQtMultimediaQList0100QCameraViewfinderSettings.cpp sipQtMultimediaQMediaPlayerFlags.cpp sipQtMultimediaQMediaContent.cpp sipQtMultimediaQVideoEncoderSettings.cpp sipQtMultimediaQMediaService.cpp sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp sipQtMultimediaQAudioBuffer.cpp sipQtMultimediaQMediaControl.cpp sipQtMultimediaQMediaPlaylist.cpp sipQtMultimediaQList0100QAudioFormatEndian.cpp sipQtMultimediaQList0100QAudioRole.cpp sipQtMultimediaQMediaMetaData.cpp sipQtMultimediaQCameraLockTypes.cpp sipQtMultimediaQList0100QAudioDeviceInfo.cpp sipQtMultimediaQAudioOutput.cpp sipQtMultimediaQVideoFrame.cpp sipQtMultimediaQList0100QVideoFramePixelFormat.cpp sipQtMultimediaQAudioProbe.cpp sipQtMultimediaQAudioEncoderSettings.cpp sipQtMultimediaQCameraFocusFocusModes.cpp sipQtMultimediaQAbstractVideoSurface.cpp sipQtMultimediaQMultimedia.cpp sipQtMultimediaQRadioTuner.cpp sipQtMultimediaQSound.cpp sipQtMultimediaQCamera.cpp sipQtMultimediaQMediaTimeInterval.cpp sipQtMultimediaQAudioFormat.cpp sipQtMultimediaQList0100QCameraFrameRateRange.cpp sipQtMultimediaQImageEncoderSettings.cpp sipQtMultimediaQCameraImageProcessing.cpp sipQtMultimediaQMediaTimeRange.cpp sipQtMultimediaQMediaBindableInterface.cpp sipQtMultimediaQCameraCaptureModes.cpp sipQtMultimediaQAudioRecorder.cpp sipQtMultimediaQVideoSurfaceFormat.cpp sipQtMultimediaQVideoFilterRunnableRunFlags.cpp sipQtMultimediaQRadioData.cpp

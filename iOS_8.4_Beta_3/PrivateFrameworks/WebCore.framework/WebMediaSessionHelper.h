/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebMediaSessionHelper : NSObject {
    struct RetainPtr<MPAVRoutingController> { 
        void *m_ptr; 
    } _airPlayPresenceRoutingController;
    struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); unsigned int x4[4]; struct Vector<WebCore::MediaSession *, 0, WTF::CrashOnOverflow> { struct MediaSession {} **x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct Vector<WebCore::MediaSessionManagerClient *, 0, WTF::CrashOnOverflow> { struct MediaSessionManagerClient {} **x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; } x6; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<WebCore::SystemSleepListener, std::__1::default_delete<WebCore::SystemSleepListener> > { struct __compressed_pair<WebCore::SystemSleepListener *, std::__1::default_delete<WebCore::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_8_1_1; } x8; struct RefPtr<WebCore::AudioHardwareListener> { struct AudioHardwareListener {} *x_9_1_1; } x9; bool x10; struct RetainPtr<WebMediaSessionHelper> { void *x_11_1_1; } x11; } *_callback;
    struct RetainPtr<MPVolumeView> { 
        void *m_ptr; 
    } _volumeView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocateVolumeView;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)clearCallback;
- (void)dealloc;
- (bool)hasWirelessTargetsAvailable;
- (id)initWithCallback:(struct MediaSessionManageriOS { int (**x1)(); int (**x2)(); int (**x3)(); unsigned int x4[4]; struct Vector<WebCore::MediaSession *, 0, WTF::CrashOnOverflow> { struct MediaSession {} **x_5_1_1; unsigned int x_5_1_2; unsigned int x_5_1_3; } x5; struct Vector<WebCore::MediaSessionManagerClient *, 0, WTF::CrashOnOverflow> { struct MediaSessionManagerClient {} **x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; } x6; struct unique_ptr<WebCore::RemoteCommandListener, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct __compressed_pair<WebCore::RemoteCommandListener *, std::__1::default_delete<WebCore::RemoteCommandListener> > { struct RemoteCommandListener {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<WebCore::SystemSleepListener, std::__1::default_delete<WebCore::SystemSleepListener> > { struct __compressed_pair<WebCore::SystemSleepListener *, std::__1::default_delete<WebCore::SystemSleepListener> > { struct SystemSleepListener {} *x_1_2_1; } x_8_1_1; } x8; struct RefPtr<WebCore::AudioHardwareListener> { struct AudioHardwareListener {} *x_9_1_1; } x9; bool x10; struct RetainPtr<WebMediaSessionHelper> { void *x_11_1_1; } x11; }*)arg1;
- (void)interruption:(id)arg1;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceInternal : NSObject {
    NSArray *_HIDs;
    NSData *_MFiCertSerial;
    <AVExternalDeviceDelegate> *_delegate;
    struct OpaqueFigEndpoint { } *_figEndpoint;
    long long _makeHIDsOnlyOnce;
    NSObject<OS_dispatch_queue> *_queue;
    AVWeakReference *_weakReference;
}

@end

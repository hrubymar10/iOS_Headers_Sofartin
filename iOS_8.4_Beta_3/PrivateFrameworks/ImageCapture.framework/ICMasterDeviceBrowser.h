/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICMasterDeviceBrowser : NSObject {
    NSMutableArray *_browsers;
    NSMutableArray *_devices;
    ExFATCameraDeviceManager *_exFATManager;
    MSCameraDeviceManager *_msDevManager;
    long long _numberOfBrowsingBrowsers;
    PTPCameraDeviceManager *_ptpDevManager;
}

@property (readonly) NSMutableArray *browsers;
@property (readonly) NSMutableArray *devices;

+ (id)defaultBrowser;
+ (bool)exists;

- (void)addBrowser:(id)arg1;
- (int)addExFATCamera:(id)arg1;
- (int)addMSCamera:(id)arg1;
- (int)addPTPCamera:(id)arg1;
- (id)browsers;
- (void)dealloc;
- (id)deviceWithDelegate:(id)arg1;
- (id)devices;
- (void)finalize;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)informBrowserDelegateUsingSelector:(SEL)arg1 withObject:(id)arg2;
- (id)init;
- (void)removeBrowser:(id)arg1;
- (void)removeMSCamera:(id)arg1;
- (void)removePTPCamera:(id)arg1;
- (int)start:(id)arg1;
- (void)stop:(id)arg1;

@end

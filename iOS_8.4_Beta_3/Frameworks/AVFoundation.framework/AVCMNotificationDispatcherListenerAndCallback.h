/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject {
    int (*_callback;
    AVWeakReference *_weakReferenceToListener;
}

@property(assign,readonly) int (* callback;
@property(assign,readonly) id listener;

- (int (*)callback;
- (void)dealloc;
- (id)init;
- (id)initWithWeakReferenceToListener:(id)arg1 callback:(int (*)arg2;
- (id)listener;

@end
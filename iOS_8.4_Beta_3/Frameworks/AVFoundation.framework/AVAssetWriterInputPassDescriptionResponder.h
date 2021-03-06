/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {
    id _callbackBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    bool _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription *_mostRecentPassDescription;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    int _stoppedResponding;
}

- (bool)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithCallbackQueue:(id)arg1 block:(id)arg2;
- (void)respondToNewPassDescription:(id)arg1;
- (void)stopRespondingToPassDescriptions;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationPlaceholder : FBBundleInfo {
    NSObject<OS_dispatch_queue> *_queue;
    double _queue_cachedPercentComplete;
    bool _queue_installType;
    bool _queue_isNewsstand;
    bool _queue_isRestricted;
    NSMutableSet *_queue_observers;
    NSProgress *_queue_progress;
}

@property (getter=isCancellable, nonatomic, readonly) bool cancellable;
@property (nonatomic, readonly) unsigned long long installPhase;
@property (nonatomic, readonly) unsigned long long installState;
@property (nonatomic, readonly) unsigned long long installType;
@property (getter=isNewsstand, nonatomic, readonly) bool newsstand;
@property (getter=isPausable, nonatomic, readonly) bool pausable;
@property (nonatomic, readonly) double percentComplete;
@property (getter=_proxy, setter=_setProxy:, nonatomic, retain) LSApplicationProxy *proxy;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;

- (void)_dispatchToObservers:(id)arg1 block:(id)arg2;
- (id)_iconDictionary;
- (double)_normalizedProgress:(double)arg1;
- (void)_noteChangedSignificantly;
- (id)_proxy;
- (id)_queue_observers;
- (void)_queue_progressChanged;
- (bool)_queue_setProgress:(id)arg1;
- (void)_queue_startObservingProgress:(id)arg1;
- (void)_queue_stopObservingProgress:(id)arg1;
- (void)_sendToObserversCancellabilityDidChange:(id)arg1;
- (void)_sendToObserversInstallPhaseDidChange:(id)arg1;
- (void)_sendToObserversInstallStateDidChange:(id)arg1;
- (void)_sendToObserversPausabilityDidChange:(id)arg1;
- (void)_sendToObserversPercentCompleteDidChange:(id)arg1;
- (void)_sendToObserversPlaceholderDidChangeSignificantly:(id)arg1;
- (void)_setProxy:(id)arg1;
- (void)_setProxy:(id)arg1 force:(bool)arg2;
- (void)addObserver:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithApplicationProxy:(id)arg1;
- (unsigned long long)installPhase;
- (unsigned long long)installState;
- (unsigned long long)installType;
- (bool)isCancellable;
- (bool)isNewsstand;
- (bool)isPausable;
- (bool)isRestricted;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (double)percentComplete;
- (void)prioritize;
- (void)removeObserver:(id)arg1;
- (void)resume;

@end

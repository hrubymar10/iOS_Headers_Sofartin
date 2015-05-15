/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUKeyValueObserver : NSObject {
    id _observationHandler;
    NSString *_observedKeyPath;
    id _observedObject;
    NSOperationQueue *_queue;
}

@property (nonatomic, copy) id observationHandler;
@property (nonatomic, copy) NSString *observedKeyPath;
@property (nonatomic, retain) id observedObject;
@property (nonatomic, retain) NSOperationQueue *queue;

+ (id)observerForKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(id)arg4;
- (id)observationHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedKeyPath;
- (id)observedObject;
- (id)queue;
- (void)setObservationHandler:(id)arg1;
- (void)setObservedKeyPath:(id)arg1;
- (void)setObservedObject:(id)arg1;
- (void)setQueue:(id)arg1;

@end

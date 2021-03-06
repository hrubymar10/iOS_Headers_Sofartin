/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFObservable : NSObject <SBFObservable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)forkJoin:(id)arg1;
+ (id)observableWithBlock:(id)arg1;

- (id)generate:(id)arg1;
- (id)map:(id)arg1;
- (id)observeOn:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)subscribeWithResultBlock:(id)arg1;
- (id)subscribeWithResultBlock:(id)arg1 completionBlock:(id)arg2 failureBlock:(id)arg3;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)waitForResults:(id*)arg1;

@end

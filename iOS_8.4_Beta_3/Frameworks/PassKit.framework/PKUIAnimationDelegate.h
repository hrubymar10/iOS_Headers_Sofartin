/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKUIAnimationDelegate : NSObject {
    id _completionHandler;
    id _didStartHandler;
}

@property (nonatomic, copy) id completionHandler;
@property (nonatomic, copy) id didStartHandler;

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)completionHandler;
- (void)dealloc;
- (id)didStartHandler;
- (void)setCompletionHandler:(id)arg1;
- (void)setDidStartHandler:(id)arg1;

@end

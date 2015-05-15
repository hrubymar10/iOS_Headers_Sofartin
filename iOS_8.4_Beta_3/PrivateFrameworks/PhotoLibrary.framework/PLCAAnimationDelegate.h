/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCAAnimationDelegate : NSObject {
    id _completion;
    id _start;
}

@property (nonatomic, copy) id completion;
@property (nonatomic, copy) id start;

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)completion;
- (void)dealloc;
- (void)setCompletion:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end

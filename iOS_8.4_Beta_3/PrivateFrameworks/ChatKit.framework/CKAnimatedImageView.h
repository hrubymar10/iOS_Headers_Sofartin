/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver> {
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

@property (nonatomic, retain) CKAnimatedImage *animatedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)animatedImage;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)dealloc;
- (id)frames;
- (void)setAnimatedImage:(id)arg1;
- (void)setFrames:(id)arg1;
- (void)updateAnimationTimerObserving;

@end

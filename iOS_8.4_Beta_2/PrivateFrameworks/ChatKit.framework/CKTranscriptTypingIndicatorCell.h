/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptTypingIndicatorCell : CKTranscriptMessageCell {
    CKTypingView *_typingIndicatorLayer;
    CKTypingView *_typingView;
}

@property(assign,retain) CKTypingView * typingIndicatorLayer;
@property(assign,retain) CKTypingView * typingView;

+ (struct CGSize { double x1; double x2; })indicatorSize;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id)arg1;
- (void)performRemoval:(id)arg1;
- (void)prepareForReuse;
- (void)setOrientation:(BOOL)arg1;
- (void)setTypingIndicatorLayer:(id)arg1;
- (void)setTypingView:(id)arg1;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;
- (void)stopPulseAnimation;
- (id)typingIndicatorLayer;
- (id)typingView;

@end

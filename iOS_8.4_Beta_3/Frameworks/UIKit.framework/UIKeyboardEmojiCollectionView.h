/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCollectionView : UICollectionView {
    UITouch *_activeTouch;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    UIResponder *_hitTestResponder;
    UIKeyboardEmojiInputController *_inputController;
    UIKeyboardEmojiView *_onDisplay;
    UIKeyboardEmojiView *_pendingDisplay;
    UIView *_pressIndicator;
    UIKBRenderConfig *_renderConfig;
    UIKeyboardEmojiView *_touched;
}

@property (retain) UITouch *activeTouch;
@property (readonly, retain) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder *hitTestResponder;
@property (retain) UIKeyboardEmojiInputController *inputController;
@property (retain) UIKeyboardEmojiView *onDisplay;
@property (retain) UIKeyboardEmojiView *pendingDisplay;
@property (retain) UIKBRenderConfig *renderConfig;
@property (retain) UIKeyboardEmojiView *touched;

- (double)_currentScreenScale;
- (id)activeTouch;
- (id)closestCellForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)emojiGraphicsTraits;
- (id)hitTestResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2 renderConfig:(id)arg3 inputController:(id)arg4 emojiGraphicsTraits:(id)arg5;
- (id)inputController;
- (void)layoutSubviews;
- (id)onDisplay;
- (id)pendingDisplay;
- (id)renderConfig;
- (void)setActiveTouch:(id)arg1;
- (void)setHitTestResponder:(id)arg1;
- (void)setInputController:(id)arg1;
- (void)setOnDisplay:(id)arg1;
- (void)setPendingDisplay:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setTouched:(id)arg1;
- (id)touched;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

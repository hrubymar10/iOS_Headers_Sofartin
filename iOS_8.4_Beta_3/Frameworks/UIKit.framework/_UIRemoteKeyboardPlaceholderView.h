/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteKeyboardPlaceholderView : UIView <_UIRemoteKeyboardInputViewPlaceholder> {
    UIView *_mirroredView;
}

@property (readonly, retain) UIView *placeheldView;

+ (id)placeholderForView:(id)arg1;
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;

- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)placeheldView;
- (bool)refreshPlaceholder;

@end

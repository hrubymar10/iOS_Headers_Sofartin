/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
    int _currentSelected;
    int _lastUsedCategory;
    UIColor *_pressIndicatorColor;
    bool _whiteText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property bool whiteText;

- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)receiveNotifictaion:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setWhiteText:(bool)arg1;
- (id)symbolForRow:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleForRow:(long long)arg1;
- (void)updateCategorySelectedIndicator:(int)arg1;
- (bool)whiteText;

@end

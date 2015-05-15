/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIToggleButton : SKUIStyledButton <SKUIToggleItemStateCenterObserver> {
    bool _autoIncrement;
    long long _autoIncrementCount;
    long long _count;
    <SKUIToggleButtonDelegate> *_delegate;
    SKUIButtonViewElement *_element;
    NSString *_itemIdentifier;
    UIImage *_nonToggledImage;
    SKUIAttributedStringLayout *_nonToggledLayout;
    NSString *_nonToggledTitle;
    NSString *_titleToggleString;
    long long _toggleButtonType;
    NSString *_toggleItemIdentifier;
    bool _toggled;
    UIImage *_toggledImage;
    SKUIAttributedStringLayout *_toggledLayout;
    NSString *_toggledTitle;
}

@property (nonatomic) bool autoIncrement;
@property (nonatomic) long long autoIncrementCount;
@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIToggleButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) SKUIButtonViewElement *element;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *nonToggledImage;
@property (nonatomic, retain) NSString *nonToggledTitle;
@property (readonly) Class superclass;
@property (nonatomic) long long toggleButtonType;
@property (nonatomic, retain) NSString *toggleItemIdentifier;
@property (getter=isToggled, nonatomic) bool toggled;
@property (nonatomic, retain) UIImage *toggledImage;
@property (nonatomic, retain) NSString *toggledTitle;

- (void).cxx_destruct;
- (id)_layoutForString:(id)arg1;
- (id)_nonToggledLayout;
- (void)_sendDidAnimate;
- (void)_sendWillAnimate;
- (void)_showToggleState;
- (id)_titleAttributes;
- (id)_toggledLayout;
- (bool)autoIncrement;
- (long long)autoIncrementCount;
- (long long)count;
- (void)dealloc;
- (id)delegate;
- (id)element;
- (id)init;
- (bool)isToggled;
- (void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2;
- (id)nonToggledImage;
- (id)nonToggledTitle;
- (void)setAutoIncrement:(bool)arg1;
- (void)setAutoIncrementCount:(long long)arg1;
- (void)setButtonTitleText:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setNonToggledImage:(id)arg1;
- (void)setNonToggledTitle:(id)arg1;
- (void)setToggleButtonType:(long long)arg1;
- (void)setToggleItemIdentifier:(id)arg1;
- (void)setToggled:(bool)arg1;
- (void)setToggledImage:(id)arg1;
- (void)setToggledTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)toggleButtonType;
- (id)toggleItemIdentifier;
- (id)toggledImage;
- (id)toggledTitle;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

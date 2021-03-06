/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableAction : NSObject <ABStyleProviding> {
    UIButton *_FMFButton;
    bool _allowDifferentiationSheet;
    UIButton *_button;
    UIView *_customContentView;
    <ABPersonTableActionDelegate> *_delegate;
    NSString *_detailText;
    NSString *_differentiationSheetTitle;
    bool _displaysShortTitle;
    long long _grouping;
    bool _indicatesFaceTimeHistory;
    long long _ordering;
    struct __CFArray { } *_properties;
    int _property;
    SEL _selector;
    NSString *_shortTitle;
    int _style;
    id _target;
    NSString *_title;
}

@property(assign,retain) UIView * actionContentView;
@property(assign,readwrite) bool allowDifferentiationSheet;
@property(assign,readonly) UIButton * button;
@property(assign,readwrite) <ABPersonTableActionDelegate> * delegate;
@property(assign,readonly) NSString * detailText;
@property(assign,copy) NSString * differentiationSheetTitle;
@property(assign,readwrite) bool displaysShortTitle;
@property(assign,readonly) UIButton * existingButton;
@property(assign,readwrite) long long grouping;
@property(assign,readwrite) bool indicatesFaceTimeHistory;
@property(assign,readwrite) long long ordering;
@property(assign,readwrite) struct __CFArray { }* properties;
@property(assign,readonly) int property;
@property(assign,readonly) SEL selector;
@property(assign,readonly) NSString * shortTitle;
@property(assign,readonly) int style;
@property(assign,readonly) id target;
@property(assign,readonly) NSString * title;

- (id)actionContentView;
- (bool)allowDifferentiationSheet;
- (id)button;
- (void)buttonClicked:(id)arg1;
- (long long)compareOrderingToAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)detailText;
- (id)differentiationSheetTitle;
- (bool)displaysShortTitle;
- (id)existingButton;
- (long long)grouping;
- (bool)indicatesFaceTimeHistory;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 style:(int)arg3 target:(id)arg4 selector:(SEL)arg5;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 property:(int)arg7;
- (id)initWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 property:(int)arg5;
- (id)initWithTitle:(id)arg1 style:(int)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)modifyDetailText:(id)arg1;
- (long long)ordering;
- (void)performWithSender:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)prepareButton:(id)arg1 forValueAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (struct __CFArray { }*)properties;
- (int)property;
- (SEL)selector;
- (void)setActionContentView:(id)arg1;
- (void)setAllowDifferentiationSheet:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDifferentiationSheetTitle:(id)arg1;
- (void)setDisplaysShortTitle:(bool)arg1;
- (void)setFMFActionButton:(id)arg1;
- (void)setGrouping:(long long)arg1;
- (void)setIndicatesFaceTimeHistory:(bool)arg1;
- (void)setOrdering:(long long)arg1;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (id)shortTitle;
- (int)style;
- (id)styleProvider;
- (id)target;
- (id)title;

@end

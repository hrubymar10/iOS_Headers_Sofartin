/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSegmentedControl : SUScriptObject {
    NSArray *_segments;
    long long _style;
}

@property(assign,readonly) SUSegmentedControl * activeSegmentedControl;
@property(assign,copy) NSString * cancelButtonTitle;
@property(assign,readonly) unsigned long long controlStateDisabled;
@property(assign,readonly) unsigned long long controlStateHighlighted;
@property(assign,readonly) unsigned long long controlStateNormal;
@property(assign,readonly) unsigned long long controlStateSelected;
@property(assign,readwrite) long long maximumNumberOfItems;
@property(assign,readwrite) double maximumWidth;
@property(assign,copy) NSString * moreListTitle;
@property(assign,retain) SUSegmentedControl * nativeSegmentedControl;
@property(assign,readonly) long long nativeSelectedIndex;
@property(assign,readonly) NSNumber * noSegmentIndex;
@property(assign,readonly) NSArray * rawSegments;
@property(assign,retain) id segments;
@property(assign,retain) NSNumber * selectedIndex;
@property(assign,readonly) NSNumber * selectedSegmentIndex;
@property(assign,copy) id showsMoreListAutomatically;
@property(assign,readonly) SUStorePageViewController * storePageViewController;
@property(assign,retain) NSString * style;
@property(assign,copy) id tintColor;
@property(assign,readwrite) long long tintStyle;
@property(assign,readonly) long long tintStyleDark;
@property(assign,readonly) long long tintStyleDefault;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_newNativeSegmentedControl;
- (id)_newPageSectionGroupWithSegments:(id)arg1;
- (id)_newSegmentsFromPageSectionGroup:(id)arg1;
- (void)_reloadSegmentedControl:(id)arg1 withSegments:(id)arg2;
- (void)_reloadViewControllerPageSectionGroup;
- (long long)_sectionsStyleForString:(id)arg1;
- (void)_setColor:(id)arg1 forTitleTextAttribute:(id)arg2 controlState:(unsigned long long)arg3;
- (void)_setRawSegments:(id)arg1;
- (id)activeSegmentedControl;
- (id)attributeKeys;
- (id)cancelButtonTitle;
- (unsigned long long)controlStateDisabled;
- (unsigned long long)controlStateHighlighted;
- (unsigned long long)controlStateNormal;
- (unsigned long long)controlStateSelected;
- (void)dealloc;
- (void)hideMoreListAnimated:(bool)arg1;
- (id)initWithPageSectionGroup:(id)arg1;
- (id)makeSegmentWithTitle:(id)arg1 userInfo:(id)arg2;
- (long long)maximumNumberOfItems;
- (double)maximumWidth;
- (id)moreListTitle;
- (id)nativeSegmentedControl;
- (long long)nativeSelectedIndex;
- (id)newPageSectionGroup;
- (id)noSegmentIndex;
- (id)rawSegments;
- (id)scriptAttributeKeys;
- (id)segments;
- (id)selectedIndex;
- (id)selectedSegmentIndex;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setMaximumNumberOfItems:(long long)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)setNativeSegmentedControl:(id)arg1;
- (void)setSegments:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setShowsMoreListAutomatically:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (void)setTitleColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)showMoreListAnimated:(bool)arg1;
- (void)showPopoverController:(id)arg1 fromSegmentIndex:(long long)arg2 animated:(bool)arg3;
- (id)showsMoreListAutomatically;
- (id)storePageViewController;
- (id)style;
- (id)tintColor;
- (long long)tintStyle;
- (long long)tintStyleDark;
- (long long)tintStyleDefault;
- (id)titleColorForControlState:(unsigned long long)arg1;
- (id)titleShadowColorForControlState:(unsigned long long)arg1;

@end

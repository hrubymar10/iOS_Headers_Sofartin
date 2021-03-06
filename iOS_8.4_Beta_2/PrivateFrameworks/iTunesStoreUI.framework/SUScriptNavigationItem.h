/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNavigationItem : SUScriptObject

@property(assign,copy) NSString * backButtonTitle;
@property(assign,readwrite) id hidesBackButton;
@property(assign,retain) <SUScriptNavigationItem> * leftItem;
@property(assign,readwrite) id leftItemsSupplementBackButton;
@property(assign,retain) <SUScriptNavigationItem> * leftMostItem;
@property(assign,readonly) UINavigationItem * nativeNavigationItem;
@property(assign,retain) NSString * prompt;
@property(assign,retain) <SUScriptNavigationItem> * rightItem;
@property(assign,retain) NSString * title;
@property(assign,retain) id titleView;

+ (void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2;
+ (id)_rootScriptObjectForObject:(id)arg1;
+ (void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2;
+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_copyScriptButtonForButtonItem:(id)arg1;
- (id)_copyScriptObjectForButtonItem:(id)arg1;
- (id)attributeKeys;
- (id)backButtonTitle;
- (id)hidesBackButton;
- (id)init;
- (id)initWithNativeNavigationItem:(id)arg1;
- (id)leftItem;
- (id)leftItems;
- (id)leftItemsSupplementBackButton;
- (id)leftMostItem;
- (id)nativeNavigationItem;
- (id)prompt;
- (id)rightItem;
- (id)rightItems;
- (id)scriptAttributeKeys;
- (void)setBackButtonTitle:(id)arg1;
- (void)setHidesBackButton:(id)arg1;
- (void)setHidesBackButton:(bool)arg1 animated:(bool)arg2;
- (void)setLeftItem:(id)arg1;
- (void)setLeftItem:(id)arg1 animated:(bool)arg2;
- (void)setLeftItems:(id)arg1;
- (void)setLeftItems:(id)arg1 animated:(bool)arg2;
- (void)setLeftItemsSupplementBackButton:(id)arg1;
- (void)setLeftMostItem:(id)arg1;
- (void)setLeftMostItem:(id)arg1 animated:(bool)arg2;
- (void)setPrompt:(id)arg1;
- (void)setRightItem:(id)arg1;
- (void)setRightItem:(id)arg1 animated:(bool)arg2;
- (void)setRightItems:(id)arg1;
- (void)setRightItems:(id)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleView:(id)arg1 animated:(bool)arg2;
- (void)tearDownUserInterface;
- (id)title;
- (id)titleView;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMenuViewController : SUScriptViewController {
    SUScriptFunction *_action;
}

@property(assign,retain) WebScriptObject * action;
@property(assign,retain) id items;
@property(assign,retain) NSNumber * selectedIndex;
@property(assign,retain) NSString * title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)_viewController;
- (id)action;
- (id)attributeKeys;
- (void)dealloc;
- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)items;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (id)selectedIndex;
- (void)setAction:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectedIndex:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
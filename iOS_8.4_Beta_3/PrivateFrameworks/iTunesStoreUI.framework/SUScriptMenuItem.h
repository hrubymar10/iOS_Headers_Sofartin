/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMenuItem : SUScriptObject {
    bool _enabled;
    NSString *_title;
    id _userInfo;
}

@property(assign,readwrite) bool enabled;
@property(assign,retain) NSString * title;
@property(assign,retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (void)_sendDidChange;
- (id)attributeKeys;
- (void)dealloc;
- (bool)enabled;
- (id)init;
- (id)scriptAttributeKeys;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)userInfo;

@end
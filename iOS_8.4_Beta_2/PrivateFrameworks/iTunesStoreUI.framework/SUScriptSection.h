/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSection : SUScriptObject {
    NSString *_badgeValue;
    NSString *_identifier;
    bool _transient;
    SUScriptViewController *_viewController;
}

@property(assign,retain) NSString * badgeValue;
@property(assign,readonly) NSString * identifier;
@property(assign,readonly) bool transient;
@property(assign,readonly) SUScriptViewController * viewController;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)badgeValue;
- (void)dealloc;
- (id)identifier;
- (id)initWithNativeSection:(id)arg1;
- (id)scriptAttributeKeys;
- (void)setBadgeValue:(id)arg1;
- (void)setBadgeValue:(id)arg1 animated:(bool)arg2 blink:(bool)arg3;
- (bool)transient;
- (id)viewController;

@end

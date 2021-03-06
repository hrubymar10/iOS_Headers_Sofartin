/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAppleAccountType : SUScriptObject {
    ACAccountType *_accountType;
}

@property(assign,readonly) id accessGranted;
@property(assign,readonly) NSString * accountTypeDescription;
@property(assign,readonly) NSString * identifier;
@property(assign,readonly) ACAccountType * nativeAccountType;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)accessGranted;
- (id)accountTypeDescription;
- (id)attributeKeys;
- (void)dealloc;
- (id)identifier;
- (id)initWithACAccountType:(id)arg1;
- (id)nativeAccountType;
- (id)scriptAttributeKeys;

@end

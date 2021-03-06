/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptMediaPickerController : SUScriptViewController

@property(assign,readwrite) bool allowsPickingMultipleItems;
@property(assign,readonly) NSArray * mediaTypes;
@property(assign,retain) NSString * prompt;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (bool)allowsPickingMultipleItems;
- (id)attributeKeys;
- (id)initWithMediaTypes:(id)arg1;
- (id)mediaTypes;
- (id)newNativeViewController;
- (id)prompt;
- (id)scriptAttributeKeys;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setNativeViewController:(id)arg1;
- (void)setPrompt:(id)arg1;

@end

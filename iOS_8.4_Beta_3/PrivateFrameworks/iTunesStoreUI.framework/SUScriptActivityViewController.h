/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptActivityViewController : SUScriptViewController {
    NSArray *_applicationActivities;
    NSArray *_providers;
}

@property(assign,readonly) NSString * activityTypeAddToReadingList;
@property(assign,readonly) NSString * activityTypeAssignToContact;
@property(assign,readonly) NSString * activityTypeCopyToPasteboard;
@property(assign,readonly) NSString * activityTypeMail;
@property(assign,readonly) NSString * activityTypeMessage;
@property(assign,readonly) NSString * activityTypePostToFacebook;
@property(assign,readonly) NSString * activityTypePostToFlickr;
@property(assign,readonly) NSString * activityTypePostToTwitter;
@property(assign,readonly) NSString * activityTypePostToVimeo;
@property(assign,readonly) NSString * activityTypePostToWeibo;
@property(assign,readonly) NSString * activityTypePrint;
@property(assign,readonly) NSString * activityTypeSaveToCameraRoll;
@property(assign,copy) id excludedActivityTypes;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)activityTypeAddToReadingList;
- (id)activityTypeAssignToContact;
- (id)activityTypeCopyToPasteboard;
- (id)activityTypeMail;
- (id)activityTypeMessage;
- (id)activityTypePostToFacebook;
- (id)activityTypePostToFlickr;
- (id)activityTypePostToTwitter;
- (id)activityTypePostToVimeo;
- (id)activityTypePostToWeibo;
- (id)activityTypePrint;
- (id)activityTypeSaveToCameraRoll;
- (id)attributeKeys;
- (void)dealloc;
- (id)excludedActivityTypes;
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;

@end

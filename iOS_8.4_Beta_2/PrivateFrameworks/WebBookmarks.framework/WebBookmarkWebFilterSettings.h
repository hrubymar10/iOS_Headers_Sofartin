/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkWebFilterSettings : NSObject {
    WFUserSettings *_userSettings;
}

@property(assign,readonly) WFUserSettings * userSettings;
@property(getter=isWebFilterEnabled,assign,readonly) bool webFilterEnabled;
@property(getter=isWebFilterWhiteListOnlyModeEnabled,assign,readonly) bool webFilterWhiteListOnlyModeEnabled;

+ (id)sharedWebFilterSettings;

- (void)dealloc;
- (id)init;
- (bool)isWebFilterEnabled;
- (bool)isWebFilterWhiteListOnlyModeEnabled;
- (void)reloadSettings;
- (id)userSettings;

@end

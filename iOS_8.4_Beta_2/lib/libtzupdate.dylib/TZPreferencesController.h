/* Generated by RuntimeBrowser
   Image: /usr/lib/libtzupdate.dylib
 */

@interface TZPreferencesController : NSObject

@property(assign,readonly) long long loggingLevel;
@property(assign,readonly) bool updatesEnabled;

+ (id)sharedPreferencesController;

- (id)init;
- (long long)loggingLevel;
- (void)preferencesChanged:(id)arg1;
- (bool)updatesEnabled;

@end

/* Generated by RuntimeBrowser.
 */

@protocol CPLEngineComponent <NSObject>

@required

- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id)arg2;
- (NSString *)componentName;
- (void)openWithCompletionHandler:(id)arg1;

@optional

- (void)getStatusDictionaryWithCompletionHandler:(id)arg1;
- (void)getStatusWithCompletionHandler:(id)arg1;

@end
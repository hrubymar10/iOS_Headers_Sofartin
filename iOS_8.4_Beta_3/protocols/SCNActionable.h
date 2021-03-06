/* Generated by RuntimeBrowser.
 */

@protocol SCNActionable <NSObject>

@required

- (SCNAction *)actionForKey:(NSString *)arg1;
- (bool)hasActions;
- (void)removeActionForKey:(NSString *)arg1;
- (void)removeAllActions;
- (void)runAction:(SCNAction *)arg1;
- (void)runAction:(SCNAction *)arg1 completionHandler:(id)arg2;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2 completionHandler:(id)arg3;

@end

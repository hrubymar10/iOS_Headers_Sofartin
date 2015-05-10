/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHandleRemoteNotificationAction : BSAction

@property(assign,copy) NSString * action;
@property(assign,copy) NSDictionary * payload;

- (long long)UIActionType;
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 type:(long long)arg3 withHandler:(id)arg4;
- (id)action;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(id)arg3;
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)payload;
- (void)sendResponse:(id)arg1;

@end

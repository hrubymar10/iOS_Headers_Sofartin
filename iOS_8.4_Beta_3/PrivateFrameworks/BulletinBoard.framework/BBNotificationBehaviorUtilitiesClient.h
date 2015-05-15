/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {
    id _activeBehaviorOverridesChangeHandler;
    NSXPCConnection *_connection;
    id _filteringStateChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;

- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)notificationPresentationFilteringChangedToEnabled:(bool)arg1;
- (void)setActiveBehaviorOverridesChangeHandler:(id)arg1;
- (void)setFilteringStateChangeHandler:(id)arg1;
- (void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(id)arg3;

@end

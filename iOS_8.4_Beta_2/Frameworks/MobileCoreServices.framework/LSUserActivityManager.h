/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol> {
    NSUUID *_activeUserActivityUUID;
    bool _activityContinuationIsEnabled;
    NSXPCConnection *_connection;
    bool _connectionInitializationSucceeded;
    bool _needToSendInitialMessage;
    NSObject<OS_dispatch_queue> *_serverQ;
    bool _supportsActivityContinuation;
    NSMapTable *_userActivitiesByUUID;
}

@property(assign,copy) NSUUID * activeUserActivityUUID;
@property(assign,readonly) bool activityContinuationIsEnabled;
@property(assign,retain) NSXPCConnection * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSObject<OS_dispatch_queue> * serverQ;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool supportsActivityContinuation;
@property(assign,retain) NSMapTable * userActivitiesByUUID;

+ (id)defaultManager;
+ (bool)shouldSupportActivityContinuation;
+ (bool)userActivityContinuationSupported;

- (id)_findUserActivityForUUID:(id)arg1;
- (id)activeUserActivityUUID;
- (bool)activityContinuationIsEnabled;
- (void)addUserActivity:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(id)arg2;
- (id)connection;
- (id)createByDecodingUserActivity:(id)arg1;
- (void)dealloc;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)encodeUserActivity:(id)arg1;
- (void)fetchUUID:(id)arg1 withCompletionHandler:(id)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(bool)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)sendInitialMessage;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(bool)arg2;
- (id)serverQ;
- (void)setActiveUserActivityUUID:(id)arg1;
- (void)setUserActivitiesByUUID:(id)arg1;
- (bool)supportsActivityContinuation;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)userActivitiesByUUID;
- (bool)userActivityIsActive:(id)arg1;

@end

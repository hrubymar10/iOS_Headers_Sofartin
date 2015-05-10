/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMarkNotificationsReadOperation : CKDOperation {
    NSMutableDictionary *_errorByNotificationID;
    NSArray *_notificationIDs;
    id _notificationMarkedRead;
    NSMutableSet *_successfulNotificationIDs;
}

@property(assign,retain) NSMutableDictionary * errorByNotificationID;
@property(assign,retain) NSArray * notificationIDs;
@property(assign,copy) id notificationMarkedRead;
@property(assign,retain) NSMutableSet * successfulNotificationIDs;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleNotificationID:(id)arg1 withResponse:(id)arg2;
- (id)errorByNotificationID;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)notificationIDs;
- (id)notificationMarkedRead;
- (void)setErrorByNotificationID:(id)arg1;
- (void)setNotificationIDs:(id)arg1;
- (void)setNotificationMarkedRead:(id)arg1;
- (void)setSuccessfulNotificationIDs:(id)arg1;
- (id)successfulNotificationIDs;

@end
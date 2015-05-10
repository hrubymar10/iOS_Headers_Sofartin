/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatusCoordinator : NSObject {
    SSVSubscriptionStatusRequest *_activeRequest;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    bool _didReset;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSVSubscriptionStatus *_lastKnownStatus;
    NSDate *_lastStatusDate;
    int _notificationToken;
    NSMutableArray *_statusBlocks;
}

@property(assign,copy) SSVSubscriptionStatus * lastKnownStatus;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)_copyStatusFromUserDefaults;
- (id)_copyValidStatusForStatus:(id)arg1;
- (void)_externalChangeNotification;
- (void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(bool)arg2 error:(id)arg3;
- (void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(bool)arg2 error:(id)arg3;
- (void)_validateLastKnownStatus;
- (void)dealloc;
- (void)getStatusWithOptions:(id)arg1 statusBlock:(id)arg2;
- (id)init;
- (id)lastKnownStatus;
- (void)reset;

@end

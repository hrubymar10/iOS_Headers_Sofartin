/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {
    bool _isFetchAllSubscriptionsOperation;
    id _subscriptionFetchedProgressBlock;
    NSArray *_subscriptionIDs;
    NSArray *_subscriptions;
}

@property(assign,readwrite) bool isFetchAllSubscriptionsOperation;
@property(assign,copy) id subscriptionFetchedProgressBlock;
@property(assign,retain) NSArray * subscriptionIDs;
@property(assign,retain) NSArray * subscriptions;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isFetchAllSubscriptionsOperation;
- (void)main;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setSubscriptionFetchedProgressBlock:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptionFetchedProgressBlock;
- (id)subscriptionIDs;
- (id)subscriptions;

@end

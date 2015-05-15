/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSSubscriber : MSCupidStateMachine <MSReauthorizationProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSSubscribeStreamsProtocolDelegate, MSSubscriber> {
    NSMutableArray *_assetsBeingRetrieved;
    bool _checkOneMoreTime;
    MSMediaStreamDaemon *_daemon;
    <MSSubscriberDelegate> *_delegate;
    long long _maxErrorCount;
    NSMutableDictionary *_newSubscriptionsByStreamID;
    MSSubscribeStreamsProtocol *_protocol;
    MSReauthorizationProtocol *_reauthProtocol;
    int _retrievalBatchSize;
    MSObjectQueue *_retrievalQueue;
    int _retrievalState;
    int _state;
    <MSSubscribeStorageProtocol> *_storageProtocol;
    long long _targetRetrievalByteCount;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int retrievalBatchSize;
@property (readonly) Class superclass;
@property (nonatomic) long long targetRetrievalByteCount;

+ (id)_clearInstantiatedSubscribersByPersonID;
+ (id)_descriptionForRetrievalState:(int)arg1;
+ (id)_descriptionForState:(int)arg1;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)existingSubscriberForPersonID:(id)arg1;
+ (void)forgetPersonID:(id)arg1;
+ (bool)isInRetryState;
+ (id)nextActivityDate;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)personIDsWithOutstandingActivities;
+ (void)stopAllActivities;
+ (id)subscriberForPersonID:(id)arg1;

- (void).cxx_destruct;
- (void)_abort;
- (void)_changeRetrievalStateTo:(int)arg1;
- (void)_changeStateTo:(int)arg1;
- (void)_checkForNewAssetCollections;
- (void)_didFinishRetrievingSubscriptionUpdate;
- (void)_didReceiveAuthenticationError:(id)arg1;
- (void)_finishedRetrievingAsset:(id)arg1;
- (void)_forget;
- (bool)_hasOutstandingPoll;
- (bool)_isAllowedToDownload;
- (bool)_isInRetryState;
- (void)_reauthorizeAssets;
- (void)_refreshServerSideConfigurationParameters;
- (void)_retrieveAssets;
- (void)_retrieveNextAssets;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (void)_setHasOutstandingPoll:(bool)arg1;
- (void)_setSubscriptionsByStreamID:(id)arg1;
- (void)_stopOutSubscriberState:(int*)arg1 outRetrievalState:(int*)arg2;
- (id)_subscriptionsByStreamID;
- (void)_updateMasterManifest;
- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
- (id)daemon;
- (void)deactivate;
- (void)dealloc;
- (id)delegate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)ownSubscribedStream;
- (void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4;
- (void)resetSync;
- (int)retrievalBatchSize;
- (void)retrieveAssets:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRetrievalBatchSize:(int)arg1;
- (void)setTargetRetrievalByteCount:(long long)arg1;
- (void)stop;
- (void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1;
- (void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(bool)arg3 metadata:(id)arg4;
- (id)subscribedStreams;
- (long long)targetRetrievalByteCount;

@end

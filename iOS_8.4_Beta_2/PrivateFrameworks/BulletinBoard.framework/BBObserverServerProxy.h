/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {
    NSXPCConnection *_connection;
    bool _isEstablished;
    bool _isValid;
    BBObserver *_observerWeak;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,retain) NSXPCConnection * connection;
@property(assign,readwrite) BBObserver * observerWeak;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;

+ (id)xpcInterface;

- (void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
- (void)clearSection:(id)arg1;
- (id)connection;
- (void)dealloc;
- (bool)established;
- (void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id)arg1;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(id)arg3;
- (void)getObserverDebugInfo:(id)arg1;
- (void)getPrimaryAttachmentDataForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (id)observer;
- (id)observerWeak;
- (id)queue;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
- (void)requestFutureBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)requestTodayBulletinsForSectionID:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
- (void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
- (void)setObserverWeak:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withHandler:(id)arg3;
- (void)updateSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)updateSectionOrder:(id)arg1 forCategory:(long long)arg2;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end

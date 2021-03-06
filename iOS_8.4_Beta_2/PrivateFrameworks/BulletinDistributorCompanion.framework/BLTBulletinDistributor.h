/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributor : NSObject <BBObserverDelegate, BLTCompanionServer, NSXPCListenerDelegate> {
    BLTAttachmentHashCache *_attachmentHashCache;
    BBObserver *_bbObserver;
    NSMutableDictionary *_bulletins;
    NSString *_bundleRootPath;
    BLTRemoteGizmoClient *_gizmoConnection;
    NSMutableSet *_lockScreenFeed;
    NSMutableSet *_noticesFeed;
    BLTSettingSync *_settingSync;
    BLTBulletinDistributorSubscriberList *_subscribers;
    BLTWatchKitAppList *_watchKitAppList;
}

@property(assign,retain) BLTAttachmentHashCache * attachmentHashCache;
@property(assign,retain) BBObserver * bbObserver;
@property(assign,retain) NSMutableDictionary * bulletins;
@property(assign,copy) NSString * bundleRootPath;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) BLTRemoteGizmoClient * gizmoConnection;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSMutableSet * lockScreenFeed;
@property(assign,retain) NSMutableSet * noticesFeed;
@property(assign,retain) BLTBulletinDistributorSubscriberList * subscribers;
@property(assign,readonly) Class superclass;
@property(assign,retain) BLTWatchKitAppList * watchKitAppList;

+ (id)sharedDistributor;

- (void).cxx_destruct;
- (id)_bulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)_handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 finalReply:(bool)arg4;
- (void)_handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5 fromGizmo:(bool)arg6 finalReply:(bool)arg7;
- (void)_loadPingSubscriberBundles;
- (unsigned long long)_nanoPresentableFeedFromPhoneFeed:(unsigned long long)arg1;
- (void)_notifyGizmoOfBulletin:(id)arg1 forFeed:(unsigned long long)arg2 updateType:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 shouldSendReplyIfNeeded:(bool)arg5;
- (void)_notifyGizmoOfCancelBulletin:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3;
- (void)_pingSubscriberWithBulletin:(id)arg1;
- (void)_reconnectObserver;
- (bool)_willNanoPresent:(unsigned long long)arg1;
- (bool)_willNanoPresent:(unsigned long long)arg1 forBulletin:(id)arg2 feed:(unsigned long long)arg3;
- (id)attachmentHashCache;
- (id)bbObserver;
- (id)bulletins;
- (id)bundleRootPath;
- (void)dealloc;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id)arg3;
- (id)gizmoConnection;
- (void)handleAcknowledgeActionForPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(id)arg2 inPhoneSection:(id)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
- (void)handleDismissActionForPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)handlePairedDeviceIdentifier:(id)arg1 carry:(bool)arg2;
- (void)handleSnoozeActionForPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)handleSupplementaryActionWithIdentifier:(id)arg1 forPublisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)lockScreenFeed;
- (id)noticesFeed;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id)arg5;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (struct CGSize { double x1; double x2; })observer:(id)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
- (void)sendBulletinSummary:(id)arg1;
- (void)setAttachmentHashCache:(id)arg1;
- (void)setBbObserver:(id)arg1;
- (void)setBulletins:(id)arg1;
- (void)setBundleRootPath:(id)arg1;
- (void)setGizmoConnection:(id)arg1;
- (void)setLockScreenFeed:(id)arg1;
- (void)setNoticesFeed:(id)arg1;
- (void)setReplyBlock:(id)arg1 forSection:(id)arg2 bulletin:(id)arg3 publicationDate:(id)arg4;
- (void)setSubscribers:(id)arg1;
- (void)setWatchKitAppList:(id)arg1;
- (id)subscribers;
- (id)watchKitAppList;

@end

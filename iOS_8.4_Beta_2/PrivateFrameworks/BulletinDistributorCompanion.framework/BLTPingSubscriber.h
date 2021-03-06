/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing> {
    NSMutableDictionary *_bulletinHandlers;
    NSMutableDictionary *_pingHandlers;
    <BLTPingService> *_service;
}

@property(assign,retain) NSMutableDictionary * bulletinHandlers;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSMutableDictionary * pingHandlers;
@property(assign,retain) <BLTPingService> * service;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)bulletinHandlers;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(id)arg2;
- (void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(id)arg3;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)pingHandlers;
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (id)sectionIDsForPings;
- (void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3;
- (id)service;
- (void)setBulletinHandlers:(id)arg1;
- (void)setPingHandlers:(id)arg1;
- (void)setService:(id)arg1;
- (void)subscribeToSectionID:(id)arg1 withBulletinHandler:(id)arg2;
- (void)subscribeToSectionID:(id)arg1 withPingHandler:(id)arg2;
- (void)subscribeWithMachServiceName:(id)arg1;
- (void)unsubscribeFromSectionID:(id)arg1;

@end

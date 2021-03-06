/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_subscribers;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSObject<OS_dispatch_queue> * queue;
@property(assign,retain) NSMutableArray * subscribers;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeSubscribersWithMachServiceName:(id)arg1 exceptFor:(id)arg2;
- (void)addSubscriber:(id)arg1;
- (bool)hasSubscribersForSectionID:(id)arg1;
- (id)init;
- (void)pingWithBulletin:(id)arg1;
- (id)queue;
- (void)removeSubscriber:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (id)subscribedSectionIDs;
- (void)subscriber:(id)arg1 subscribedWithMachServiceName:(id)arg2;
- (id)subscribers;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing> {
    NSXPCConnection *_connection;
}

@property(assign,retain) NSXPCConnection * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(id)arg1;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (id)sectionIDsForPings;
- (void)setConnection:(id)arg1;

@end

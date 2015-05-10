/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerState : NSManagedObject

@property(assign,retain) NSString * lastProcessedTransactionLogURL;
@property(assign,retain) PFUbiquityPeer * peer;
@property(assign,retain) PFUbiquityStoreMetadata * storeMetadata;
@property(assign,retain) NSString * storeName;
@property(assign,retain) NSNumber * transactionNumber;

+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(bool)arg4;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3;

- (id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
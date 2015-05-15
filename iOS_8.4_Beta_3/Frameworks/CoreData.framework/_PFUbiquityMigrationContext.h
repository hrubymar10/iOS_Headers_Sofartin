/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFUbiquityMigrationContext : NSObject {
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityTransactionLog *_transactionLog;
}

@property(assign,retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;
@property(assign,retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;
@property(assign,retain) PFUbiquityTransactionLog * transactionLog;

- (void)dealloc;
- (id)destinationStoreSaveSnapshot;
- (void)setDestinationStoreSaveSnapshot:(id)arg1;
- (void)setSourceStoreSaveSnapshot:(id)arg1;
- (void)setTransactionLog:(id)arg1;
- (id)sourceGlobalObjectIDFromCompressedID:(id)arg1;
- (id)sourceStoreSaveSnapshot;
- (id)transactionLog;

@end

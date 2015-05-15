/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool _atomic;
    NSData *_clientChangeTokenData;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSArray *_recordsToSave;
    long long _savePolicy;
    bool _shouldOnlySaveAssetContent;
}

@property(assign,readwrite) bool atomic;
@property(assign,retain) NSData * clientChangeTokenData;
@property(assign,retain) NSDictionary * conflictLosersToResolveByRecordID;
@property(assign,retain) NSArray * recordIDsToDelete;
@property(assign,copy) NSDictionary * recordIDsToDeleteToEtags;
@property(assign,retain) NSArray * recordsToSave;
@property(assign,readwrite) long long savePolicy;
@property(assign,readwrite) bool shouldOnlySaveAssetContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsToSave;
- (long long)savePolicy;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;

@end

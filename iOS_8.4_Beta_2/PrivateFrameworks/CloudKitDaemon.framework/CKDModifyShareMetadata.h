/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareMetadata : NSObject {
    CKDeleteShareInfo *_deleteInfo;
    NSError *_error;
    bool _isDelete;
    CKShare *_share;
    CKShareID *_shareID;
    unsigned long long _state;
}

@property(assign,retain) CKDeleteShareInfo * deleteInfo;
@property(assign,retain) NSError * error;
@property(assign,readonly) bool isDelete;
@property(assign,readonly) CKShare * share;
@property(assign,readonly) CKShareID * shareID;
@property(assign,readwrite) unsigned long long state;

+ (id)_stringForUploadState:(unsigned long long)arg1;
+ (id)modifyMetadataForDeleteWithShareID:(id)arg1;
+ (id)modifyMetadataWithShare:(id)arg1;

- (void).cxx_destruct;
- (id)deleteInfo;
- (id)description;
- (id)error;
- (id)initWithShare:(id)arg1;
- (id)initWithShareID:(id)arg1;
- (bool)isDelete;
- (void)setDeleteInfo:(id)arg1;
- (void)setError:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)share;
- (id)shareID;
- (unsigned long long)state;

@end

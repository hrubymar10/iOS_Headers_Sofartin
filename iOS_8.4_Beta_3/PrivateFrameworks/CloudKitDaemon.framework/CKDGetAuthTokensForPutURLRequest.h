/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetAuthTokensForPutURLRequest : CKDURLRequest {
    NSMapTable *_MMCSItemsByRecordIDs;
    NSMapTable *_recordIDsByRequestIDs;
}

@property(assign,readonly) NSMapTable * MMCSItemsByRecordIDs;
@property(assign,retain) NSMapTable * recordIDsByRequestIDs;

- (void).cxx_destruct;
- (id)MMCSItemsByRecordIDs;
- (id)initWithMMCSItems:(id)arg1;
- (int)operationType;
- (id)recordIDsByRequestIDs;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setRecordIDsByRequestIDs:(id)arg1;

@end
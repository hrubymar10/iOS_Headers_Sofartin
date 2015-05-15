/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchedRecordInfo : NSObject {
    NSError *_error;
    CKRecord *_record;
}

@property(assign,retain) NSError * error;
@property(assign,retain) CKRecord * record;

+ (id)infoWithRecord:(id)arg1;
+ (id)infoWithRecord:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)error;
- (id)record;
- (void)setError:(id)arg1;
- (void)setRecord:(id)arg1;

@end
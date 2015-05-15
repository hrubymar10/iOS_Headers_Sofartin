/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordPCSData : CKDPCSData {
    CKRecordID *_recordID;
    CKDPCSData *_sharePCSData;
    CKDPCSData *_zonePCSData;
}

@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) CKDPCSData *sharePCSData;
@property (nonatomic, retain) CKDPCSData *zonePCSData;

+ (id)dataWithRecordID:(id)arg1 pcsData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordID:(id)arg1 pcsData:(id)arg2;
- (id)itemID;
- (id)recordID;
- (void)setRecordID:(id)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setZonePCSData:(id)arg1;
- (id)sharePCSData;
- (id)zonePCSData;

@end

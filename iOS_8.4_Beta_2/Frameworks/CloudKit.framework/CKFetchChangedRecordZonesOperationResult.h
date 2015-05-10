/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchChangedRecordZonesOperationResult : CKOperationResult <NSSecureCoding> {
    CKServerChangeToken *_serverChangeToken;
    NSNumber *_status;
}

@property(assign,retain) CKServerChangeToken * serverChangeToken;
@property(assign,retain) NSNumber * status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverChangeToken;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end

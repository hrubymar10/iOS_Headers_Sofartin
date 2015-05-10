/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchSharesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_shareIDs;
    NSArray *_zoneIDs;
}

@property(assign,retain) NSArray * shareIDs;
@property(assign,retain) NSArray * zoneIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)shareIDs;
- (id)zoneIDs;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZoneID : NSObject <NSCopying, NSSecureCoding> {
    NSString *_ownerName;
    NSString *_zoneName;
}

@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic, retain) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)ownerName;
- (void)setOwnerName:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)sqliteRepresentation;
- (id)zoneName;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding> {
    NSData *_data;
    CKRecordZoneID *_zoneID;
}

@property(assign,retain) NSData * data;
@property(assign,retain) CKRecordZoneID * zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 zoneID:(id)arg2;
- (void)setData:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)zoneID;

@end

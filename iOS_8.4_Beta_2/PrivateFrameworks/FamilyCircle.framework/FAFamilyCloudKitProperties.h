/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding> {
    NSDictionary *_dictionary;
}

@property(assign,copy) NSString * bundleID;
@property(assign,copy) NSDictionary * dictionary;
@property(assign,copy) NSString * participantID;
@property(assign,copy) NSString * shareID;
@property(assign,copy) NSString * zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)participantID;
- (id)shareID;
- (id)zoneID;

@end
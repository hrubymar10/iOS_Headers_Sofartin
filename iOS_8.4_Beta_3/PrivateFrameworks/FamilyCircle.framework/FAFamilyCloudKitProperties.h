/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCloudKitProperties : NSObject <NSSecureCoding> {
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSString *participantID;
@property (nonatomic, readonly, copy) NSString *shareID;
@property (nonatomic, readonly, copy) NSString *zoneID;

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

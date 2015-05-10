/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {
    NSSet *_embeddedBeacons;
    NSSet *_embeddedLocations;
    NSDate *_expirationDate;
    NSString *_groupingID;
    NSString *_iAdReportingIdentifier;
    NSDate *_ingestedDate;
    NSURL *_localLocationsURL;
    NSDate *_modifiedDate;
    NSString *_organizationName;
    PKImage *_partialFrontFaceImagePlaceholder;
    unsigned long long _passType;
    NSString *_passTypeIdentifier;
    NSURL *_passURL;
    NSDate *_relevantDate;
    bool _revoked;
    NSNumber *_sequenceCounter;
    NSString *_serialNumber;
    long long _sharingMethod;
    NSString *_sharingText;
    NSURL *_sharingURL;
    NSString *_teamID;
    NSDictionary *_userInfo;
    bool _voided;
    NSURL *_webLocationsURL;
}

@property(assign,readonly) NSURL * appLaunchURL;
@property(assign,copy) NSString * authenticationToken;
@property(assign,readonly) PKImage * backFaceImage;
@property(assign,readonly) NSArray * backFieldBuckets;
@property(assign,readonly) PKBarcode * barcode;
@property(assign,copy) PKPassDisplayProfile * displayProfile;
@property(assign,copy) NSSet * embeddedBeacons;
@property(assign,copy) NSSet * embeddedLocations;
@property(assign,copy) NSDate * expirationDate;
@property(assign,readonly) PKImage * footerImage;
@property(assign,readonly) PKImage * frontFaceImage;
@property(assign,readonly) NSArray * frontFieldBuckets;
@property(assign,copy) NSString * groupingID;
@property(assign,readonly) bool hasLogoImageSet;
@property(setter=setiAdReportingIdentifier:,assign,copy) NSString * iAdReportingIdentifier;
@property(assign,copy) UIImage * icon;
@property(assign,readonly) PKImage * iconImage;
@property(assign,retain) NSDate * ingestedDate;
@property(assign,copy) NSURL * localLocationsURL;
@property(assign,copy) NSString * localizedDescription;
@property(assign,copy) NSString * localizedName;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } logoRect;
@property(assign,readonly) NSString * logoText;
@property(assign,readonly) NSString * lowercaseLocalizedName;
@property(assign,retain) NSDate * modifiedDate;
@property(assign,readonly) NSData * npkCompleteHash;
@property(assign,readonly) bool npkExpired;
@property(assign,readonly) bool npkHasBarcode;
@property(assign,copy) NSString * organizationName;
@property(assign,readonly) PKImage * partialFrontFaceImage;
@property(assign,readonly) PKImage * partialFrontFaceImagePlaceholder;
@property(assign,readwrite) unsigned long long passType;
@property(assign,copy) NSString * passTypeIdentifier;
@property(assign,copy) NSURL * passURL;
@property(assign,readonly) PKPaymentPass * paymentPass;
@property(assign,readonly) NSString * pluralLocalizedName;
@property(assign,copy) NSDate * relevantDate;
@property(getter=isRevoked,assign,readwrite) bool revoked;
@property(assign,copy) NSNumber * sequenceCounter;
@property(assign,copy) NSString * serialNumber;
@property(assign,readwrite) long long sharingMethod;
@property(assign,copy) NSString * sharingText;
@property(assign,copy) NSURL * sharingURL;
@property(assign,readonly) NSArray * storeIdentifiers;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stripRect;
@property(assign,readonly) long long style;
@property(assign,copy) NSString * teamID;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailRect;
@property(assign,readonly) long long transitType;
@property(assign,readonly) NSString * uniqueID;
@property(assign,copy) NSDictionary * userInfo;
@property(getter=isVoided,assign,readwrite) bool voided;
@property(assign,copy) NSURL * webLocationsURL;
@property(assign,copy) NSURL * webServiceURL;

+ (bool)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id)_changeMessageForFieldKey:(id)arg1;
- (id)_groupingIDFromPassDictionary:(id)arg1;
- (id)_localizationKeyForMultipleDiff;
- (id)appLaunchURL;
- (id)backFaceImage;
- (id)backFieldBuckets;
- (id)backgroundImage;
- (id)barcode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)diff:(id)arg1;
- (void)downloadRemoteAssetsWithCompletion:(id)arg1;
- (id)embeddedBeacons;
- (id)embeddedLocations;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)footerImage;
- (id)frontFaceImage;
- (id)frontFieldBuckets;
- (id)groupingID;
- (bool)hasLocationRelevancyInfo;
- (bool)hasLogoImageSet;
- (bool)hasTimeOrLocationRelevancyInfo;
- (id)iAdReportingIdentifier;
- (id)icon;
- (id)iconImage;
- (id)ingestedDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (bool)isEqualToPassIncludingMetadata:(id)arg1;
- (bool)isExpired;
- (bool)isRevoked;
- (bool)isUpdatable;
- (bool)isVoided;
- (id)localLocationsURL;
- (id)localizedDescription;
- (id)localizedDescriptionForDiff:(id)arg1;
- (id)localizedName;
- (id)localizedValueForFieldKey:(id)arg1;
- (id)logoImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })logoRect;
- (id)logoText;
- (id)lowercaseLocalizedName;
- (id)mailAttachmentIcon;
- (id)modifiedDate;
- (id)npkCompleteHash;
- (bool)npkExpired;
- (bool)npkHasBarcode;
- (id)organizationName;
- (id)partialFrontFaceImage;
- (id)partialFrontFaceImagePlaceholder;
- (unsigned long long)passType;
- (id)passTypeIdentifier;
- (id)passURL;
- (id)paymentPass;
- (id)pluralLocalizedName;
- (id)relevantDate;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setEmbeddedBeacons:(id)arg1;
- (void)setEmbeddedLocations:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setGroupingID:(id)arg1;
- (void)setIngestedDate:(id)arg1;
- (void)setLocalLocationsURL:(id)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPassType:(unsigned long long)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRelevantDate:(id)arg1;
- (void)setRevoked:(bool)arg1;
- (void)setSequenceCounter:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSharingMethod:(long long)arg1;
- (void)setSharingText:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (void)setTeamID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVoided:(bool)arg1;
- (void)setWebLocationsURL:(id)arg1;
- (void)setiAdReportingIdentifier:(id)arg1;
- (long long)sharingMethod;
- (id)sharingText;
- (id)sharingURL;
- (id)storeIdentifiers;
- (id)stripImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stripRect;
- (long long)style;
- (bool)supportsSharing;
- (id)teamID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailRect;
- (long long)transitType;
- (id)userInfo;
- (id)webLocationsURL;

@end

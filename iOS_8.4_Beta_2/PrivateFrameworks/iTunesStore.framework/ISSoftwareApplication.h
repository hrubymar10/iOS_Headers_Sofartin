/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {
    NSNumber *_accountDSID;
    NSString *_accountIdentifier;
    bool _beta;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersionString;
    NSString *_bundleVersion;
    NSString *_containerPath;
    SSItemContentRating *_contentRating;
    NSString *_deviceIdentifierForVendor;
    NSNumber *_familyAccountIdentifier;
    NSNumber *_itemIdentifier;
    NSString *_itemName;
    bool _placeholder;
    bool _profileValidated;
    NSDate *_receiptExpirationDate;
    NSString *_softwareType;
    NSNumber *_storeFrontIdentifier;
    NSString *_vendorName;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
    unsigned long long _vppStateFlags;
}

@property(assign,retain) NSNumber * accountDSID;
@property(assign,copy) NSString * accountIdentifier;
@property(getter=isBeta,assign,readwrite) bool beta;
@property(assign,copy) NSString * bundleIdentifier;
@property(assign,copy) NSString * bundleShortVersionString;
@property(assign,copy) NSString * bundleVersion;
@property(assign,copy) NSString * containerPath;
@property(assign,copy) SSItemContentRating * contentRating;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * deviceIdentifierForVendor;
@property(assign,copy) NSNumber * familyAccountIdentifier;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSNumber * itemIdentifier;
@property(assign,copy) NSString * itemName;
@property(getter=isPlaceholder,assign,readwrite) bool placeholder;
@property(getter=isProfileValidated,assign,readwrite) bool profileValidated;
@property(assign,readonly) NSDate * receiptExpirationDate;
@property(assign,copy) NSString * softwareType;
@property(assign,retain) NSNumber * storeFrontIdentifier;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * vendorName;
@property(assign,retain) NSNumber * versionIdentifier;
@property(assign,copy) NSArray * versionOrdering;
@property(assign,readonly) unsigned long long vppStateFlags;

- (id)ITunesMetadataDictionary;
- (void)_loadMetadataFromContainer:(id)arg1;
- (id)accountDSID;
- (id)accountIdentifier;
- (id)bundleIdentifier;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (id)containerPath;
- (id)contentRating;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifierForVendor;
- (id)familyAccountIdentifier;
- (id)initWithLaunchServicesApplication:(id)arg1;
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBeta;
- (bool)isPlaceholder;
- (bool)isProfileValidated;
- (id)itemIdentifier;
- (id)itemName;
- (id)receiptExpirationDate;
- (void)resetVPPStateFlags;
- (void)setAccountDSID:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBeta:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleShortVersionString:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setDeviceIdentifierForVendor:(id)arg1;
- (void)setFamilyAccountIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setProfileValidated:(bool)arg1;
- (void)setSoftwareType:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setVendorName:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (void)setVersionOrdering:(id)arg1;
- (id)softwareType;
- (id)storeFrontIdentifier;
- (id)vendorName;
- (id)versionIdentifier;
- (id)versionOrdering;
- (unsigned long long)vppStateFlags;

@end

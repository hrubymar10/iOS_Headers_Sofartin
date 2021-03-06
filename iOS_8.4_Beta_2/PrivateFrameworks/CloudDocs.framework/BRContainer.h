/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainer : NSObject <NSSecureCoding> {
    unsigned int _currentStatus;
    long long _currentStatusOnceToken;
    NSString *_identifier;
    bool _isCloudSyncTCCDisabled;
    bool _isDocumentScopePublic;
    bool _isInInitialState;
    bool _isOverQuota;
    NSDate *_lastServerUpdate;
    long long _lastServerUpdateOnceToken;
    NSMutableDictionary *_propertiesByBundleID;
    NSMultiReadUniWriteLock *_readWriteLock;
    NSData *_sbExtension;
}

@property(assign,copy) NSSet * bundleIdentifiers;
@property(assign,readwrite) unsigned int currentStatus;
@property(assign,readonly) unsigned int currentStatus;
@property(assign,readonly) NSSet * documentsTypes;
@property(assign,readonly) NSURL * documentsURL;
@property(assign,readonly) NSSet * exportedTypes;
@property(assign,readonly) NSString * identifier;
@property(assign,readonly) NSSet * importedTypes;
@property(assign,readwrite) bool isCloudSyncTCCDisabled;
@property(assign,readonly) bool isDocumentScopePublic;
@property(assign,readwrite) bool isInInitialState;
@property(assign,retain) NSDate * lastServerUpdate;
@property(assign,retain) NSDate * lastServerUpdate;
@property(assign,readonly) NSString * localizedName;
@property(getter=isOverQuota,assign,readwrite) bool overQuota;
@property(getter=isOverQuota,assign,readonly) bool overQuota;
@property(assign,readonly) NSData * propertiesData;
@property(assign,readonly) NSString * supportedFolderLevels;

+ (id)URLForPlistOfContainerIdentifier:(id)arg1;
+ (void)_generateiOSIconsIntoDict:(id)arg1 usingBundle:(id)arg2;
+ (id)allContainers;
+ (id)allContainersByContainerID;
+ (id)classesForDecoding;
+ (id)containerForContainerID:(id)arg1;
+ (id)containerForItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)containerIDFromSharedMangledID:(id)arg1;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(bool)arg2 error:(id*)arg3;
+ (id)containerInRepositoryURL:(id)arg1 error:(id*)arg2;
+ (id)containerRepositoryURLForIdentifier:(id)arg1;
+ (id)containersRepositoryURL;
+ (id)documentContainers;
+ (id)localizedNameForDefaultCloudDocsContainer;
+ (id)ownerNameFromSharedMangledID:(id)arg1;
+ (void)postContainerListUpdateNotification;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)privateMangledContainerID:(id)arg1;
+ (id)privateUnmangledContainerID:(id)arg1;
+ (id)propertiesForContainerID:(id)arg1 usingBundle:(id)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4;
+ (id)readMetadataForContainerID:(id)arg1 fromPlistAtPath:(id)arg2 createIfMissing:(bool)arg3 error:(id*)arg4;
+ (id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2;
+ (bool)supportsSecureCoding;
+ (bool)validateContainerID:(id)arg1;
+ (bool)validateOwnerName:(id)arg1;
+ (bool)validateSharedMangledID:(id)arg1;
+ (bool)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;

- (void)_computeCachedProperties;
- (bool)_getIsDocumentScopePublic;
- (void)_performWhileAccessingSecurityScopedContainer:(id)arg1;
- (bool)_setProperties:(id)arg1 stagedBundleIconPaths:(id)arg2 bundleIconsDict:(id)arg3 salt:(id)arg4 needsRefresh:(bool)arg5;
- (id)bundleIdentifiers;
- (id)bundleIdentifiersEnumerator;
- (id)containerRepositoryURL;
- (unsigned int)currentStatus;
- (void)dealloc;
- (bool)deleteAllContentsOnClientAndServer:(id*)arg1;
- (id)description;
- (id)documentsTypes;
- (id)documentsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratorOfBundleProperty:(id)arg1 valuesOfClass:(Class)arg2;
- (id)exportedTypes;
- (bool)hasIconWithName:(id)arg1;
- (bool)hasMostRecentMetadataForBundleID:(id)arg1;
- (id)iconURLs;
- (id)identifier;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2;
- (id)imageDataForSize:(struct CGSize { double x1; double x2; })arg1 scale:(long long)arg2 isiOSIcon:(bool*)arg3;
- (id)imageRepresentationsAvailable;
- (id)importedTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 propertiesByBundleID:(id)arg2;
- (bool)isCloudSyncTCCDisabled;
- (bool)isDocumentScopePublic;
- (bool)isInInitialState;
- (bool)isOverQuota;
- (id)lastServerUpdate;
- (id)localizedName;
- (id)localizedNameForLocale:(id)arg1;
- (id)mangledID;
- (id)pathForIconName:(id)arg1;
- (id)pathForPlist;
- (id)propertiesData;
- (void)setCurrentStatus:(unsigned int)arg1;
- (void)setIsCloudSyncTCCDisabled:(bool)arg1;
- (void)setIsInInitialState:(bool)arg1;
- (void)setLastServerUpdate:(id)arg1;
- (bool)setPropertiesFromExtractorDict:(id)arg1 bundleIcons:(id)arg2 forBundleIdentifier:(id)arg3 salt:(id)arg4;
- (bool)setPropertiesFromRecordData:(id)arg1 stagedBundleIconPaths:(id)arg2 salt:(id)arg3;
- (id)shortDescription;
- (id)supportedFolderLevels;
- (id)versionNumberForBundleIdentifier:(id)arg1;

@end

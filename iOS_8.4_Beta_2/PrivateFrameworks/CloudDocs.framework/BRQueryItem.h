/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQueryItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_attrs;
    NSString *_containerID;
    unsigned short _diffs;
    NSNumber *_fileObjectID;
    union { 
        struct { 
            unsigned int downloadStatus : 2; 
            unsigned int uploadStatus : 2; 
            unsigned int itemStatus : 2; 
            unsigned int conflicted : 1; 
            unsigned int document : 1; 
            unsigned int preCrashMarker : 1; 
            unsigned int isUploadActive : 1; 
            unsigned int isDownloadActive : 1; 
            unsigned int isDownloadRequested : 1; 
            unsigned int isAlias : 1; 
            unsigned int shareOptions : 3; 
        } ; 
        unsigned short value; 
    } _flags;
    bool _isNetworkOffline;
    NSURL *_localRepresentationURL;
    long long _logicalHandle;
    NSString *_logicalName;
    NSNumber *_mtime;
    NSString *_parentPath;
    long long _physicalHandle;
    NSString *_physicalName;
    id _replacement;
    NSNumber *_size;
    NSURL *_url;
}

@property(assign,readonly) NSString * containerID;
@property(assign,readonly) unsigned short diffs;
@property(assign,readonly) unsigned int downloadStatus;
@property(assign,readonly) NSNumber * fileObjectID;
@property(assign,readonly) bool hasTransferStatuses;
@property(assign,readonly) bool isAlias;
@property(assign,readonly) bool isConflicted;
@property(assign,readonly) bool isDead;
@property(assign,readonly) bool isDocument;
@property(assign,readonly) bool isDownloadActive;
@property(assign,readonly) bool isDownloadRequested;
@property(assign,readonly) bool isInTransfer;
@property(assign,readonly) bool isLive;
@property(assign,readwrite) bool isNetworkOffline;
@property(assign,readwrite) bool isPreCrash;
@property(assign,readonly) bool isUploadActive;
@property(assign,readonly) NSURL * localRepresentationURL;
@property(assign,readonly) NSString * logicalName;
@property(assign,readonly) NSNumber * mtime;
@property(assign,readonly) NSString * parentPath;
@property(assign,readonly) NSString * path;
@property(assign,readonly) NSString * physicalName;
@property(assign,readwrite) id replacement;
@property(assign,readonly) unsigned int shareOptions;
@property(assign,readonly) NSNumber * size;
@property(assign,readonly) unsigned int uploadStatus;
@property(assign,readonly) NSURL * url;

+ (id)askDaemonQueryItemForURL:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_mergeAttrs:(id)arg1;
- (void)_mergeURL:(id)arg1;
- (void)_setAttr:(id)arg1 forKey:(id)arg2;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)attributeForName:(id)arg1;
- (id)attributeNames;
- (id)attributesForNames:(id)arg1;
- (bool)canMerge:(id)arg1;
- (void)clearDiffs;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned short)diffs;
- (unsigned int)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)fileObjectID;
- (bool)hasTransferStatuses;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryItem:(id)arg1;
- (id)initWithRelPath:(id)arg1 error:(id*)arg2;
- (bool)isAlias;
- (bool)isConflicted;
- (bool)isDead;
- (bool)isDocument;
- (bool)isDownloadActive;
- (bool)isDownloadRequested;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQueryItem:(id)arg1;
- (bool)isInTransfer;
- (bool)isLive;
- (bool)isNetworkOffline;
- (bool)isPreCrash;
- (bool)isShared;
- (bool)isUploadActive;
- (id)localRepresentationURL;
- (id)logicalName;
- (void)markDead;
- (void)merge:(id)arg1;
- (id)mtime;
- (id)parentPath;
- (id)path;
- (id)physicalName;
- (id)replacement;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setIsNetworkOffline:(bool)arg1;
- (void)setIsPreCrash:(bool)arg1;
- (void)setReplacement:(id)arg1;
- (unsigned int)shareOptions;
- (id)sharedItemRole;
- (id)size;
- (id)subclassDescription;
- (unsigned int)uploadStatus;
- (id)url;
- (id)valueForKey:(id)arg1;

@end

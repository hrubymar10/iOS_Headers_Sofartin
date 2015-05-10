/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVSyncData : NSObject {
    NSMutableDictionary *_backingDict;
    void *_db;
    bool _hasChanges;
}

@property(assign,retain) NSString * accountPrsId;
@property(assign,retain) NSString * bookmarksBarId;
@property(assign,readwrite) unsigned long long bookmarksBarOrder;
@property(assign,retain) NSString * bookmarksMenuId;
@property(assign,readwrite) unsigned long long bookmarksMenuOrder;
@property(assign,retain) NSDictionary * bulkRequests;
@property(assign,readwrite) unsigned long long clientVersion;
@property(assign,retain) NSString * ctag;
@property(assign,retain) NSString * etag;
@property(assign,readonly) bool hasChanges;
@property(assign,readwrite) bool hasHitQuotaLimit;
@property(assign,retain) NSDictionary * heldAsideOrderings;
@property(assign,retain) NSURL * homeURL;
@property(assign,readwrite) bool initialSyncDone;
@property(assign,retain) NSNumber * knownQuotaRemaining;
@property(assign,retain) NSURL * principalURL;
@property(assign,retain) NSString * ptag;
@property(assign,retain) NSString * pushKey;
@property(assign,retain) NSDictionary * pushTransports;
@property(assign,readwrite) bool supportsSyncCollection;
@property(assign,retain) NSString * syncToken;

- (id)accountPrsId;
- (id)bookmarksBarId;
- (unsigned long long)bookmarksBarOrder;
- (id)bookmarksMenuId;
- (unsigned long long)bookmarksMenuOrder;
- (id)bulkRequests;
- (unsigned long long)clientVersion;
- (id)ctag;
- (void)dealloc;
- (id)etag;
- (bool)hasChanges;
- (bool)hasHitQuotaLimit;
- (id)heldAsideOrderings;
- (id)homeURL;
- (id)initWithBookmarkDatabase:(void*)arg1;
- (bool)initialSyncDone;
- (id)knownQuotaRemaining;
- (id)principalURL;
- (id)ptag;
- (id)pushKey;
- (id)pushTransports;
- (void)setAccountPrsId:(id)arg1;
- (void)setBookmarksBarId:(id)arg1;
- (void)setBookmarksBarOrder:(unsigned long long)arg1;
- (void)setBookmarksMenuId:(id)arg1;
- (void)setBookmarksMenuOrder:(unsigned long long)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setClientVersion:(unsigned long long)arg1;
- (void)setCtag:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasHitQuotaLimit:(bool)arg1;
- (void)setHeldAsideOrderings:(id)arg1;
- (void)setHomeURL:(id)arg1;
- (void)setInitialSyncDone:(bool)arg1;
- (void)setKnownQuotaRemaining:(id)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setPtag:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setPushTransports:(id)arg1;
- (void)setSupportsSyncCollection:(bool)arg1;
- (void)setSyncToken:(id)arg1;
- (bool)supportsSyncCollection;
- (id)syncToken;
- (void)writeToBookmarkDB;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property(assign,retain) NSFileHandle * fileHandle;
@property(assign,readwrite) unsigned int homeSharingBasePlaylistID;
@property(getter=isLibraryOwnedContent,assign,readwrite) bool libraryOwnedContent;
@property(assign,copy) NSString * libraryPath;
@property(getter=isPendingMatch,assign,readwrite) bool pendingMatch;
@property(assign,copy) NSData * playlistData;
@property(assign,readwrite) long long preferredVideoQuality;
@property(getter=isResetSync,assign,readwrite) bool resetSync;
@property(getter=isSagaEnabled,assign,readwrite) bool sagaEnabled;
@property(assign,readwrite) long long storeAccountID;
@property(assign,copy) NSString * syncAnchor;
@property(assign,copy) NSData * trackData;

- (void)setFileHandle:(id)arg1;
- (void)setHomeSharingBasePlaylistID:(unsigned int)arg1;
- (void)setLibraryOwnedContent:(bool)arg1;
- (void)setLibraryPath:(id)arg1;
- (void)setPendingMatch:(bool)arg1;
- (void)setPlaylistData:(id)arg1;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setResetSync:(bool)arg1;
- (void)setSagaEnabled:(bool)arg1;
- (void)setStoreAccountID:(long long)arg1;
- (void)setSyncAnchor:(id)arg1;
- (void)setTrackData:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSFileHandle *_fileHandle;
    unsigned int _homeSharingBasePlaylistID;
    bool _libraryOwnedContent;
    NSString *_libraryPath;
    bool _pendingMatch;
    NSData *_playlistData;
    long long _preferredVideoQuality;
    bool _resetSync;
    bool _sagaEnabled;
    long long _storeAccountID;
    NSString *_syncAnchor;
    NSData *_trackData;
}

@property(assign,readonly) NSFileHandle * fileHandle;
@property(assign,readonly) unsigned int homeSharingBasePlaylistID;
@property(getter=isLibraryOwnedContent,assign,readonly) bool libraryOwnedContent;
@property(assign,readonly) NSString * libraryPath;
@property(getter=isPendingMatch,assign,readonly) bool pendingMatch;
@property(assign,readonly) NSData * playlistData;
@property(assign,readonly) long long preferredVideoQuality;
@property(getter=isResetSync,assign,readonly) bool resetSync;
@property(getter=isSagaEnabled,assign,readonly) bool sagaEnabled;
@property(assign,readonly) long long storeAccountID;
@property(assign,readonly) NSString * syncAnchor;
@property(assign,readonly) NSData * trackData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (unsigned int)homeSharingBasePlaylistID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3;
- (bool)isLibraryOwnedContent;
- (bool)isPendingMatch;
- (bool)isResetSync;
- (bool)isSagaEnabled;
- (id)libraryPath;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playlistData;
- (long long)preferredVideoQuality;
- (long long)storeAccountID;
- (id)syncAnchor;
- (id)trackData;

@end

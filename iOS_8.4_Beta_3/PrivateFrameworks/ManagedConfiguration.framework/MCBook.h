/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCBook : NSObject <NSCopying> {
    NSString *_author;
    NSString *_buyParams;
    NSNumber *_downloadIdentifier;
    NSString *_fullPath;
    NSNumber *_iTunesStoreID;
    NSString *_kind;
    NSString *_persistentID;
    MCBook *_previousVersion;
    NSString *_state;
    NSString *_title;
    NSString *_version;
}

@property(assign,copy) NSString * author;
@property(assign,copy) NSString * buyParams;
@property(assign,retain) NSNumber * downloadIdentifier;
@property(assign,copy) NSString * fullPath;
@property(assign,retain) NSNumber * iTunesStoreID;
@property(assign,copy) NSString * kind;
@property(assign,copy) NSString * persistentID;
@property(assign,retain) MCBook * previousVersion;
@property(assign,retain) NSString * state;
@property(assign,copy) NSString * title;
@property(assign,copy) NSString * version;

- (void).cxx_destruct;
- (id)author;
- (id)buyParams;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadIdentifier;
- (id)friendlyName;
- (id)fullPath;
- (id)iTunesStoreID;
- (id)init;
- (id)initWithManifestDictionary:(id)arg1;
- (id)kind;
- (id)manifestDictionary;
- (id)persistentID;
- (id)previousVersion;
- (void)setAuthor:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setDownloadIdentifier:(id)arg1;
- (void)setFullPath:(id)arg1;
- (void)setITunesStoreID:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setPreviousVersion:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)state;
- (id)title;
- (void)updateBookAttributesByCopyingFromBook:(id)arg1;
- (id)version;

@end
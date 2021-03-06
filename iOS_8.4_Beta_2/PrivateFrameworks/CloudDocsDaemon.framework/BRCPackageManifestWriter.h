/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPackageManifestWriter : NSObject {
    NSError *_error;
    BRCAccountSession *_session;
    bool _sharedZone;
    NSString *_stageID;
    NSOutputStream *_stream;
    NSURL *_url;
    PBMessageStreamWriter *_writer;
}

@property(assign,readonly) NSError * error;
@property(assign,readonly) NSURL * url;

- (void).cxx_destruct;
- (void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2;
- (void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2;
- (unsigned short)_computedFileModeForPackageItem:(id)arg1;
- (void)_handleStreamError;
- (bool)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2;
- (bool)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3;
- (bool)addItem:(id)arg1;
- (bool)addLocalItem:(id)arg1;
- (bool)done;
- (id)error;
- (id)initWithSession:(id)arg1 stageID:(id)arg2 url:(id)arg3 sharedZone:(bool)arg4;
- (bool)stagePackageWithReader:(id)arg1 package:(id)arg2 stageItemURL:(id)arg3 livefd:(int)arg4;
- (id)url;

@end

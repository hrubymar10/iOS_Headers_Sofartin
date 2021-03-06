/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface ASAsset : NSObject {
    NSString *_assetType;
    NSDictionary *_attributes;
    struct __MobileAsset { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; } *_cfAsset;
    NSString *_clientName;
    NSDictionary *_downloadOptions;
    NSString *_identifier;
    id _progressHandler;
}

@property(assign,readonly) NSString * assetType;
@property(assign,readonly) NSDictionary * attributes;
@property(assign,retain) NSString * clientName;
@property(assign,retain) NSDictionary * downloadOptions;
@property(assign,readonly) NSDictionary * fullAttributes;
@property(assign,readwrite) long long garbageCollectionBehavior;
@property(assign,readonly) NSURL * localURL;
@property(assign,copy) id progressHandler;
@property(assign,readonly) long long state;

- (long long)_contentVersion;
- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(bool)arg2;
- (long long)_formatVersion;
- (id)_getLocalAttribute:(id)arg1;
- (void)adjustDownloadOptions:(id)arg1 completion:(id)arg2;
- (long long)assetStateForStateString:(id)arg1;
- (id)assetType;
- (id)attributes;
- (void)beginDownloadWithOptions:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (bool)cancelDownloadAndReturnError:(id*)arg1;
- (void)cancelDownloadIfNecessary;
- (void)cleanupAsset;
- (id)clientName;
- (void)dealloc;
- (id)description;
- (id)downloadOptions;
- (id)fullAttributes;
- (long long)garbageCollectionBehavior;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;
- (bool)isDownloading;
- (bool)isDownloadingOrInstalled;
- (bool)isEmergencyUpdate;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isPresentOnDisk;
- (id)localURL;
- (struct __MobileAsset { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; }*)mobileAsset;
- (void)pauseDownload:(id)arg1;
- (bool)pauseDownloadAndReturnError:(id*)arg1;
- (id)progressHandler;
- (void)purge:(id)arg1;
- (bool)purgeAndReturnError:(id*)arg1;
- (bool)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2;
- (bool)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3;
- (void)resumeDownload:(id)arg1;
- (bool)resumeDownloadAndReturnError:(id*)arg1;
- (void)setClientName:(id)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setGarbageCollectionBehavior:(long long)arg1;
- (void)setProgressHandler:(id)arg1;
- (long long)state;

@end

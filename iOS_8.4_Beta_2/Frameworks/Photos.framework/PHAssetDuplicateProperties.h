/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetDuplicateProperties : NSObject {
    PHAsset *_asset;
    NSData *_originalHash;
    NSString *_publicGlobalUUID;
}

@property(assign,readonly) PHAsset * asset;
@property(assign,retain) NSData * originalHash;
@property(assign,retain) NSString * publicGlobalUUID;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;
- (id)originalHash;
- (id)publicGlobalUUID;
- (void)setOriginalHash:(id)arg1;
- (void)setPublicGlobalUUID:(id)arg1;

@end
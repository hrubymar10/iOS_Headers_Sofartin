/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetToAlbumOrder : PLManagedObject <PLOrderKeyObject>

@property(assign,retain) PLManagedAlbum * album;
@property(assign,retain) PLManagedAsset * asset;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long orderValue;
@property(assign,readonly) Class superclass;

+ (id)newAssetOrderForAsset:(id)arg1 album:(id)arg2;

- (id)childManagedObject;
- (void)didSave;
- (id)secondaryOrderSortKey;

@end

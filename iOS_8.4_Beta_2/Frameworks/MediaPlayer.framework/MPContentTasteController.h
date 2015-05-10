/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentTasteController : NSObject {
    SSVMediaContentTasteController *_storeTasteController;
}

+ (bool)mpu_tasteTypeSupportedForContentItemIdentifierCollection:(id)arg1;
+ (id)sharedController;

- (void).cxx_destruct;
- (bool)_canUseLikedStateForMediaEntity:(id)arg1 returningLikedState:(long long*)arg2 likedStateProperty:(id*)arg3 storeAdamID:(long long*)arg4 storeSubscriptionAdamID:(long long*)arg5 contentType:(unsigned long long*)arg6 playlistGlobalID:(id*)arg7;
- (void)_deviceMediaLibraryDidChangeNotification:(id)arg1;
- (void)_storeTasteControllerItemsDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)mpu_setTasteType:(unsigned long long)arg1 forContentItemIdentifierCollection:(id)arg2 withCompletionHandler:(id)arg3;
- (unsigned long long)mpu_tasteTypeForContentItemIdentifierCollection:(id)arg1;
- (void)setTasteType:(unsigned long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(id)arg3;
- (void)setTasteType:(unsigned long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(id)arg3;
- (void)setTasteType:(unsigned long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(unsigned long long)arg3 completionHandler:(id)arg4;
- (unsigned long long)tasteTypeForMediaEntity:(id)arg1;
- (unsigned long long)tasteTypeForPlaylistGlobalID:(id)arg1;
- (unsigned long long)tasteTypeForStoreAdamID:(long long)arg1;

@end
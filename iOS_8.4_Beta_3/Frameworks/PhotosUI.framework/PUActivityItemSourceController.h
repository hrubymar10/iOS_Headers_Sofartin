/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUActivityItemSourceController : NSObject {
    NSArray *__activeItemSources;
    NSError *__error;
    PUActivityViewController *_activityViewController;
    NSMutableOrderedSet *_assetItemSources;
    NSMutableOrderedSet *_assets;
    id _progressHandler;
    int _taskId;
}

@property(setter=_setActiveItemSources:,assign,retain) NSArray * _activeItemSources;
@property(setter=_setError:,assign,retain) NSError * _error;
@property(assign,readwrite) PUActivityViewController * activityViewController;
@property(assign,copy) NSOrderedSet * assetItemSources;
@property(assign,copy) NSOrderedSet * assets;
@property(assign,copy) id progressHandler;

- (void).cxx_destruct;
- (id)_activeItemSources;
- (id)_error;
- (void)_setActiveItemSources:(id)arg1;
- (void)_setError:(id)arg1;
- (id)activityViewController;
- (void)addAsset:(id)arg1;
- (id)assetItemSources;
- (id)assets;
- (void)cancel;
- (long long)countOfAssetType:(long long)arg1;
- (id)progressHandler;
- (void)removeAsset:(id)arg1;
- (void)runExplicitly:(bool)arg1 withActivityType:(id)arg2 completionHandler:(id)arg3;
- (void)setActivityViewController:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setProgressHandler:(id)arg1;

@end
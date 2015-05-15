/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowPlugin : NSObject {
    struct NSObject { Class x1; } *_album;
    NSArray *_albumAssets;
    <PLSlideshowPluginDelegate> *_delegate;
    double _secondsPerSlide;
    bool _shouldRepeat;
    bool _shuffleAlbum;
}

@property(assign,retain) NSObject<PLAlbumProtocol> * album;
@property(assign,retain) NSArray * albumAssets;
@property(assign,readonly) PLManagedAsset * currentPhoto;
@property(assign,readwrite) <PLSlideshowPluginDelegate> * delegate;
@property(assign,readonly) NSArray * displayedPhotos;
@property(assign,readwrite) double secondsPerSlide;
@property(assign,readwrite) bool shouldRepeat;
@property(assign,readwrite) bool shuffleAlbum;

- (struct NSObject { Class x1; }*)album;
- (id)albumAssets;
- (id)currentPhoto;
- (void)dealloc;
- (id)delegate;
- (id)displayedPhotos;
- (id)newSlideshowView;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (double)secondsPerSlide;
- (void)setAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setAlbumAssets:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSecondsPerSlide:(double)arg1;
- (void)setShouldRepeat:(bool)arg1;
- (void)setShuffleAlbum:(bool)arg1;
- (bool)shouldRepeat;
- (bool)shuffleAlbum;
- (void)slideshowViewDidAppear;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewWillAppear;
- (void)stopSlideshow;

@end
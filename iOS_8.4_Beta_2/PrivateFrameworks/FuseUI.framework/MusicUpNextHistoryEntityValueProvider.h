/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextHistoryEntityValueProvider : NSObject <MusicEntityValueProviding> {
    <MusicLocalPlaybackHistoryItemDataSource> *_dataSource;
    MPMediaItem *_mediaItem;
}

@property(assign,readwrite) <MusicLocalPlaybackHistoryItemDataSource> * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MPMediaItem * mediaItem;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)mediaItem;
- (void)setDataSource:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end

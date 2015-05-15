/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDBrowsableContentItem : NSObject {
    struct _MRContentItem { } *_contentItem;
    NSIndexPath *_indexPath;
}

@property(assign,readonly) NSData * artworkData;
@property(assign,readwrite) struct _MRContentItem { }* contentItem;
@property(assign,readonly) NSString * identifier;
@property(assign,retain) NSIndexPath * indexPath;
@property(assign,readonly) bool isContainer;
@property(assign,readonly) bool isPlayable;
@property(assign,readonly) float playbackProgress;
@property(assign,readonly) NSString * subtitle;
@property(assign,readonly) NSString * title;

- (void).cxx_destruct;
- (id)artworkData;
- (struct _MRContentItem { }*)contentItem;
- (void)dealloc;
- (id)identifier;
- (id)indexPath;
- (id)initWithMRContentItem:(struct _MRContentItem { }*)arg1;
- (bool)isContainer;
- (bool)isPlayable;
- (float)playbackProgress;
- (void)setContentItem:(struct _MRContentItem { }*)arg1;
- (void)setIndexPath:(id)arg1;
- (id)subtitle;
- (id)title;

@end

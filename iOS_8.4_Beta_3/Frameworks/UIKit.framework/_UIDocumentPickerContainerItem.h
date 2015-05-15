/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {
    id _item;
    _UIDocumentPickerURLContainerModel *_model;
    long long _modelDisplayCount;
    id _observer;
    bool _pickable;
    id _resourceIdentifier;
    NSMapTable *_thumbnailsBySize;
    long long _type;
    _UIDocumentPickerURLContainerModel *_weak_model;
    _UIDocumentPickerContainerModel *_weak_parentModel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) id item;
@property(assign,retain) _UIDocumentPickerContainerModel * model;
@property(assign,readwrite) _UIDocumentPickerContainerModel * parentModel;
@property(assign,readwrite) bool pickable;
@property(assign,readonly) NSDate * sortDate;
@property(assign,retain) NSString * subtitle;
@property(assign,retain) NSString * subtitle2;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSMapTable * thumbnailsBySize;
@property(assign,retain) NSString * title;
@property(assign,readonly) long long type;
@property(assign,retain) NSURL * url;

+ (id)_lruThumbnailArray;
+ (void)clearLRUThumbnailCache;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;

- (id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_createThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_defaultThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)_ensureModelPresent;
- (id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1;
- (void)_modelChanged;
- (id)_resourceIdentifier;
- (void)_valuesChanged;
- (void)dealloc;
- (void)decrementModelDisplayCount;
- (id)description;
- (unsigned long long)hash;
- (void)incrementModelDisplayCount;
- (id)initWithItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)model;
- (id)modificationDate;
- (id)parentModel;
- (bool)pickable;
- (void)setItem:(id)arg1;
- (void)setParentModel:(id)arg1;
- (void)setPickable:(bool)arg1;
- (void)setThumbnailsBySize:(id)arg1;
- (id)sortDate;
- (id)sortTag;
- (id)subtitle;
- (id)subtitle2;
- (id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2;
- (id)tags;
- (id)thumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)thumbnailsBySize;
- (id)title;
- (long long)type;
- (id)url;

@end

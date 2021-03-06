/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectChangeDetails : NSObject {
    bool _assetContentChanged;
    PHObject *_objectAfterChanges;
    PHObject *_objectBeforeChanges;
}

@property(assign,readonly) bool assetContentChanged;
@property(assign,readonly) id objectAfterChanges;
@property(assign,readonly) id objectBeforeChanges;
@property(assign,readonly) bool objectWasDeleted;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (bool)assetContentChanged;
- (id)description;
- (id)initWithPHObject:(id)arg1 assetContentChanged:(bool)arg2;
- (id)objectAfterChanges;
- (id)objectBeforeChanges;
- (bool)objectWasDeleted;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteHeightMeasurer : NSObject <TSWPFootnoteHeightMeasurer> {
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TSULRUCache *_footnoteLayoutCache;
    TSDLayoutController *_layoutController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)addFootnoteReferenceStorage:(id)arg1;
- (void)dealloc;
- (double)footnoteHeight;
- (id)initWithFootnoteMarkProvider:(id)arg1 maxFootnoteWidth:(double)arg2 maxFootnoteHeight:(double)arg3 footnoteSpacing:(double)arg4;
- (void)p_clearFootnoteLayoutCache;
- (void)removeAllFootnoteReferenceStorages;
- (void)removeFootnoteReferenceStorage:(id)arg1;
- (void)setContainerWidth:(double)arg1;
- (void)setFootnoteSpacing:(long long)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUVariableCellConfigurationCache : NSObject {
    NSMutableDictionary *_caches;
    id _cellContext;
    double _tableHeight;
}

@property(assign,readonly) NSArray * caches;
@property(assign,retain) id cellContext;

- (id)cacheForClass:(Class)arg1;
- (id)caches;
- (id)cellContext;
- (void)dealloc;
- (id)initWithTableHeight:(double)arg1;
- (void)reset;
- (void)resetLayoutCaches;
- (void)setCellContext:(id)arg1;

@end

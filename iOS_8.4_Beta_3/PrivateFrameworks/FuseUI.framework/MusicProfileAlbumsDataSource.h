/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileAlbumsDataSource : MusicMediaQueryDataSource {
    NSArray *_sectionEntities;
    NSMutableDictionary *_sectionRanges;
}

- (void).cxx_destruct;
- (void)_invalidateCalculatedEntities;
- (id)entities;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSectionAtIndex:(unsigned long long)arg1;
- (id)sectionEntities;
- (bool)showsIndexBar;
- (bool)usesSections;

@end

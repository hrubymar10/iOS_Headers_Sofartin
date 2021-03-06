/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerPlaylistsViewConfiguration : MusicLibraryPlaylistsViewConfiguration {
    bool _isMultipleSelectionAllowed;
    bool _isSearch;
}

- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (void)dealloc;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initForSearch:(bool)arg1 withMultipleSelectionAllowed:(bool)arg2;
- (id)loadEntityViewDescriptor;

@end

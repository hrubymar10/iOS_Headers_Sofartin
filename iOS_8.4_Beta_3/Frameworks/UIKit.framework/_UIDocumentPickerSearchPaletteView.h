/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {
    _UINavigationControllerPalette *_palette;
    _UIDocumentPickerContainerViewController *_resultsController;
    UISearchController *_searchController;
    NSLayoutConstraint *_searchFieldLeftConstraint;
    NSLayoutConstraint *_searchFieldRightConstraint;
    _UIDocumentPickerSearchContainerModel *_searchModel;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) _UINavigationControllerPalette * palette;
@property(assign,retain) _UIDocumentPickerContainerViewController * resultsController;
@property(assign,retain) UISearchController * searchController;
@property(assign,retain) NSLayoutConstraint * searchFieldLeftConstraint;
@property(assign,retain) NSLayoutConstraint * searchFieldRightConstraint;
@property(assign,retain) _UIDocumentPickerSearchContainerModel * searchModel;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)palette;
- (id)resultsController;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchCanceled:(id)arg1;
- (id)searchController;
- (id)searchFieldLeftConstraint;
- (id)searchFieldRightConstraint;
- (id)searchModel;
- (id)serviceViewController;
- (void)setPalette:(id)arg1;
- (void)setResultsController:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchFieldLeftConstraint:(id)arg1;
- (void)setSearchFieldRightConstraint:(id)arg1;
- (void)setSearchModel:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
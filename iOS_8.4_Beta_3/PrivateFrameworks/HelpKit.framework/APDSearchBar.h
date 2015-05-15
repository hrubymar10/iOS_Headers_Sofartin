/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDSearchBar : UISearchBar {
    bool _RTL;
    UIView *_clearButtonView;
    UIButton *_searchBarCancelButton;
    double _searchBarCancelButtonOffset;
    NSString *_searchBarCancelText;
    UITextField *_searchBarTextField;
    double _searchBarTextFieldDefaultOrigin;
    UIView *_searchGlassView;
}

@property (nonatomic) bool RTL;
@property (nonatomic) UIView *clearButtonView;
@property (nonatomic) UIButton *searchBarCancelButton;
@property (nonatomic, retain) NSString *searchBarCancelText;
@property (nonatomic) UITextField *searchBarTextField;
@property (nonatomic) UIView *searchGlassView;

- (void).cxx_destruct;
- (bool)RTL;
- (id)clearButtonView;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)searchBarCancelButton;
- (id)searchBarCancelText;
- (id)searchBarTextField;
- (id)searchGlassView;
- (void)setClearButtonView:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSearchBarCancelButton:(id)arg1;
- (void)setSearchBarCancelText:(id)arg1;
- (void)setSearchBarTextField:(id)arg1;
- (void)setSearchGlassView:(id)arg1;
- (void)updateSearchBarCancelButton;

@end

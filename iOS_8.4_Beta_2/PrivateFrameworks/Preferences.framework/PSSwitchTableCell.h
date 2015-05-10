/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSwitchTableCell : PSControlTableCell {
    UIActivityIndicatorView *_activityIndicator;
}

@property(assign,readwrite) bool loading;

- (bool)canReload;
- (id)controlValue;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (bool)loading;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(bool)arg2;
- (void)setCellEnabled:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setValue:(id)arg1;

@end
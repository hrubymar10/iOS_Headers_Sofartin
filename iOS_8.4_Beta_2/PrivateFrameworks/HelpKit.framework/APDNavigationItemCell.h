/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDNavigationItemCell : UITableViewCell {
    bool _RTL;
    UIImageView *_accessoryImageView;
    UIImageView *_arrowImageView;
    bool _closed;
    APDDataManager *_dataManager;
    APDURLSession *_imageUrlSession;
    long long _indentLevel;
    bool _indentWithSectionImage;
    UILabel *_nameLabel;
    APDNavigationItem *_navigationItem;
    UIImageView *_sectionImageView;
    bool _shouldIndent;
    bool _showFulLSeparator;
}

@property(getter=isRTL,assign,readwrite) bool RTL;
@property(assign,retain) UIImageView * accessoryImageView;
@property(assign,retain) UIImageView * arrowImageView;
@property(assign,retain) UIColor * cellHighlightedColor;
@property(assign,readwrite) bool closed;
@property(assign,retain) APDDataManager * dataManager;
@property(assign,readwrite) bool indentWithSectionImage;
@property(assign,retain) UILabel * nameLabel;
@property(assign,retain) APDNavigationItem * navigationItem;
@property(assign,retain) UIImageView * sectionImageView;
@property(assign,readwrite) bool shouldIndent;
@property(assign,readwrite) bool showFulLSeparator;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessoryImageView;
- (id)arrowImageView;
- (void)cancelSectionImageRequest;
- (id)cellHighlightedColor;
- (bool)closed;
- (id)dataManager;
- (void)dealloc;
- (bool)indentWithSectionImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isRTL;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)navigationItem;
- (void)prepareForReuse;
- (id)sectionImageView;
- (void)setAccessoryImageView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setCellHighlightedColor:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setDataManager:(id)arg1;
- (void)setIndentWithSectionImage:(bool)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNavigationItem:(id)arg1;
- (void)setRTL:(bool)arg1;
- (void)setSectionImageView:(id)arg1;
- (void)setShouldIdent:(bool)arg1;
- (void)setShouldIndent:(bool)arg1;
- (void)setShowFulLSeparator:(bool)arg1;
- (bool)shouldIndent;
- (bool)showFulLSeparator;
- (void)toggle;
- (void)updateFonts;
- (void)updateToggleImageAnimated:(bool)arg1;

@end

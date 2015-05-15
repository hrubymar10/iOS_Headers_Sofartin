/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegTableLabel : UIView <PSHeaderFooterView> {
    NSURL *_URLTarget;
    NSString *_URLText;
    UITableView *_cnfreg_tableView;
    bool _isTopmostHeader;
    UILabel *_label;
    PSSpecifier *_specifier;
    CNFRegLearnMoreButton *_urlButton;
}

@property (nonatomic, copy) NSURL *URLTarget;
@property (nonatomic, copy) NSString *URLText;
@property (nonatomic) UITableView *cnfreg_tableView;
@property (nonatomic) bool isTopmostHeader;

- (id)URLTarget;
- (id)URLText;
- (id)_URLTarget;
- (id)_URLText;
- (double)_bottomPadding;
- (double)_labelInset;
- (id)_labelText;
- (long long)_labelTextAlignment;
- (double)_topPadding;
- (void)_urlTapped:(id)arg1;
- (void)clearSpecifier;
- (id)cnfreg_tableView;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;
- (bool)isTopmostHeader;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setCnfreg_tableView:(id)arg1;
- (void)setIsTopmostHeader:(bool)arg1;
- (void)setURLTarget:(id)arg1;
- (void)setURLText:(id)arg1;
- (void)updateLabelText;

@end

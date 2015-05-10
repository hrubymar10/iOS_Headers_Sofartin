/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactCell : UITableViewCell {
    bool _addedConstantsConstraints;
    ABCardGroupItem *_cardGroupItem;
    CNContactStyle *_contactStyle;
    bool _hasBeenDisplayed;
    double _leftContentMargin;
    double _rightContentMargin;
    NSArray *_variableConstraints;
}

@property(assign,retain) ABCardGroupItem * cardGroupItem;
@property(assign,retain) CNContactStyle * contactStyle;
@property(assign,readwrite) bool hasBeenDisplayed;
@property(assign,readwrite) double leftContentMargin;
@property(assign,readwrite) double rightContentMargin;
@property(assign,readwrite) bool showSeparator;

- (id)cardGroupItem;
- (id)constantConstraints;
- (id)contactStyle;
- (void)dealloc;
- (bool)hasBeenDisplayed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)leftContentMargin;
- (double)minCellHeight;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (void)prepareForReuse;
- (double)rightContentMargin;
- (void)setCardGroupItem:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setHasBeenDisplayed:(bool)arg1;
- (void)setLeftContentMargin:(double)arg1;
- (void)setRightContentMargin:(double)arg1;
- (void)setShowSeparator:(bool)arg1;
- (bool)shouldPerformAccessoryAction;
- (bool)shouldPerformDefaultAction;
- (bool)showSeparator;
- (void)updateConstraints;
- (id)variableConstraints;

@end

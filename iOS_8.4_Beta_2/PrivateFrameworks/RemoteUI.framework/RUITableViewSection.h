/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUITableViewSection : RUIElement <RUITableFooterDelegate, RUITableHeaderDelegate> {
    NSString *_HTMLFooterContent;
    NSString *_HTMLHeaderContent;
    bool _configured;
    <RUITableViewSectionDelegate> *_delegate;
    NSString *_detailHeaderText;
    long long _disclosureLimit;
    NSNumber *_drawsTopSeparator;
    NSDictionary *_footerAttributes;
    double _footerHeight;
    NSString *_footerText;
    UIView<RemoteUITableFooter> *_footerView;
    NSDictionary *_headerAttributes;
    double _headerHeight;
    NSString *_headerText;
    UIView<RemoteUITableHeader> *_headerView;
    NSMutableArray *_rows;
    RUITableViewRow *_showAllRow;
    NSDictionary *_subHeaderAttributes;
    NSString *_subHeaderText;
}

@property(assign,copy) NSString * HTMLFooterContent;
@property(assign,copy) NSString * HTMLHeaderContent;
@property(assign,readwrite) bool configured;
@property(assign,readwrite) <RUITableViewSectionDelegate> * delegate;
@property(assign,copy) NSString * detailHeaderText;
@property(assign,readwrite) bool drawTopSeparator;
@property(assign,copy) NSDictionary * footerAttributes;
@property(assign,readwrite) double footerHeight;
@property(assign,copy) NSString * footerText;
@property(assign,retain) UIView<RemoteUITableFooter> * footerView;
@property(assign,copy) NSDictionary * headerAttributes;
@property(assign,readwrite) double headerHeight;
@property(assign,copy) NSString * headerText;
@property(assign,retain) UIView<RemoteUITableHeader> * headerView;
@property(assign,readonly) NSArray * rows;
@property(assign,copy) NSDictionary * subHeaderAttributes;
@property(assign,copy) NSString * subHeaderText;

- (void).cxx_destruct;
- (id)HTMLFooterContent;
- (id)HTMLHeaderContent;
- (Class)_customFooterClass;
- (Class)_customHeaderClass;
- (void)addRow:(id)arg1;
- (id)colorFromAttributeString:(id)arg1;
- (bool)configured;
- (id)delegate;
- (id)detailHeaderText;
- (void)didTapShowAllRowWithTable:(id)arg1;
- (bool)drawTopSeparator;
- (id)footerAttributes;
- (double)footerHeight;
- (id)footerText;
- (id)footerView;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (bool)hasCustomFooter;
- (bool)hasCustomHeader;
- (bool)hasValueForDrawsTopSeparator;
- (id)headerAttributes;
- (double)headerHeight;
- (id)headerText;
- (id)headerView;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)init;
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)removeRowAtIndex:(unsigned long long)arg1;
- (id)rows;
- (void)setAttributes:(id)arg1;
- (void)setConfigured:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailHeaderText:(id)arg1;
- (void)setDrawTopSeparator:(bool)arg1;
- (void)setFooterAttributes:(id)arg1;
- (void)setFooterHeight:(double)arg1;
- (void)setFooterText:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHTMLFooterContent:(id)arg1;
- (void)setHTMLHeaderContent:(id)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSubHeaderAttributes:(id)arg1;
- (void)setSubHeaderText:(id)arg1;
- (id)sourceURL;
- (id)subElementsWithName:(id)arg1;
- (id)subHeaderAttributes;
- (id)subHeaderText;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPage : UIViewController <UIWebViewDelegate> {
    NSString *_backButtonTitle;
    NSMutableArray *_childPages;
    UIView *_containerView;
    double _customMargin;
    bool _hidesBackButton;
    UIBarButtonItem *_leftFlexSpace;
    RUIBarButtonItem *_leftNavigationBarButtonItem;
    RUIBarButtonItem *_leftToolbarButtonItem;
    UIBarButtonItem *_leftToolbarItem;
    bool _loading;
    long long _loadingIndicatorStyle;
    NSString *_loadingTitle;
    UIBarButtonItem *_middleFlexSpace;
    RUIBarButtonItem *_middleToolbarButtonItem;
    UIBarButtonItem *_middleToolbarItem;
    NSString *_navTitle;
    RUIObjectModel *_objectModel;
    NSString *_pageID;
    RUIPage *_parentPage;
    RUIPasscodeView *_passcodeViewOM;
    RUIElement<RUITopLevelPageElement> *_primaryElement;
    RUIBarButtonItem *_rightNavigationBarButtonItem;
    RUIBarButtonItem *_rightToolbarButtonItem;
    UIBarButtonItem *_rightToolbarItem;
    bool _showsTitlesAsHeaderViews;
    RUISpinnerView *_spinnerViewOM;
    RUITableView *_tableViewOM;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _titleLabelPadding;
    UIToolbar *_toolbar;
    NSString *_validationFunction;
    RUIWebView *_webViewOM;
}

@property (nonatomic, readonly) NSArray *accessoryViews;
@property (nonatomic, copy) NSString *backButtonTitle;
@property (nonatomic, readonly) NSArray *buttonItems;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) NSArray *childPages;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) double customMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesBackButton;
@property (nonatomic, retain) NSDictionary *leftNavigationBarButton;
@property (nonatomic, retain) RUIBarButtonItem *leftNavigationBarButtonItem;
@property (nonatomic, retain) NSDictionary *leftToolbarButton;
@property (nonatomic, retain) RUIBarButtonItem *leftToolbarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *leftToolbarItem;
@property (getter=isLoading, nonatomic) bool loading;
@property (nonatomic) long long loadingIndicatorStyle;
@property (nonatomic, copy) NSString *loadingTitle;
@property (nonatomic, retain) NSDictionary *middleToolbarButton;
@property (nonatomic, retain) RUIBarButtonItem *middleToolbarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *middleToolbarItem;
@property (nonatomic, copy) NSString *navTitle;
@property (nonatomic) RUIObjectModel *objectModel;
@property (nonatomic, copy) NSString *pageID;
@property (nonatomic, readonly) RUIPage *parentPage;
@property (nonatomic, readonly) RUIPasscodeView *passcodeViewOM;
@property (nonatomic, retain) RUIElement<RUITopLevelPageElement> *primaryElement;
@property (nonatomic, retain) NSDictionary *rightNavigationBarButton;
@property (nonatomic, retain) RUIBarButtonItem *rightNavigationBarButtonItem;
@property (nonatomic, retain) NSDictionary *rightToolbarButton;
@property (nonatomic, retain) RUIBarButtonItem *rightToolbarButtonItem;
@property (nonatomic, retain) UIBarButtonItem *rightToolbarItem;
@property (nonatomic) bool showsTitlesAsHeaderViews;
@property (nonatomic, readonly) RUISpinnerView *spinnerViewOM;
@property (readonly) Class superclass;
@property (nonatomic, readonly) RUITableView *tableViewOM;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleLabelPadding;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, copy) NSString *validationFunction;
@property (nonatomic, readonly) RUIWebView *webViewOM;

- (void).cxx_destruct;
- (void)_addChildPage:(id)arg1;
- (void)_barButtonPressed:(id)arg1 isRight:(bool)arg2 isNavbar:(bool)arg3;
- (double)_getKeyboardIntersectionHeight;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_leftNavigationBarButtonPressed:(id)arg1;
- (void)_leftToolbarButtonPressed:(id)arg1;
- (void)_middleToolbarButtonPressed:(id)arg1;
- (void)_reloadTitleLabel;
- (void)_rightNavigationBarButtonPressed:(id)arg1;
- (void)_rightToolbarButtonPressed:(id)arg1;
- (void)_setContentInset:(double)arg1;
- (void)_setParentPage:(id)arg1;
- (void)_updateLoadingUI;
- (void)_updateParentPage;
- (void)_updateToolbar;
- (void)_updateWithCompletedChild:(id)arg1;
- (id)accessoryViews;
- (id)backButtonTitle;
- (id)buttonItems;
- (id)buttons;
- (id)childPages;
- (id)containerView;
- (id)contentScrollView;
- (double)customMargin;
- (void)dealloc;
- (id)description;
- (id)elementsWithName:(id)arg1;
- (id)flexibleSpace;
- (bool)hasPasscodeView;
- (bool)hasSpinnerView;
- (bool)hasTableView;
- (bool)hasWebView;
- (bool)hidesBackButton;
- (id)init;
- (bool)isLoading;
- (id)leftNavigationBarButton;
- (id)leftNavigationBarButtonItem;
- (id)leftToolbarButton;
- (id)leftToolbarButtonItem;
- (id)leftToolbarItem;
- (long long)loadingIndicatorStyle;
- (id)loadingTitle;
- (id)middleToolbarButton;
- (id)middleToolbarButtonItem;
- (id)middleToolbarItem;
- (id)navTitle;
- (bool)needsToShowToolbarInPrefsAppRoot;
- (id)objectModel;
- (id)pageID;
- (id)parentPage;
- (id)passcodeViewOM;
- (void)populatePostbackDictionary:(id)arg1;
- (id)primaryElement;
- (id)rightNavigationBarButton;
- (id)rightNavigationBarButtonItem;
- (id)rightToolbarButton;
- (id)rightToolbarButtonItem;
- (id)rightToolbarItem;
- (void)setBackButtonTitle:(id)arg1;
- (void)setButton:(id)arg1 enabled:(bool)arg2;
- (void)setCustomMargin:(double)arg1;
- (void)setHasToolbar;
- (void)setHidesBackButton:(bool)arg1;
- (void)setLeftNavigationBarButton:(id)arg1;
- (void)setLeftNavigationBarButtonItem:(id)arg1;
- (void)setLeftNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2;
- (void)setLeftToolbarButton:(id)arg1;
- (void)setLeftToolbarButtonItem:(id)arg1;
- (void)setLeftToolbarItem:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setLoadingIndicatorStyle:(long long)arg1;
- (void)setLoadingTitle:(id)arg1;
- (void)setMiddleToolbarButton:(id)arg1;
- (void)setMiddleToolbarButtonItem:(id)arg1;
- (void)setMiddleToolbarItem:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPageID:(id)arg1;
- (void)setPrimaryElement:(id)arg1;
- (void)setRightNavigationBarButton:(id)arg1;
- (void)setRightNavigationBarButtonItem:(id)arg1;
- (void)setRightNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2;
- (void)setRightToolbarButton:(id)arg1;
- (void)setRightToolbarButtonItem:(id)arg1;
- (void)setRightToolbarItem:(id)arg1;
- (void)setShowsTitlesAsHeaderViews:(bool)arg1;
- (void)setTitleLabelPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setValidationFunction:(id)arg1;
- (bool)showsTitlesAsHeaderViews;
- (id)spinnerViewOM;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableViewOM;
- (id)titleLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleLabelPadding;
- (id)toolbar;
- (id)validationFunction;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webViewOM;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationTreeViewController : UIViewController <RUAudioPreviewViewDelegate, RUPreviewSessionObserver, UITableViewDataSource, UITableViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicator;
    RadioStationTreeNode *_addingTreeNode;
    RUParallelScrollView *_containerScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _containerScrollViewContentInsetAdditions;
    RUStationTreeDataSource *_dataSource;
    <RUStationTreeViewControllerDelegate> *_delegate;
    bool _hasLoadedParentTreeNode;
    bool _isLoadingParentTreeNode;
    SSMetricsPageEvent *_lastPageEvent;
    UILabel *_loadingLabel;
    NSMutableArray *_loadingTreeNodes;
    RUMetricsController *_metricsController;
    long long _navigationOperation;
    RadioStationTreeNode *_parentTreeNode;
    RUPreviewSession *_previewSession;
    RadioStationTreeNode *_previewingTreeNode;
    NSMutableArray *_queuedMetricsOperations;
    RUProxyTableView *_tableView;
    bool _wasLastNavigationOperationAnimated;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUStationTreeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (double)contentWidthForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_addButtonAction:(id)arg1;
- (void)_addMetricsControllerOperationBlock:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyPreviewingAttributesToCell:(id)arg1 forTreeNode:(id)arg2 animated:(bool)arg3;
- (id)_childTreeNodeAtIndexPath:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_currentPreviewTrackDescripton;
- (void)_endPreviewPlaybackWithOptions:(long long)arg1 withFinalItem:(id)arg2 didFinalItemPlayToCompletion:(bool)arg3;
- (id)_indexPathForChildTreeNode:(id)arg1;
- (id)_initWithDataSource:(id)arg1;
- (void)_layoutLoadingViews;
- (void)_loadAdditionalChildrenForSectionTreeNode:(id)arg1;
- (id)_mediaEventForPreviewingItem:(id)arg1;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_updateWithParentNode:(id)arg1 metricsPageEvent:(id)arg2 metricsConfiguration:(id)arg3 canReloadTableView:(bool)arg4;
- (void)audioPreviewViewDidCancel:(id)arg1 forReason:(long long)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)initForFeaturedStations;
- (id)initWithParentNodeID:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)previewSession:(id)arg1 didStopWithOptions:(long long)arg2 withFinalItem:(id)arg3 didFinalItemPlayToCompletion:(bool)arg4;
- (void)removeAddingIndicator;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

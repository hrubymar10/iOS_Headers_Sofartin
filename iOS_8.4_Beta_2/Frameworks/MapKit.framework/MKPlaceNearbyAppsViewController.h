/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceNearbyAppsViewController : UITableViewController <MKPlaceViewNearbyAppsCellDelegate, MKStackingViewControllerPreferredSizeUse> {
    <MKPlaceNearbyAppsViewControllerDelegate> *_nearbyAppsDelegate;
    NSArray *_storeItems;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) <MKPlaceNearbyAppsViewControllerDelegate> * nearbyAppsDelegate;
@property(assign,readonly) bool requiresPreferredContentSizeInStackingView;
@property(assign,retain) NSArray * storeItems;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)init;
- (void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (id)nearbyAppsDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setNearbyAppsDelegate:(id)arg1;
- (void)setStoreItems:(id)arg1;
- (id)storeItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
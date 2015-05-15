/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDAlbumsDetailViewController : MCDTableViewController {
    double _maximumDurationWidth;
}

@property (nonatomic, readonly) double maximumDurationWidth;

+ (id)actionCellConfigurationClasses;

- (void)_updateTitle;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (double)maximumDurationWidth;
- (void)reloadData;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

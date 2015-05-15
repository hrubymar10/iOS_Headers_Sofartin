/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDArtistsViewController : MCDTableViewController {
    bool _allowsActions;
}

@property (nonatomic) bool allowsActions;

+ (id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
+ (long long)groupingType;
+ (id)itemPersistentIDProperty;
+ (id)persistentIDProperty;

- (void)_limitedUIDidChange;
- (bool)allowsActions;
- (void)setAllowsActions:(bool)arg1;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

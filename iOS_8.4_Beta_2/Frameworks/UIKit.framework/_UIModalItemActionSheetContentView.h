/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItemActionSheetContentView : _UIModalItemContentView {
    UITableView *_cancelTableView;
    _UIBackdropView *_effectView;
    UITableView *_otherButtonTableView;
}

- (void)_createOtherButtonTableView;
- (void)_moveAllSubviewsToEffectContentView;
- (void)_prepareViewIfNeeded;
- (void)dealloc;
- (void)layout;
- (double)numberOfOtherButtonTitles;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

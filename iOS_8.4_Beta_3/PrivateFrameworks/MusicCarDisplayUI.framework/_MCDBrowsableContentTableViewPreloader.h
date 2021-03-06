/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface _MCDBrowsableContentTableViewPreloader : NSObject <MCDBrowsableContentModelListener> {
    bool _cancelled;
    id _cancelledBlock;
    NSIndexPath *_indexPath;
    MCDBrowsableContentModel *_model;
    UINavigationController *_navigationController;
    bool _pushContainerWhenNil;
    bool _pushNowPlayingWhenNil;
    UIViewController *_sourceViewController;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, readonly, copy) id cancelledBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MCDBrowsableContentModel *model;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) UIViewController *sourceViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deregister;
- (id)cancelledBlock;
- (void)dealloc;
- (id)indexPath;
- (id)initWithModel:(id)arg1 indexPath:(id)arg2 sourceViewController:(id)arg3 navigationController:(id)arg4 cancelledBlock:(id)arg5;
- (bool)isCancelled;
- (void)loadAndPush;
- (id)model;
- (void)model:(id)arg1 didInitiatePlaybackOfItemAtIndexPath:(id)arg2 error:(id)arg3;
- (void)model:(id)arg1 didUpdateContainerAtIndexPath:(id)arg2;
- (void)model:(id)arg1 didUpdateContentItemsAtIndexPaths:(id)arg2;
- (id)navigationController;
- (void)setCancelled:(bool)arg1;
- (id)sourceViewController;

@end

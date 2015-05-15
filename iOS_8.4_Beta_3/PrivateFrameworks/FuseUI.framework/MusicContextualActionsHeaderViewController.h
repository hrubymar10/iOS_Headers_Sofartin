/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualActionsHeaderViewController : UIViewController <MusicContextualActionsHeaderViewDelegate> {
    bool _allowsSelection;
    MusicEntityValueContext *_entityValueContext;
    MusicContextualActionsHeaderView *_headerView;
    id _selectionHandler;
}

@property (nonatomic) bool allowsSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MusicEntityValueContext *entityValueContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id selectionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowsSelection;
- (void)contextualActionsHeaderViewWasSelected:(id)arg1;
- (id)entityValueContext;
- (id)initWithEntityValueContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)selectionHandler;
- (void)setAllowsSelection:(bool)arg1;
- (void)setSelectionHandler:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

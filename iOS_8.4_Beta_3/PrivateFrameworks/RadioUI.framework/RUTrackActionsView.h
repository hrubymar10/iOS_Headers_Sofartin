/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUTrackActionsView : UIView <RUTrackActioning, UITableViewDataSource, UITableViewDelegate> {
    long long _enabledActions;
    _RUTrackActionsHeaderView *_headerView;
    long long _onActions;
    bool _presentedInPopover;
    UITableView *_tableView;
    <RUTrackActionsDelegate> *_trackActionsDelegate;
}

@property (nonatomic, copy) NSString *artistText;
@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic, readonly) long long cancelIndex;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long enabledActions;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long onActions;
@property (getter=isPresentedInPopover, nonatomic) bool presentedInPopover;
@property (nonatomic, copy) NSString *songText;
@property (readonly) Class superclass;
@property (nonatomic) <RUTrackActionsDelegate> *trackActionsDelegate;

+ (struct CGSize { double x1; double x2; })artworkSize;

- (void).cxx_destruct;
- (id)_accessoryImageForAction:(long long)arg1 highlighted:(bool)arg2;
- (struct UIOffset { double x1; double x2; })_accessoryImageOffsetForAction:(long long)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_didChangeContentSize;
- (id)_titleForAction:(long long)arg1;
- (void)_updateHeaderViewHeight;
- (long long)actionForButtonIndex:(long long)arg1;
- (id)artistText;
- (id)artworkImage;
- (long long)cancelIndex;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (long long)enabledActions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPresentedInPopover;
- (void)layoutSubviews;
- (long long)onActions;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setArtistText:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setEnabledActions:(long long)arg1;
- (void)setOnActions:(long long)arg1;
- (void)setPresentedInPopover:(bool)arg1;
- (void)setSongText:(id)arg1;
- (void)setTrackActionsDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)songText;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (id)trackActionsDelegate;
- (void)traitCollectionDidChange:(id)arg1;

@end

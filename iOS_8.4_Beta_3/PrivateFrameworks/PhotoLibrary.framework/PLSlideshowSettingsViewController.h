/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowSettingsViewController : UIViewController <MPMediaPickerControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    PLSlideshowAirPlayRoutesViewController *_airPlayRoutesController;
    NSArray *_airplayRoutes;
    NSArray *_alternateTransitionLocalizations;
    <PLSlideshowSettingsViewControllerDelegate> *_delegate;
    MPMediaPickerController *_mediaPicker;
    UITableViewCell *_playMusicSwitchCell;
    unsigned long long _selectedAirplayRouteIndex;
    UITableViewCell *_selectedMusicCell;
    NSString *_selectedTransition;
    MPMediaItemCollection *_slideshowMusicCollection;
    bool _slideshowShouldPlayMusic;
    UITableView *_table;
    UITableViewCell *_transitionCell;
    NSArray *_transitionKeys;
    PLSlideshowTransitionsViewController *_transitionsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLSlideshowSettingsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *selectedTransition;
@property (nonatomic, retain) MPMediaItemCollection *slideshowMusicCollection;
@property (nonatomic) bool slideshowShouldPlayMusic;
@property (readonly) Class superclass;

+ (id)AppleTVPushTransitions;
+ (id)TVOutTransitions;
+ (int)_uiTransitionForTransitionKey:(id)arg1;
+ (id)iPadTransitions;
+ (id)iPhoneTransitions;

- (long long)_airPlaySection;
- (long long)_buttonSection;
- (bool)_includeAirPlaySection;
- (long long)_mainSection;
- (void)_playButtonWasPressed:(id)arg1;
- (void)_playMusicSwitchValueDidChange:(id)arg1;
- (void)_preheatMediaPicker;
- (id)_selectedAirplayRoute;
- (id)_selectedMusic;
- (void)_updateSettingsInfo;
- (void)applySlideshowSettings:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopoverView;
- (void)dealloc;
- (id)delegate;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)loadView;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedTransition;
- (void)setDelegate:(id)arg1;
- (void)setSelectedTransition:(id)arg1;
- (void)setSlideshowMusicCollection:(id)arg1;
- (void)setSlideshowShouldPlayMusic:(bool)arg1;
- (id)slideshowMusicCollection;
- (id)slideshowSettings;
- (bool)slideshowShouldPlayMusic;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateTransitionKeys:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

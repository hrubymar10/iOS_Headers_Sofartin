/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicContextualActionsConfiguration : NSObject <MusicClientContextConsuming> {
    bool _allowsLibraryAddRemoveActions;
    bool _allowsLibraryKeepLocalActions;
    bool _allowsRecommendationActions;
    bool _allowsShareActions;
    bool _allowsShowGeniusPlaylistDetail;
    bool _allowsShowInStoreActions;
    bool _allowsStartRadioActions;
    bool _allowsUpNextActions;
    MusicClientContext *_clientContext;
    id _didDismissHandler;
    MusicEntityValueContext *_entityValueContext;
    NSDictionary *_extraInfo;
    long long _preferredAlertControllerStyle;
    UIViewController *_presentingViewController;
    bool _showsHeader;
}

@property (nonatomic) bool allowsLibraryAddRemoveActions;
@property (nonatomic) bool allowsLibraryKeepLocalActions;
@property (nonatomic) bool allowsRecommendationActions;
@property (nonatomic) bool allowsShareActions;
@property (nonatomic) bool allowsShowGeniusPlaylistDetail;
@property (nonatomic) bool allowsShowInStoreActions;
@property (nonatomic) bool allowsStartRadioActions;
@property (nonatomic) bool allowsUpNextActions;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id didDismissHandler;
@property (nonatomic, retain) MusicEntityValueContext *entityValueContext;
@property (nonatomic, retain) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredAlertControllerStyle;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) bool showsHeader;
@property (readonly) Class superclass;

+ (id)defaultEntityValueContext;

- (void).cxx_destruct;
- (void)_didSelectHeaderFromAlertController:(id)arg1;
- (struct { long long x1; unsigned long long x2; })_headerSelectionHandlingInformation;
- (bool)allowsLibraryAddRemoveActions;
- (bool)allowsLibraryKeepLocalActions;
- (bool)allowsRecommendationActions;
- (bool)allowsShareActions;
- (bool)allowsShowGeniusPlaylistDetail;
- (bool)allowsShowInStoreActions;
- (bool)allowsStartRadioActions;
- (bool)allowsUpNextActions;
- (id)clientContext;
- (id)didDismissHandler;
- (id)entityValueContext;
- (id)extraInfo;
- (id)init;
- (id)newAlertController;
- (long long)preferredAlertControllerStyle;
- (id)presentingViewController;
- (void)setAllowsLibraryAddRemoveActions:(bool)arg1;
- (void)setAllowsLibraryKeepLocalActions:(bool)arg1;
- (void)setAllowsRecommendationActions:(bool)arg1;
- (void)setAllowsShareActions:(bool)arg1;
- (void)setAllowsShowGeniusPlaylistDetail:(bool)arg1;
- (void)setAllowsShowInStoreActions:(bool)arg1;
- (void)setAllowsStartRadioActions:(bool)arg1;
- (void)setAllowsUpNextActions:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDidDismissHandler:(id)arg1;
- (void)setEntityValueContext:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (void)setPreferredAlertControllerStyle:(long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setShowsHeader:(bool)arg1;
- (bool)showsHeader;

@end

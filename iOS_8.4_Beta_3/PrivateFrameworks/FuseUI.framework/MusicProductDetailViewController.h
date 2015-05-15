/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductDetailViewController : UIViewController <MusicClientContextConsuming, MusicEntityPlaybackStatusControllerObserving, MusicEntityVerticalLockupViewDelegate> {
    MusicClientContext *_clientContext;
    <MusicEntityProviding> *_containerEntityProvider;
    MusicEntityValueContext *_containerEntityValueContext;
    double _contentBottomLayoutGuide;
    double _contentTopLayoutGuide;
    MusicEntityPlaybackStatusController *_playbackStatusController;
    MPAVController *_player;
    SKUIDocumentContainerViewController *_relatedContentDocumentContainerViewController;
    MusicEntityVerticalLockupView *_verticalLockupView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _verticalScrollingContainerContentInsetAdditions;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,readwrite) double contentBottomLayoutGuide;
@property(assign,readwrite) double contentTopLayoutGuide;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SKUIDocumentContainerViewController * relatedContentDocumentContainerViewController;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureContainerEntityValueContext;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_updateLayout;
- (void)_updatePlaybackStatusForLockupView;
- (void)cancelEditing;
- (id)clientContext;
- (void)commitEditing;
- (double)contentBottomLayoutGuide;
- (double)contentTopLayoutGuide;
- (void)dealloc;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2;
- (id)loadVerticalLockupContentDescriptor;
- (id)loadVerticalLockupView;
- (void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1;
- (id)relatedContentDocumentContainerViewController;
- (void)setClientContext:(id)arg1;
- (void)setContentBottomLayoutGuide:(double)arg1;
- (void)setContentTopLayoutGuide:(double)arg1;
- (void)setRelatedContentDocumentContainerViewController:(id)arg1;
- (void)verticalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

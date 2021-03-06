/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewControllerReserved : NSObject {
    UIBarButtonItem *actionItem;
    UIBarButtonItem *archiveItem;
    QLArchiveViewer *archiveViewer;
    NSMutableDictionary *avStateForPreviewItems;
    bool blockRemoteImages;
    _UIAsyncInvocation *cancelViewServiceRequest;
    id delegate;
    NSNumberFormatter *indexFormatter;
    UIBarButtonItem *indexItem;
    UILabel *indexLabel;
    UIDocumentInteractionController *interactionController;
    bool internalViewsLoaded;
    bool isDelayingPresentation;
    unsigned int isInUIDICPopover;
    QLPreviewItemsSource *itemsSource;
    NSURL *lastPreviewedCurrentItemURL;
    NSURL *lastPreviewedRealItemURL;
    UIBarButtonItem *listItem;
    NSString *loadingTextForMissingFiles;
    UIView *mainView;
    int mode;
    UINavigationController *navigationController;
    NSArray *originalLeftBarButtonItems;
    NSArray *originalRightBarButtonItems;
    int overlayState;
    NSMutableDictionary *pdfPreviewDataCache;
    UIBarButtonItem *playPauseButton;
    UIViewController<QLPreviewContentControllerProtocol> *previewContentController;
    <QLPreviewItem> *previewItem;
    id readyBlock;
    id restorePreviousStateBlock;
    UIBarButtonItem *routeButton;
    bool scrubbing;
    bool showActionAsDefaultButton;
    bool sourceIsManaged;
    unsigned int statusBarWasHidden;
    UIBarButtonItem *titleItem;
    unsigned int toolbarWasHidden;
    bool useCustomActionButton;
    MPVolumeView *volumeView;
    MPVolumeView *volumeViewHidden;
}

- (void)dealloc;
- (id)init;

@end

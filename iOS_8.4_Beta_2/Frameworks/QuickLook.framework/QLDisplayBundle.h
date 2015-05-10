/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDisplayBundle : UIViewController {
    <QLPreviewItemInteractionDelegate> *_delegate;
    long long _index;
    bool _loaded;
    bool _loading;
    double _navigationBarVerticalOffset;
    bool _overlayHidden;
    NSString *_password;
    <QLPreviewItem> *_previewItem;
    int _previewMode;
    NSTimer *_refreshTimer;
    struct { 
        long long pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } contentFrame; 
    } clientContext;
}

@property(assign,readonly) UIView * accessoryView;
@property(assign,readonly) int airPlayMode;
@property(assign,readonly) UIView * airplayView;
@property(assign,readwrite) struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property(assign,readwrite) <QLPreviewItemInteractionDelegate> * delegate;
@property(assign,readwrite) long long index;
@property(assign,readwrite) bool loaded;
@property(assign,readwrite) bool loading;
@property(assign,readwrite) double navigationBarVerticalOffset;
@property(assign,retain) NSString * password;
@property(assign,retain) <QLPreviewItem> * previewItem;
@property(assign,readwrite) int previewMode;

+ (double)allowedLoadingDelay;
+ (bool)needsAVControls;

- (void)_notifyDidLoadWithError:(id)arg1;
- (void)_performCancelLoad;
- (bool)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (id)accessoryView;
- (bool)adaptativeHeight;
- (int)airPlayMode;
- (id)airplayView;
- (void)beginScrubbing;
- (void)beginTrackingViewUpdates;
- (bool)canBeCached;
- (bool)canCopyToPasteboard;
- (void)cancelLoad;
- (void)cancelLoadIfNeeded;
- (struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didFailLoadingWithError:(id)arg1;
- (void)didLoad;
- (void)didReceiveMemoryWarning;
- (void)discardAirPlayView;
- (void)endScrubbing;
- (void)endTrackingViewUpdates;
- (void)enterBackground;
- (id)gestureRecognizersForFullScreenDisplay;
- (long long)index;
- (id)init;
- (void)loadIfNeededWithHints:(id)arg1;
- (void)loadWithHints:(id)arg1;
- (bool)loaded;
- (bool)loading;
- (long long)modalPresentationStyle;
- (double)navigationBarVerticalOffset;
- (bool)needsContentInset;
- (bool)needsContentInsetEvenIfNavigationBarIsHidden;
- (bool)overlayIsHidden;
- (id)password;
- (id)pdfPreviewData;
- (id)previewItem;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (id)scrollView;
- (void)scrubToValue:(double)arg1;
- (void)setClientContext:(struct { long long x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setNavigationBarVerticalOffset:(double)arg1;
- (void)setOverlayHidden:(bool)arg1 duration:(double)arg2;
- (void)setPassword:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (void)setupAirPlayView;
- (void)togglePlayState;
- (void)updateContentOffsetAnimated:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidUpdate;
- (void)viewWillAppear:(bool)arg1;

@end
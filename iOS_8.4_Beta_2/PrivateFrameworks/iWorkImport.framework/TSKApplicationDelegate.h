/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {
    <TSKCompatibilityDelegate> *_compatibilityDelegate;
}

@property(getter=isActivating,assign,readonly) bool activating;
@property(assign,readonly) NSString * applicationName;
@property(assign,retain) <TSKCompatibilityDelegate> * compatibilityDelegate;
@property(assign,readonly) bool designModeEnabled;
@property(assign,readonly) NSString * documentTypeDisplayName;
@property(assign,readwrite) unsigned long long iWorkAuthorColorIndex;
@property(assign,copy) NSString * iWorkAuthorName;
@property(getter=isInBackground,assign,readonly) bool inBackground;
@property(assign,readonly) bool isCanvasFullScreen;
@property(assign,readonly) bool performanceModeEnabled;
@property(assign,readonly) bool tableCellInspectorShowsNaturalAlignment;
@property(assign,readonly) bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property(assign,readonly) bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property(assign,readonly) bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property(assign,readonly) NSString * templateTypeDisplayName;
@property(assign,readonly) bool textInspectorShowsMoreSubpane;

+ (id)documentDirectoryPath;
+ (id)platform_sharedDelegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedDelegate;

- (id)appChartPropertyOverrides;
- (id)applicationName;
- (id)applicationNameForTitleBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationToolbarFrame;
- (id)compatibilityDelegate;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (bool)designModeEnabled;
- (id)documentTypeDisplayName;
- (unsigned long long)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
- (id)init;
- (id)invalidURLSchemes;
- (bool)isActivating;
- (bool)isCanvasFullScreen;
- (bool)isInBackground;
- (bool)openURL:(id)arg1;
- (bool)performanceModeEnabled;
- (id)previewImageForType:(id)arg1;
- (void)setCompatibilityDelegate:(id)arg1;
- (void)setIWorkAuthorColorIndex:(unsigned long long)arg1;
- (void)setIWorkAuthorName:(id)arg1;
- (bool)shouldGenerateGuidesForOffscreenLayouts;
- (bool)shouldRenderContactShadow;
- (bool)shouldRenderCurvedShadow;
- (bool)shouldValidateMasterLayoutWhileInsertingRows;
- (bool)supportsRTL;
- (bool)supportsShrinkTextToFit;
- (bool)tableCellInspectorShowsNaturalAlignment;
- (bool)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
- (bool)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
- (bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)templateTypeDisplayName;
- (bool)textInspectorShowsMoreSubpane;

@end
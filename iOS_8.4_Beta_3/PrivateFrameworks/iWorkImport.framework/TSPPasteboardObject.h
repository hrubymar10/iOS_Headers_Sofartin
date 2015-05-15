/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardObject : TSPObject {
    TSPObject *_appNativeObject;
    NSArray *_drawables;
    TSPObject *_guideStorage;
    bool _isCrossAppPaste;
    bool _isCrossDocumentPaste;
    bool _isSmartCopyPaste;
    bool _isTextPrimary;
    NSArray *_styles;
    TSPObject *_stylesheet;
    TSPObject *_theme;
    TSPObject *_wpStorage;
}

@property (nonatomic, retain) TSPObject *appNativeObject;
@property (nonatomic, copy) NSArray *drawables;
@property (nonatomic, retain) TSPObject *guideStorage;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic) bool isSmartCopyPaste;
@property (nonatomic) bool isTextPrimary;
@property (nonatomic, copy) NSArray *styles;
@property (nonatomic, retain) TSPObject *stylesheet;
@property (nonatomic, retain) TSPObject *theme;
@property (nonatomic, retain) TSPObject *wpStorage;

- (void).cxx_destruct;
- (id)appNativeObject;
- (id)drawables;
- (id)guideStorage;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isSmartCopyPaste;
- (bool)isTextPrimary;
- (void)saveToArchiver:(id)arg1;
- (void)setAppNativeObject:(id)arg1;
- (void)setDrawables:(id)arg1;
- (void)setGuideStorage:(id)arg1;
- (void)setIsSmartCopyPaste:(bool)arg1;
- (void)setIsTextPrimary:(bool)arg1;
- (void)setStyles:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setWpStorage:(id)arg1;
- (id)styles;
- (id)stylesheet;
- (id)theme;
- (long long)tsp_identifier;
- (id)wpStorage;

@end

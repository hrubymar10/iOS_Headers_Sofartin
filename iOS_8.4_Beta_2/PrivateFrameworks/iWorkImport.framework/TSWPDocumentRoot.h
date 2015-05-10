/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex>

@property(getter=isChangeTrackingEnabled,assign,readonly) bool changeTrackingEnabled;
@property(assign,readonly) bool supportHeaderFooterParagraphAlignmentInInspectors;

- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (void)dealloc;
- (void)documentDidLoad;
- (id)documentFonts;
- (struct __CFLocale { }*)hyphenationLocale;
- (bool)isChangeTrackingEnabled;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (bool)shouldHyphenate;
- (bool)supportHeaderFooterParagraphAlignmentInInspectors;
- (id)unavailableDocumentFonts;
- (bool)useLigatures;
- (int)verticalAlignmentForTextStorage:(id)arg1;

@end

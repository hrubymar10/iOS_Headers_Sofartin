/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDocumentSettings : TSPObject {
    bool _annotationsVisible;
    NSString *_bibliographyFormat;
    bool _changeBarsVisible;
    bool _copyAssets;
    bool _copyMovies;
    NSString *_creationDate;
    NSString *_creationLocale;
    int _ctBubblesVisibility;
    NSString *_decimalTab;
    bool _documentIsRTL;
    int _footnoteFormat;
    long long _footnoteGap;
    int _footnoteKind;
    int _footnoteNumbering;
    bool _formatChangesVisible;
    bool _hasBody;
    bool _hasFooters;
    bool _hasHeaders;
    bool _hyphenation;
    NSString *_hyphenationLanguage;
    NSString *_language;
    bool _ligatures;
    bool _linksEnabled;
    NSString *_originalTemplate;
    bool _placeholderAuthoring;
    bool _qlPreview;
    bool _sectionAuthoring;
    bool _showCTDeletions;
    bool _showCTMarkup;
    bool _tocLinksEnabled;
}

@property(assign,readwrite) bool annotationsVisible;
@property(assign,readwrite) bool autoHyphenation;
@property(assign,readonly) int basicFootnoteFormat;
@property(assign,copy) NSString * bibliographyFormat;
@property(assign,readwrite) bool changeBarsVisible;
@property(assign,readwrite) bool copyMovies;
@property(assign,readwrite) bool copyTemplateAssets;
@property(assign,copy) NSString * creationDate;
@property(assign,copy) NSString * creationLocale;
@property(assign,readwrite) int ctBubblesVisibility;
@property(assign,copy) NSString * decimalTab;
@property(assign,readwrite) bool documentIsRTL;
@property(assign,readwrite) int footnoteFormat;
@property(assign,readwrite) long long footnoteGap;
@property(assign,readwrite) int footnoteKind;
@property(assign,readwrite) int footnoteNumbering;
@property(assign,readwrite) bool formatChangesVisible;
@property(assign,readwrite) bool hasBody;
@property(assign,readwrite) bool hasFooters;
@property(assign,readwrite) bool hasHeaders;
@property(assign,readwrite) bool hyperlinksEnabled;
@property(assign,copy) NSString * hyphenationLanguage;
@property(assign,copy) NSString * language;
@property(assign,copy) NSString * originalTemplate;
@property(assign,readwrite) bool placeholderAuthoring;
@property(assign,readwrite) bool quickLookPreview;
@property(assign,readwrite) bool sectionAuthoring;
@property(assign,readwrite) bool showCTDeletions;
@property(assign,readwrite) bool showCTMarkup;
@property(assign,readwrite) bool tocLinksEnabled;
@property(assign,readwrite) bool useLigatures;

- (bool)annotationsVisible;
- (bool)autoHyphenation;
- (int)basicFootnoteFormat;
- (id)bibliographyFormat;
- (bool)changeBarsVisible;
- (bool)copyMovies;
- (bool)copyTemplateAssets;
- (id)creationDate;
- (id)creationLocale;
- (int)ctBubblesVisibility;
- (void)dealloc;
- (id)decimalTab;
- (bool)documentIsRTL;
- (int)footnoteFormat;
- (long long)footnoteGap;
- (int)footnoteKind;
- (int)footnoteNumbering;
- (bool)formatChangesVisible;
- (bool)hasBody;
- (bool)hasFooters;
- (bool)hasHeaders;
- (bool)hyperlinksEnabled;
- (id)hyphenationLanguage;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)language;
- (id)originalTemplate;
- (bool)placeholderAuthoring;
- (bool)quickLookPreview;
- (void)resetForNewDocumentFromTemplate:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (bool)sectionAuthoring;
- (void)setAnnotationsVisible:(bool)arg1;
- (void)setAutoHyphenation:(bool)arg1;
- (void)setBibliographyFormat:(id)arg1;
- (void)setCTBubblesVisibility:(int)arg1;
- (void)setChangeBarsVisible:(bool)arg1;
- (void)setCopyMovies:(bool)arg1;
- (void)setCopyTemplateAssets:(bool)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCreationLocale:(id)arg1;
- (void)setCtBubblesVisibility:(int)arg1;
- (void)setDecimalTab:(id)arg1;
- (void)setDocumentIsRTL:(bool)arg1;
- (void)setFootnoteFormat:(int)arg1;
- (void)setFootnoteGap:(long long)arg1;
- (void)setFootnoteKind:(int)arg1;
- (void)setFootnoteNumbering:(int)arg1;
- (void)setFormatChangesVisible:(bool)arg1;
- (void)setHasBody:(bool)arg1;
- (void)setHasFooters:(bool)arg1;
- (void)setHasHeaders:(bool)arg1;
- (void)setHyperlinksEnabled:(bool)arg1;
- (void)setHyphenationLanguage:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOriginalTemplate:(id)arg1;
- (void)setPlaceholderAuthoring:(bool)arg1;
- (void)setQuickLookPreview:(bool)arg1;
- (void)setSectionAuthoring:(bool)arg1;
- (void)setShowCTDeletions:(bool)arg1;
- (void)setShowCTMarkup:(bool)arg1;
- (void)setTocLinksEnabled:(bool)arg1;
- (void)setUseLigatures:(bool)arg1;
- (bool)showCTDeletions;
- (bool)showCTMarkup;
- (id)stringWithCurrentDate;
- (bool)tocLinksEnabled;
- (bool)useLigatures;

@end

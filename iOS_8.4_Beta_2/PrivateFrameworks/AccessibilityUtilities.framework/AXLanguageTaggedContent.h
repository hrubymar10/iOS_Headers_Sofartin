/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTaggedContent : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _currentChunk;
    NSArray *_currentDialects;
    NSLinguisticTagger *_linguisticTagger;
    bool _predictedByTagger;
    bool _splitContentOnNewlines;
    bool _tagged;
    NSMutableArray *_tags;
    NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;
    NSString *_userPreferredLangID;
}

@property(assign,readonly) NSString * content;
@property(assign,retain) NSArray * currentDialects;
@property(assign,retain) NSLinguisticTagger * linguisticTagger;
@property(assign,readwrite) bool splitContentOnNewlines;
@property(getter=isTagged,assign,readwrite) bool tagged;
@property(assign,retain) NSMutableArray * tags;
@property(assign,retain) NSMutableOrderedSet * unpredictedAmbiguousLangMaps;
@property(assign,copy) NSString * userPreferredLangID;

- (void)_addTag;
- (void)_manuallyProcessContentWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ambiguousLangMaps;
- (id)content;
- (id)currentDialects;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictedTags:(id)arg1;
- (void)enumerateUnpredictedTags:(id)arg1;
- (bool)hasOnlyNonWesternLangMaps;
- (bool)hasOnlyWesternLangMaps;
- (id)initWithContent:(id)arg1;
- (bool)isTagged;
- (bool)langMapIsSignificant:(id)arg1;
- (id)linguisticTagger;
- (id)primaryAmbiguousDialect;
- (id)primaryUnambiguousDialect;
- (void)setCurrentDialects:(id)arg1;
- (void)setLinguisticTagger:(id)arg1;
- (void)setSplitContentOnNewlines:(bool)arg1;
- (void)setTagged:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setUnpredictedAmbiguousLangMaps:(id)arg1;
- (void)setUserPreferredLangID:(id)arg1;
- (id)significantAmbiguousLangMaps;
- (id)significantAmbiguousLangMapsForUserKeyboards;
- (bool)splitContentOnNewlines;
- (void)tagContent;
- (id)tags;
- (id)unambiguousLangMaps;
- (id)unpredictedAmbiguousLangMaps;
- (void)updateTagsForLocalePrefChange;
- (id)userPreferredLangID;

@end

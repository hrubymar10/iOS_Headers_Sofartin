/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTag : NSObject <NSCopying> {
    NSMutableOrderedSet *_ambiguousDialects;
    NSString *_content;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSMutableOrderedSet *_unambiguousDialects;
    bool _wasPredicted;
}

@property(assign,retain) NSMutableOrderedSet * ambiguousDialects;
@property(assign,readwrite) NSString * content;
@property(assign,readonly) NSString * contentSubstring;
@property(assign,readonly) AXDialectMap * dialect;
@property(assign,readonly) AXDialectMap * preferredAmbiguousDialect;
@property(assign,readonly) AXDialectMap * preferredUnambiguousDialect;
@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property(assign,retain) NSMutableOrderedSet * unambiguousDialects;
@property(assign,readwrite) bool wasPredicted;

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 content:(id)arg3 predictedByTagger:(bool)arg4;

- (void)addAmbiguousDialect:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
- (id)ambiguousDialects;
- (bool)canBeSpokenByDialect:(id)arg1;
- (bool)canBeSpokenByLanguage:(id)arg1;
- (id)content;
- (id)contentSubstring;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dialect;
- (bool)hasAmbigiousDialects;
- (id)preferredAmbiguousDialect;
- (id)preferredUnambiguousDialect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAmbiguousDialects:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUnambiguousDialects:(id)arg1;
- (void)setWasPredicted:(bool)arg1;
- (id)unambiguousDialects;
- (bool)wasPredicted;

@end

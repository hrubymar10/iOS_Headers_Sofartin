/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLangMap : NSObject {
    NSArray *_alternateLanguageIDs;
    bool _ambiguous;
    NSArray *_associatedAmbiguousLanguages;
    NSArray *_dialects;
    NSString *_generalLanguageID;
    AXDialectMap *_userPreferredDialect;
    bool _western;
    AXDialectMap *userLocaleDialect;
}

@property(assign,retain) NSArray * alternateLanguageIDs;
@property(assign,readonly) NSArray * alternativeVoiceIdentifiers;
@property(getter=isAmbiguous,assign,readwrite) bool ambiguous;
@property(assign,retain) NSArray * associatedAmbiguousLanguages;
@property(assign,readonly) AXDialectMap * defaultDialect;
@property(assign,retain) NSArray * dialects;
@property(assign,copy) NSString * generalLanguageID;
@property(assign,readonly) AXDialectMap * userLocaleDialect;
@property(assign,readwrite) AXDialectMap * userPreferredDialect;
@property(getter=isWestern,assign,readwrite) bool western;

- (id)alternateLanguageIDs;
- (id)alternativeVoiceIdentifiers;
- (id)associatedAmbiguousLanguages;
- (id)basicDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultDialect;
- (id)description;
- (id)dialectWithLocaleIdentifier:(id)arg1;
- (id)dialects;
- (id)generalLanguageID;
- (id)initWithLanguageID:(id)arg1 isWestern:(bool)arg2 isAmbiguous:(bool)arg3 dialects:(id)arg4 alternateLanguageIDs:(id)arg5 associatedAmbiguousLanguages:(id)arg6;
- (bool)isAmbiguous;
- (bool)isWestern;
- (void)setAlternateLanguageIDs:(id)arg1;
- (void)setAmbiguous:(bool)arg1;
- (void)setAssociatedAmbiguousLanguages:(id)arg1;
- (void)setDialects:(id)arg1;
- (void)setGeneralLanguageID:(id)arg1;
- (void)setUserPreferredDialect:(id)arg1;
- (void)setWestern:(bool)arg1;
- (id)userLocaleDialect;
- (id)userPreferredDialect;

@end

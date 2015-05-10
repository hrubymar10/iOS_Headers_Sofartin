/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDialectMap : NSObject {
    AXLangMap *_langMap;
    NSLocale *_locale;
    NSCharacterSet *_secondaryLanguageRange;
    NSCharacterSet *_speakableCharacters;
    NSString *_specificLanguageID;
    NSString *_voiceName;
}

@property(assign,readonly) AXLanguageManager * langManager;
@property(assign,readwrite) AXLangMap * langMap;
@property(assign,readonly) NSString * languageNameAndLocaleInCurrentLocale;
@property(assign,readonly) NSString * languageNameAndLocaleInNativeLocale;
@property(assign,readonly) NSString * languageNameInCurrentLocale;
@property(assign,readonly) NSString * languageNameInNativeLocale;
@property(assign,retain) NSLocale * locale;
@property(assign,readonly) NSString * localeNameInCurrentLocale;
@property(assign,readonly) NSString * regionID;
@property(assign,retain) NSCharacterSet * secondaryLanguageRange;
@property(assign,retain) NSCharacterSet * speakableCharacters;
@property(assign,copy) NSString * specificLanguageID;
@property(assign,copy) NSString * voiceName;

- (id)basicDescription;
- (bool)canSpeakCharacter:(unsigned short)arg1;
- (bool)canSpeakLongCharacter:(unsigned int)arg1;
- (bool)canSpeakString:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;
- (bool)isDialectSecondaryForCharacter:(unsigned short)arg1;
- (id)langManager;
- (id)langMap;
- (id)languageNameAndLocaleInCurrentLocale;
- (id)languageNameAndLocaleInNativeLocale;
- (id)languageNameInCurrentLocale;
- (id)languageNameInNativeLocale;
- (id)locale;
- (id)localeNameInCurrentLocale;
- (id)regionID;
- (id)secondaryLanguageRange;
- (void)setLangMap:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSecondaryLanguageRange:(id)arg1;
- (void)setSpeakableCharacters:(id)arg1;
- (void)setSpecificLanguageID:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)speakableCharacters;
- (id)specificLanguageID;
- (id)voiceName;

@end

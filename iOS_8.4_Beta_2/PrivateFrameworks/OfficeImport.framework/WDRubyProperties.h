/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyProperties : NSObject {
    unsigned int mOriginal;
    struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; } *mOriginalProperties;
}

@property(assign,readwrite) int alignment;
@property(assign,readwrite) unsigned short baseFontSize;
@property(assign,readwrite) unsigned short distanceBetween;
@property(assign,readwrite) unsigned short phoneticGuideFontSize;
@property(assign,readwrite) int phoneticGuideLanguage;

- (int)alignment;
- (unsigned short)baseFontSize;
- (void)clearAlignment;
- (void)clearBaseFontSize;
- (void)clearDistanceBetween;
- (void)clearPhoneticGuideFontSize;
- (void)clearPhoneticGuideLanguage;
- (void)dealloc;
- (unsigned short)distanceBetween;
- (id)init;
- (bool)isAlignmentOverridden;
- (bool)isAnythingOverridden;
- (bool)isAnythingOverriddenIn:(struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; }*)arg1;
- (bool)isBaseFontSizeOverridden;
- (bool)isDistanceBetweenOverridden;
- (bool)isPhoneticGuideFontSizeOverridden;
- (bool)isPhoneticGuideLanguageOverridden;
- (unsigned short)phoneticGuideFontSize;
- (int)phoneticGuideLanguage;
- (void)setAlignment:(int)arg1;
- (void)setBaseFontSize:(unsigned short)arg1;
- (void)setDistanceBetween:(unsigned short)arg1;
- (void)setPhoneticGuideFontSize:(unsigned short)arg1;
- (void)setPhoneticGuideLanguage:(int)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleTranslationManager : NSObject {
    bool _alwaysUsesNemethCodeForTechnicalText;
    bool _auxTableSupportsContractedBraille;
    bool _auxTableSupportsEightDotBraille;
    <SCROBrailleTranslatorProtocol> *_auxTranslator;
    NSBundle *_auxTranslatorBundle;
    NSLock *_contentLock;
    <SCROBrailleTranslatorProtocol> *_nemethTranslator;
    bool _tableSupportsContractedBraille;
    bool _tableSupportsEightDotBraille;
    <SCROBrailleTranslatorProtocol> *_translator;
    NSBundle *_translatorBundle;
}

@property (nonatomic) bool alwaysUsesNemethCodeForTechnicalText;
@property (nonatomic, readonly) bool auxiliaryTableSupportsContractedBraille;
@property (nonatomic, readonly) bool auxiliaryTableSupportsEightDotBraille;
@property (nonatomic, readonly) bool primaryTableSupportsContractedBraille;
@property (nonatomic, readonly) bool primaryTableSupportsEightDotBraille;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedManager;

- (id)_loadTableIdentifier:(id)arg1 bundle:(id*)arg2 existingBundle:(id)arg3 existingTranslator:(id)arg4;
- (id)_printBrailleForText:(id)arg1 primaryTable:(bool)arg2 contracted:(bool)arg3 eightDot:(bool)arg4 locations:(id*)arg5 isTechnical:(bool)arg6;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (id)autorelease;
- (id)auxiliaryTableIdentifier;
- (bool)auxiliaryTableSupportsContractedBraille;
- (bool)auxiliaryTableSupportsEightDotBraille;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)primaryTableIdentifier;
- (bool)primaryTableSupportsContractedBraille;
- (bool)primaryTableSupportsEightDotBraille;
- (id)printBrailleForTechnicalText:(id)arg1 primaryTable:(bool)arg2 locations:(id*)arg3;
- (id)printBrailleForText:(id)arg1 contracted:(bool)arg2 eightDot:(bool)arg3 locations:(id*)arg4;
- (id)printBrailleForText:(id)arg1 primaryTable:(bool)arg2 contracted:(bool)arg3 eightDot:(bool)arg4 locations:(id*)arg5;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setAuxiliaryTranslationTableWithTableIdentifier:(id)arg1;
- (void)setPrimaryTranslationTableWithTableIdentifier:(id)arg1;
- (id)textForPrintBraille:(id)arg1 contracted:(bool)arg2 eightDot:(bool)arg3 locations:(id*)arg4;
- (id)textForPrintBraille:(id)arg1 primaryTable:(bool)arg2 contracted:(bool)arg3 eightDot:(bool)arg4 locations:(id*)arg5;

@end

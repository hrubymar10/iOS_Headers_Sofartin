/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMutableNumberFormat : TSCHNumberFormat <TSCHCustomFormatUpdateSupport>

@property(assign,readwrite) unsigned int base;
@property(assign,readwrite) unsigned int basePlaces;
@property(assign,readwrite) bool baseUseMinusSign;
@property(assign,copy) NSString * currencyCode;
@property(assign,readwrite) unsigned int decimalPlaces;
@property(assign,readwrite) int formatType;
@property(assign,readwrite) int fractionAccuracy;
@property(assign,readwrite) int negativeStyle;
@property(assign,copy) NSString * prefixString;
@property(assign,readwrite) bool showThousandsSeparator;
@property(assign,copy) NSString * suffixString;
@property(assign,readwrite) bool useAccountingStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)p_formatTypeAffectedPropertyKeys;
- (void)p_setFractionAccuracy:(int)arg1;
- (void)setBase:(unsigned int)arg1;
- (void)setBasePlaces:(unsigned int)arg1;
- (void)setBaseUseMinusSign:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDecimalPlaces:(unsigned int)arg1;
- (void)setFormatType:(int)arg1;
- (void)setFractionAccuracy:(int)arg1;
- (void)setNegativeStyle:(int)arg1;
- (void)setPrefixString:(id)arg1;
- (void)setShowThousandsSeparator:(bool)arg1;
- (void)setSuffixString:(id)arg1;
- (void)setUseAccountingStyle:(bool)arg1;
- (void)setValueType:(int)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;

@end
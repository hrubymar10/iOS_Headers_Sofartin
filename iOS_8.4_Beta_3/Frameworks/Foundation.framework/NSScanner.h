/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSScanner : NSObject <NSCopying>

@property bool caseSensitive;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property (retain) id locale;
@property unsigned long long scanLocation;
@property (readonly, copy) NSString *string;

+ (id)SQLParsingScannerWithSQL:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)localizedScannerWithString:(id)arg1;
+ (id)scannerWithString:(id)arg1;

- (id)_invertedSkipSet;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfFirstMatchWithRegularExpression:(id)arg1;
- (id)_remainingString;
- (bool)_scanBalancedSubstringFromCharacter:(unsigned short)arg1 appendToString:(id)arg2;
- (bool)_scanDecimal:(unsigned long long)arg1 into:(long long*)arg2;
- (bool)_scanSQLiteIdentifierCharactersIntoString:(id*)arg1;
- (bool)_scanSQLiteIdentifierIntoString:(id*)arg1;
- (bool)_scanTableSQLColumn:(id*)arg1;
- (bool)_scanTableSQLConstraint:(id*)arg1;
- (bool)_scanThroughQuoteWithDelimiter:(id)arg1 appendToString:(id)arg2;
- (bool)_scanUpToTopLevelDelimiters:(id)arg1 intoString:(id*)arg2;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithString:(id)arg1;
- (bool)isAtEnd;
- (id)locale;
- (id)mf_nextTokenWithPunctuation:(struct __CFCharacterSet { }*)arg1;
- (id)mf_remainingString;
- (bool)mf_scanUpAndOverString:(id)arg1;
- (bool)mf_scanUpToRegularExpression:(id)arg1;
- (bool)scanCGFloat:(double*)arg1;
- (bool)scanCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; }*)arg1;
- (bool)scanDouble:(double*)arg1;
- (bool)scanFloat:(float*)arg1;
- (bool)scanHexDouble:(double*)arg1;
- (bool)scanHexFloat:(float*)arg1;
- (bool)scanHexInt:(unsigned int*)arg1;
- (bool)scanHexLongLong:(unsigned long long*)arg1;
- (bool)scanInt:(int*)arg1;
- (bool)scanInteger:(long long*)arg1;
- (unsigned long long)scanLocation;
- (bool)scanLongLong:(long long*)arg1;
- (bool)scanString:(id)arg1 intoString:(id*)arg2;
- (bool)scanTableSQLColumns:(id*)arg1 constraints:(id*)arg2;
- (bool)scanTableSQLPreambleAndTableName:(id*)arg1;
- (bool)scanUnsignedInteger:(unsigned long long*)arg1;
- (bool)scanUnsignedLongLong:(unsigned long long*)arg1;
- (bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id*)arg2;
- (bool)scanUpToString:(id)arg1 intoString:(id*)arg2;
- (void)setCaseSensitive:(bool)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setScanLocation:(unsigned long long)arg1;
- (id)string;
- (bool)tsu_scanCGFloat:(double*)arg1;

@end

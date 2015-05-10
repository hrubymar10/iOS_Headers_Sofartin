/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@interface MecabraCandidate : NSObject <NSCopying> {
    void *_rawCandidate;
}

@property(assign,readonly) NSString * analysisString;
@property(assign,readonly) NSString * convertedAnalysisString;
@property(assign,readonly) NSString * dictionaryReading;
@property(assign,readonly) bool isAutocorrectedCandidate;
@property(assign,readonly) bool isConversionCandidate;
@property(assign,readonly) bool isEmojiCandidate;
@property(assign,readonly) bool isExtensionCandidate;
@property(assign,readonly) bool isFuzzyMatchCandidate;
@property(assign,readonly) bool isLearningDictionaryCandidate;
@property(assign,readonly) bool isPersonName;
@property(assign,readonly) bool isPredictionCandidate;
@property(assign,readonly) bool isUserWordCandidate;
@property(assign,readonly) struct MecabraCandidateBase { int (**x1)(); long long x2; }* rawCandidate;
@property(assign,readonly) struct ConversionCandidate { int (**x1)(); long long x2; }* rawConversionCandidate;
@property(assign,readonly) NSString * surface;
@property(assign,readonly) int type;
@property(assign,readonly) unsigned long long wordCount;

+ (id)createSyntheticCandidate:(id)arg1 withLexicon:(void*)arg2 language:(int)arg3;

- (id)analysisString;
- (id)convertedAnalysisString;
- (id)convertedAnalysisStringForFirstSyllable;
- (struct __CFArray { }*)copySyllableLengthArrayForWordAtIndex:(unsigned long long)arg1;
- (struct __CFArray { }*)copySyllableLengthArrayInAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInConvertedAnalysisString;
- (struct __CFArray { }*)copySyllableLengthArrayInDictionaryReading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryReading;
- (id)initWithCandidate:(struct MecabraCandidateBase { int (**x1)(); long long x2; }*)arg1;
- (bool)isAutocorrectedCandidate;
- (bool)isConversionCandidate;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isFuzzyMatchCandidate;
- (bool)isLearningDictionaryCandidate;
- (bool)isPersonName;
- (bool)isPredictionCandidate;
- (bool)isUserWordCandidate;
- (unsigned short)kind;
- (unsigned short)lastPrefixValue;
- (unsigned short)lcAttrAtIndex:(unsigned long long)arg1;
- (unsigned short)matchType;
- (unsigned short)matchedLengthType;
- (long long)phraseBoundaryAfterWordAtIndex:(long long)arg1;
- (struct MecabraCandidateBase { int (**x1)(); long long x2; }*)rawCandidate;
- (struct ConversionCandidate { int (**x1)(); long long x2; }*)rawConversionCandidate;
- (unsigned short)rcAttrAtIndex:(unsigned long long)arg1;
- (void)setWeight:(unsigned long long)arg1;
- (id)surface;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)syllablesInString:(id)arg1 syllableLengths:(id)arg2;
- (unsigned long long)trieValueAtIndex:(unsigned long long)arg1;
- (int)type;
- (long long)weight;
- (unsigned long long)wordCount;
- (id)wordIDs;
- (bool)wordIsFromSystemDictionaryAtIndex:(unsigned long long)arg1;
- (unsigned short)wordLengthAtIndex:(unsigned long long)arg1;
- (struct { long long x1; long long x2; })wordRangeAtIndex:(long long)arg1;
- (unsigned short)wordReadingLengthAtIndex:(unsigned long long)arg1;
- (id)wordReadings;
- (id)words;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolOwner : NSObject <PASerializable> {
    NSString *_binaryVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleShortVersion;
    NSString *_bundleVersion;
    NSString *_name;
    NSArray *_oldSymbols;
    NSString *_path;
    NSMutableArray *_symbols;
    PASymbol *_testSymbol;
    unsigned long long _textSegmentLength;
    NSUUID *_uuid;
}

@property (readonly) NSString *binaryVersion;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *bundleVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (retain) NSString *path;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textSegmentLength;
@property (readonly) NSUUID *uuid;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (id)_initWithSerializedSymbolOwner:(const struct { unsigned long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; unsigned long long x10; }*)arg1;
- (unsigned long long)_insertionIndexInSymbols:(id)arg1 forSymbolWithOffsetIntoSymbolOwner:(unsigned long long)arg2;
- (id)_symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1 inSymbols:(id)arg2;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)addSymbol:(id)arg1;
- (id)binaryVersion;
- (id)bundleIdentifier;
- (id)bundleShortVersion;
- (id)bundleVersion;
- (long long)compareInfoRichnessToSymbolOwner:(id)arg1;
- (bool)containsSymbol:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)gatherBundleInfo;
- (void)incorporateDataFromCSSymbolOwner:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 andPath:(id)arg2;
- (void)incorporateDataFromPACSSymbolOwner:(id)arg1;
- (id)initWithCSSymbolOwnerRef:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithCSSymbolOwnerRef:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 andPath:(id)arg2;
- (id)initWithPACSSymbolOwner:(id)arg1;
- (id)initWithUUID:(id)arg1 andPath:(id)arg2;
- (id)name;
- (id)oldSymbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (id)path;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setPath:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (unsigned long long)textSegmentLength;
- (id)uuid;

@end

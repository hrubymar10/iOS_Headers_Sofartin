/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolHandle : NSObject <PASerializable> {
    PASymbolOwner *_owner;
    PASymbol *_symbol;
    unsigned long long _symbolOwnerStartAddressInTask;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool hasSymbol;
@property(assign,readonly) bool hasSymbolOwner;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readonly) unsigned long long symbolLength;
@property(assign,readonly) NSString * symbolName;
@property(assign,readonly) NSString * symbolOwnerBinaryVersion;
@property(assign,readonly) NSString * symbolOwnerBundleIdentifier;
@property(assign,readonly) NSString * symbolOwnerBundleShortVersion;
@property(assign,readonly) NSString * symbolOwnerBundleVersion;
@property(assign,readonly) NSString * symbolOwnerName;
@property(assign,retain) NSString * symbolOwnerPath;
@property(assign,readonly) unsigned long long symbolOwnerStartAddressInTask;
@property(assign,readonly) unsigned long long symbolOwnerTextSegmentLength;
@property(assign,readonly) NSUUID * symbolOwnerUUID;
@property(assign,readonly) unsigned long long symbolStartAddressInTask;

+ (id)classDictionaryKey;
+ (id)getEmptySymbolHandle;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (id)_initAsEmptyHandle;
- (id)_sourceInformationForAddress:(unsigned long long)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (bool)addToPersistentCache;
- (long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionForAddress:(unsigned long long)arg1;
- (bool)hasSourceInformationForAddress:(unsigned long long)arg1;
- (bool)hasSymbol;
- (bool)hasSymbolOwner;
- (id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setSymbolOwnerPath:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned int)sourceColumnNumberForAddress:(unsigned long long)arg1;
- (id)sourceFileNameForAddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForAddress:(unsigned long long)arg1;
- (unsigned long long)symbolLength;
- (id)symbolName;
- (id)symbolOwnerBinaryVersion;
- (id)symbolOwnerBundleIdentifier;
- (id)symbolOwnerBundleShortVersion;
- (id)symbolOwnerBundleVersion;
- (id)symbolOwnerName;
- (id)symbolOwnerPath;
- (unsigned long long)symbolOwnerStartAddressInTask;
- (unsigned long long)symbolOwnerTextSegmentLength;
- (id)symbolOwnerUUID;
- (unsigned long long)symbolStartAddressInTask;

@end

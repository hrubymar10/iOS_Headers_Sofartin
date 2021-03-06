/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUObjectIdentifier : NSObject {
    VMUClassInfoMap *_cfTypeIDtoClassInfo;
    unsigned long long _coreFoundationCFTypeIsa;
    unsigned long long _foundationCFTypeIsa;
    VMUClassInfoMap *_isaToClassInfo;
    NSMapTable *_isaToObjectLabelHandlerMap;
    id _isaTranslator;
    NSMapTable *_itemCountToLabelStringUniquingMap;
    id _memoryReader;
    unsigned long long *_nonPointerIndexMapping;
    NSHashTable *_objcRuntimeMallocBlocksHash;
    void *_remoteObjectBuffer;
    unsigned long long _remoteObjectBufferSize;
    struct VMULabelUniquingDataForStringType { id x1; id x2; } *_stringToLabelStringUniquingData;
    NSMutableSet *_stringUniquingSet;
    unsigned long long _swiftClassCount;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    } _symbolicator;
    VMUNonOverlappingRangeArray *_targetProcessVMranges;
    unsigned int _task;
    VMUClassInfoMap *_unrealizedClassInfos;
}

- (unsigned long long)CFTypeCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)SwiftClassCount;
- (id)_faultClass:(unsigned long long)arg1 ofType:(int)arg2;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)classInfoForCFType:(struct __CFRuntimeBase { unsigned long long x1; unsigned char x2[4]; unsigned int x3; }*)arg1;
- (id)classInfoForIsaPointer:(unsigned long long)arg1;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForNonobjectMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForObject:(unsigned long long)arg1;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)enumerateAllClassInfosWithBlock:(id)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(id)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 usingHandlerBlock:(id)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 usingHandlerBlock:(id)arg3;
- (id)labelForNSArray:(id)arg1;
- (id)labelForNSCFDictionary:(id)arg1;
- (id)labelForNSCFSet:(id)arg1;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(bool)arg2;
- (id)labelForNSConcreteAttributedString:(id)arg1;
- (id)labelForNSConcreteData:(id)arg1;
- (id)labelForNSConcreteHashTable:(id)arg1;
- (id)labelForNSConcreteMutableData:(id)arg1;
- (id)labelForNSData:(id)arg1;
- (id)labelForNSDate:(id)arg1;
- (id)labelForNSDictionary:(id)arg1;
- (id)labelForNSInlineData:(id)arg1;
- (id)labelForNSNumber:(id)arg1;
- (id)labelForNSPathStore2:(id)arg1;
- (id)labelForNSSet:(id)arg1;
- (id)labelForNSString:(id)arg1;
- (id)labelForNSString:(id)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(bool)arg4;
- (id)labelForNSURL:(id)arg1;
- (id)nullClassInfo;
- (id)objcRuntimeMallocBlocksHash;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (id)osMajorMinorVersionString;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(bool)arg3;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;

@end

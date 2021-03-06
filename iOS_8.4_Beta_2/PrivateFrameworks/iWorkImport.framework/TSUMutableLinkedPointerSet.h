/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {
    struct __CFDictionary { } *mDictionary;
    TSULinkedPointerSetEntry *mHead;
    TSULinkedPointerSetEntry *mTail;
}

- (void)addObject:(id)arg1;
- (id)array;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeToOwnedReferenceMessage:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (void)encodeToReferenceMessage:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (id)firstObject;
- (bool)hasObjects;
- (id)init;
- (void)insertFirstObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectEnumerator;
- (id)objectEnumeratorAfterObject:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)reverseObjectEnumerator;

@end

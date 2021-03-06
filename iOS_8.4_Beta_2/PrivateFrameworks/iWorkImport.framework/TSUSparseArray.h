/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUSparseArray : NSObject <NSCopying> {
    unsigned int _depth;
    unsigned long long _nonNilCount;
    struct tsuSaPage { int (**x1)(); } *_topPage;
}

@property(assign,readonly) unsigned long long count;

- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)foreach:(id)arg1;
- (bool)hasObjectForKey:(unsigned long long)arg1;
- (void)increaseDepth;
- (unsigned long long)maxIndexForCurrentDepth;
- (id)objectForKey:(unsigned long long)arg1;
- (void)removeObjectForKey:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;

@end

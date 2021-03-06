/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageStoreObjectCache : NSObject {
    struct __CFDictionary { } *_cache;
    long long _capacity;
    id _comparator;
    id _keyGenerator;
    NSLock *_lock;
}

@property(assign,copy) id comparator;
@property(assign,copy) id keyGenerator;

- (void)_nts_evictObject;
- (void)_nts_setObject:(id)arg1 forKey:(id)arg2;
- (id)addObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;
- (id)comparator;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)keyGenerator;
- (id)objectForMessage:(id)arg1 kind:(long long)arg2;
- (void)setComparator:(id)arg1;
- (void)setKeyGenerator:(id)arg1;
- (void)setObject:(id)arg1 forMessage:(id)arg2 kind:(long long)arg3;

@end

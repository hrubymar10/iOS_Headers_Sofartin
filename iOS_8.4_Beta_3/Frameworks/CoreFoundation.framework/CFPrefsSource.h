/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject {
    struct __CFDictionary { } *_dict;
    unsigned int _generationCount;
    unsigned int _isSearchList;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } *_lock;
    union { 
        struct _CFPrefsShmemEntry { 
            unsigned int generation : 31; 
            unsigned int multiprocess : 1; 
        } entry; 
        int value; 
    } lastKnownShmemState;
    union { struct _CFPrefsShmemEntry { unsigned int x_1_1_1 : 31; unsigned int x_1_1_2 : 1; } x1; int x2; } *shmemEntry;
}

+ (void)withNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1 perform:(id)arg2;
+ (void)withSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4 perform:(id)arg5;

- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long long)alreadylocked_generationCount;
- (void)alreadylocked_removeAllValues;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const void**)arg2 count:(long long)arg3;
- (void)clearCache;
- (struct __CFString { }*)container;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(bool)arg1;
- (void)dealloc;
- (struct __CFString { }*)domainIdentifier;
- (void)finalize;
- (long long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)init;
- (bool)isByHost;
- (void)lock;
- (bool)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (void)removeAllValues;
- (void)setAccessRestricted:(bool)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setValues:(const void**)arg1 forKeys:(const void**)arg2 count:(long long)arg3;
- (bool)synchronize;
- (void)unlock;
- (struct __CFString { }*)userIdentifier;

@end

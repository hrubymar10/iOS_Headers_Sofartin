/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource {
    struct __CFString { } *_identifier;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } *_searchListLock;
    struct __CFArray { } *_sourceList;
    bool initialized;
}

+ (void)withSearchListForIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2 perform:(id)arg3;
+ (void)withSnapshotSearchList:(id)arg1;
+ (void)withSuiteSearchListForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 locked:(bool)arg3 perform:(id)arg4;

- (void)addCompatibilitySource;
- (void)addManagedSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1;
- (void)addSource:(id)arg1;
- (void)addSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4;
- (void)addSuiteSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (bool)alreadylocked_requestNewData;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(bool)arg1;
- (void)dealloc;
- (struct __CFString { }*)domainIdentifier;
- (void)finalize;
- (void)freeze;
- (long long)generationCount;
- (long long)generationCountFromListOfSources:(id*)arg1 count:(long long)arg2;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(bool*)arg5;
- (id)initWithIdentifier:(struct __CFString { }*)arg1;
- (void)lock;
- (void)removeSource:(id)arg1;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (bool)synchronize;
- (void)unlock;

@end

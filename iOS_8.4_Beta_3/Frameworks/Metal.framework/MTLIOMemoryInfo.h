/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOMemoryInfo : NSObject {
    NSObject<OS_xpc_object> *ak_memlist_connection;
    /* Warning: unhandled array encoding: '[2@?]' */ id ak_memlist_data_sources;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } ak_memlist_mutex;
    int ak_memlist_notify_token;
    struct MemInfoResourceListEntry { struct MemInfoResourceListEntry {} *x1; struct MemInfoResourceListEntry {} *x2; id x3; unsigned long long x4; } *fResourceListHead;
    void *memlist_key;
}

+ (void)addResourceToList:(id)arg1;
+ (void)initialize;
+ (void)removeResourceFromList:(id)arg1;
+ (void)shutdown;

- (void*)addDataSource:(id)arg1;
- (struct __CFArray { }*)annotationList;
- (void)dealloc;
- (id)init;
- (void)launchMemlistConnection;
- (void)removeDataSource:(void*)arg1;

@end

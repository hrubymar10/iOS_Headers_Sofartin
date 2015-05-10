/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
 */

@interface SBManagerClientCache : NSObject {
    bool _behaviorBundleSupport;
    bool _behaviorBundleSupportKnown;
    NSLock *_cacheLock;
    NSMutableDictionary *_keyValueCache;
    struct dispatch_queue_s { } *_queue;
    struct map<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } fCallbacks;
}

@property(assign,readwrite) bool behaviorBundleSupport;
@property(assign,readwrite) bool behaviorBundleSupportKnown;
@property(assign,readwrite) NSLock * cacheLock;
@property(assign,readwrite) NSMutableDictionary * keyValueCache;
@property(assign,readwrite) struct dispatch_queue_s { }* queue;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)behaviorBundleSupport;
- (bool)behaviorBundleSupportKnown;
- (id)cacheLock;
- (void)cacheValue:(id)arg1 forKey:(id)arg2;
- (void)callCallbacksForEvent:(id)arg1;
- (id)copyCachedValueFor:(id)arg1;
- (bool)deregisterCallbackForEvent:(struct EventCallbackData { struct dispatch_queue_s {} *x1; id x2; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x3; }*)arg1;
- (id)init;
- (id)keyValueCache;
- (struct dispatch_queue_s { }*)queue;
- (void)registerCallbackForEvent:(id)arg1 with:(struct EventCallbackData { struct dispatch_queue_s {} *x1; id x2; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x3; }*)arg2;
- (void)resetKeyValueCache;
- (void)saveBehaviorBundleSupport:(bool)arg1 withValue:(bool)arg2;
- (void)setBehaviorBundleSupport:(bool)arg1;
- (void)setBehaviorBundleSupportKnown:(bool)arg1;
- (void)setCacheLock:(id)arg1;
- (void)setKeyValueCache:(id)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;

@end
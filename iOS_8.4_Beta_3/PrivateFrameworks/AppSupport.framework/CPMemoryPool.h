/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPMemoryPool : NSObject {
    NSMutableArray *_files;
    char *_label;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    unsigned long long _slotLength;
}

@property (nonatomic, readonly) unsigned long long slotLength;

- (void)dealloc;
- (id)initWithLabel:(const char *)arg1 slotLength:(unsigned long long)arg2;
- (id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)slotLength;

@end

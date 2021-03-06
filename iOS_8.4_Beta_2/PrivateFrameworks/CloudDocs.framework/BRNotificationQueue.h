/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    unsigned long long _dequeued;
    NSMutableDictionary *_index;
}

@property(assign,readonly) unsigned long long count;

- (void)_filterIndex:(id)arg1;
- (void)addDequeueCallback:(id)arg1;
- (void)addNotification:(id)arg1 asDead:(bool)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)dequeue:(unsigned long long)arg1 block:(id)arg2;
- (id)description;
- (id)init;
- (void)processDequeueCallbacks;
- (void)removeAllObjects;

@end

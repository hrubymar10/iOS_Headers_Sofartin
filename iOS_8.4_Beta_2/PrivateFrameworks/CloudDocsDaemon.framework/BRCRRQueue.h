/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRRQueue : NSEnumerator {
    NSMutableArray *_array;
    NSMapTable *_objects;
    unsigned long long _pos;
}

@property(assign,readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)nextObject;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;

@end

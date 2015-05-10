/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLStorageCache : NSObject {
    NSMutableDictionary *_lastEntryCache;
}

@property(assign,retain) NSMutableDictionary * lastEntryCache;

- (void).cxx_destruct;
- (void)clearLastEntryCache:(id)arg1;
- (id)lastEntryCache;
- (id)readLastEntryCache:(id)arg1 withID:(id)arg2;
- (void)setLastEntryCache:(id)arg1;
- (bool)shouldCache:(id)arg1;
- (void)updateLastEntryCache:(id)arg1 wasUpdate:(bool)arg2;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartRepAnimationDictionary : NSObject {
    TSURetainedPointerKeyDictionary *mEntries;
}

+ (id)dictionary;

- (void)addAnimation:(id)arg1 animationInfo:(id)arg2 forLayer:(id)arg3;
- (void)addEntriesFromAnimationDictionary:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 interpolations:(id)arg4;
- (id)animationDictionaryForBuildEngine;
- (void)dealloc;
- (id)entryForLayer:(id)arg1;
- (id)init;
- (id)nonretainedValueForObject:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderCacheObject : NSObject {
    bool mCachingEnabled;
    NSMutableArray *mChildCacheObjects;
    NSMutableArray *mDynamicResources;
}

@property(assign,readwrite) bool cachingEnabled;

+ (id)cacheObject;

- (void)allocateDynamicResourcesIntoArray:(id)arg1;
- (bool)cachingEnabled;
- (id)childCacheObjectAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)flushCache;
- (id)init;
- (int)p_resourceUpdateFlag;
- (void)p_updateResourceUpdateFlags:(int)arg1;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (id)resourceAtIndex:(unsigned long long)arg1 created:(bool*)arg2 ifAbsent:(id)arg3;
- (unsigned long long)resourceCount;
- (void)setCachingEnabled:(bool)arg1;

@end

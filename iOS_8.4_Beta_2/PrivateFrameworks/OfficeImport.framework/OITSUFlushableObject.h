/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUFlushableObject : NSObject <TSUFlushable> {
    OITSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
    int _ownerCount;
    int _retainCount;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (void)flush;
- (bool)hasFlushableContent;
- (id)init;
- (id)ownerAutoreleasedAccess;
- (void)ownerDidAccess;
- (void)ownerRelease;
- (id)ownerRetain;
- (void)ownerWillAccess;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)unload;

@end

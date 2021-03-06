/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcList : NSObject {
    NSMapTable *allProcs;
    bool appsOnly;
    NSMapTable *filteredProcs;
    bool ownedOnly;
    NSLock *procLock;
}

- (void)_populateFromSystem;
- (void)addProcInfo:(id)arg1;
- (id)allNames;
- (id)allPIDs;
- (id)allPathNames;
- (id)allProcInfos;
- (bool)appsOnly;
- (unsigned long long)count;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)newestProcInfo;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2;
- (id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3;
- (id)newestProcInfoWithName:(id)arg1;
- (bool)ownedOnly:(bool)arg1;
- (id)procInfoWithPID:(int)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)setAppsOnly:(bool)arg1;
- (void)setOwnedOnly:(bool)arg1;
- (void)setProcInfos:(id)arg1;
- (bool)update;
- (bool)updateFromSystem;

@end

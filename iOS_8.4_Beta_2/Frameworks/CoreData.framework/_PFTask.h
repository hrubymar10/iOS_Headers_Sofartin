/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFTask : NSObject {
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    } condition;
    int isFinishedFlag;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } lock;
}

+ (int)getNumActiveProcessors;
+ (unsigned long long)getPhysicalMemory;
+ (double)getProcessorSpeed;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (void)finalize;
- (id)initWithFunction:(int (*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

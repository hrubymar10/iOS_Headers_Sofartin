/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUQuickTestMeasurement : NSObject {
    TSMTraceBuffer *mBuffer;
    NSDictionary *mPrevious;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)displayTime:(unsigned long long)arg1 forClassAndMethodName:(id)arg2;
- (id)getPreviousTimeForKey:(id)arg1;
- (id)p_niceString:(unsigned long long)arg1 withPrefix:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setup;
- (void)teardown;

@end

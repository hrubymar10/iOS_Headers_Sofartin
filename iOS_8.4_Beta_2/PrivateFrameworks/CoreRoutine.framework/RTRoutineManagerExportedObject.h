/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {
    RTRoutineManager *_routineManager;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) RTRoutineManager * routineManager;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRoutineManager:(id)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)routineManager;
- (void)setRoutineManager:(id)arg1;

@end

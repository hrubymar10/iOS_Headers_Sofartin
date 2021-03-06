/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol> {
    RTRoutineManager *_routineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) RTRoutineManager *routineManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRoutineManager:(id)arg1;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)routineManager;
- (void)setRoutineManager:(id)arg1;

@end

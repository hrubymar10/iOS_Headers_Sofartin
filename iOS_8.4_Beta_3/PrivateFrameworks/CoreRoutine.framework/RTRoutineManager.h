/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManager : NSObject <RTFrameworkProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    id _visitHandler;
    NSXPCConnection *_xpcConnection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;
@property(assign,readonly) Class superclass;
@property(assign,copy) id visitHandler;
@property(assign,retain) NSXPCConnection * xpcConnection;

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)arg1;
+ (id)routineModeToString:(long long)arg1;

- (void).cxx_destruct;
- (void)clearRoutine;
- (void)createConnection;
- (void)dealloc;
- (void)fetchAllLocationsOfInterestWithHandler:(id)arg1;
- (void)fetchBBPluginSupportedWithHandler:(id)arg1;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withHandler:(id)arg2;
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withHandler:(id)arg3;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withHandler:(id)arg4;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id)arg1;
- (void)fetchPathToDiagnosticFilesWithHandler:(id)arg1;
- (void)fetchPredictedConditionsForAction:(id)arg1 withHandler:(id)arg2;
- (void)fetchPredictedLocationsOfInterestFromStartingLocationOfInterest:(id)arg1 withHandler:(id)arg2;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withHandler:(id)arg2;
- (void)fetchRoutineEnabledWithHandler:(id)arg1;
- (void)fetchRoutineModeFromLocation:(id)arg1 withHandler:(id)arg2;
- (void)handleDaemonStart;
- (id)init;
- (void)onVisit:(id)arg1 withError:(id)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setRoutineEnabled:(bool)arg1;
- (void)setVisitHandler:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startMonitoringVisitsWithHandler:(id)arg1;
- (void)stopMonitoringVisits;
- (id)visitHandler;
- (id)xpcConnection;

@end
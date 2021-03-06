/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PowerlogCore : NSObject {
    PLCoreAccountingGroup *_accountingGroups;
    PLCoreAgent *_agents;
    NSObject<OS_dispatch_source> *_fVMPressureSource;
    PLCoreRail *_rails;
    PLCoreService *_services;
    PLCoreStorage *_storage;
}

@property(assign,readonly) PLCoreAccountingGroup * accountingGroups;
@property(assign,readonly) PLCoreAgent * agents;
@property(assign,readonly) PLCoreRail * rails;
@property(assign,readonly) PLCoreService * services;
@property(assign,readonly) PLCoreStorage * storage;

+ (bool)allowRun;
+ (bool)isDebugEnabled;
+ (id)sharedCore;

- (void).cxx_destruct;
- (id)accountingGroups;
- (id)agents;
- (void)dealloc;
- (void)didRecieveMemoryPressureWarning;
- (id)init;
- (id)rails;
- (id)services;
- (void)startCore;
- (void)stopCore;
- (id)storage;

@end

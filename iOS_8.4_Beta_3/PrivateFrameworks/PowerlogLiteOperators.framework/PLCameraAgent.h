/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLCameraAgent : PLAgent {
    PLCFNotificationOperatorComposition *_backCameraPowerNotification;
    PLCFNotificationOperatorComposition *_cameraTorchNotification;
    PLCFNotificationOperatorComposition *_frontCameraPowerNotification;
    NSDictionary *_torchPowerModel;
}

@property (readonly) PLCFNotificationOperatorComposition *backCameraPowerNotification;
@property (readonly) PLCFNotificationOperatorComposition *cameraTorchNotification;
@property (readonly) PLCFNotificationOperatorComposition *frontCameraPowerNotification;
@property (readonly) NSDictionary *torchPowerModel;

+ (id)accountingGroupDefinitions;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)backCameraPowerNotification;
- (id)cameraTorchNotification;
- (id)frontCameraPowerNotification;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)modelTorchPower:(id)arg1;
- (double)torchLevelToTorchPower:(double)arg1;
- (id)torchPowerModel;

@end

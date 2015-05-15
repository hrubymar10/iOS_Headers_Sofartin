/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAccessibilityAgent : PLAgent {
    PLCFNotificationOperatorComposition *_notificationBackgroundContrastChanged;
    PLCFNotificationOperatorComposition *_notificationReduceMotionChanged;
}

@property(assign,readonly) PLCFNotificationOperatorComposition * notificationBackgroundContrastChanged;
@property(assign,readonly) PLCFNotificationOperatorComposition * notificationReduceMotionChanged;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (void)logEventForwardBackgroundContrast;
- (void)logEventForwardReduceMotion;
- (id)notificationBackgroundContrastChanged;
- (id)notificationReduceMotionChanged;

@end

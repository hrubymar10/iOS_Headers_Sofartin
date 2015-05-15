/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPreferences : NSObject {
    CalPreferences *_preferences;
}

@property(assign,readwrite) bool enableTravelAdvisoriesForAutomaticBehavior;
@property(assign,readwrite) double travelEngineThrottlePeriod;

+ (id)shared;

- (bool)enableTravelAdvisoriesForAutomaticBehavior;
- (id)init;
- (void)setEnableTravelAdvisoriesForAutomaticBehavior:(bool)arg1;
- (void)setTravelEngineThrottlePeriod:(double)arg1;
- (double)travelEngineThrottlePeriod;

@end
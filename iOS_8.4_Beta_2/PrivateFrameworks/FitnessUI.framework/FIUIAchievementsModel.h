/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIAchievementsModel : NSObject {
    NSArray *_achievements;
    NSObject<OS_dispatch_queue> *_achievementsLock;
    <FIUIAchievementsModelDelegate> *_delegate;
    HKExtendedHealthStore *_extendedHealthStore;
    bool _loadingAchievements;
}

@property(assign,readwrite) <FIUIAchievementsModelDelegate> * delegate;

- (void).cxx_destruct;
- (id)achievements;
- (id)delegate;
- (void)fetchAchievementsOnDay:(id)arg1 inCalendar:(id)arg2 completion:(id)arg3;
- (id)init;
- (void)setDelegate:(id)arg1;

@end

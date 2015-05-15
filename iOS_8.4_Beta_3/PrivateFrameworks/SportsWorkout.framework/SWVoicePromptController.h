/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWVoicePromptController : NSObject {
    NSString *_gender;
    NSString *_language;
    NikePromptExpander *_promptExpanderForEnglish;
    NikePromptExpander *_promptExpanderForGivenLanguage;
    NSDecimalNumberHandler *_roundToTwoDigitsPastTheDecimal;
    NSDecimalNumberHandler *_roundToZeroDigitsPastTheDecimal;
    WordsSpeaker *_speaker;
}

@property (nonatomic, retain) NSString *gender;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, retain) NSString *language;

+ (id)__sharedFemalePromptController;
+ (id)__sharedMalePromptController;
+ (id)_currentGenderIdentifier;
+ (id)_currentLanguageIdentifier;
+ (id)sharedPromptController;

- (bool)_fireOneLinerPromptUsingRandomGenderWithString:(id)arg1;
- (bool)_fireOneLinerPromptWithString:(id)arg1;
- (void)_firePacePromptWithAmount:(id)arg1 units:(id)arg2 isAveragePace:(bool)arg3;
- (void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 pronounceUnits:(bool)arg4 words:(id*)arg5 englishWords:(id*)arg6;
- (void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 words:(id*)arg4 englishWords:(id*)arg5;
- (void)_fireStandaloneNumberPrompt:(id)arg1;
- (id)_initWithLanguage:(id)arg1 gender:(id)arg2;
- (void)_printVoicePrompt:(id)arg1;
- (id)_promptExpenderUnitsForWorkoutControllerUnits:(id)arg1;
- (id)_roundedAmount:(id)arg1 forUnits:(id)arg2;
- (void)_setUpWithSettings;
- (void)dealloc;
- (void)fireAmountBeyondGoalPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireAmountCompletedPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireAmountPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireAmountRemainingPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4;
- (void)fireAveragePacePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireBeginningWorkoutPrompt;
- (void)fireCaloriesBeyondGoalPromptWithCaloriesBurnedBeyondGoal:(id)arg1;
- (void)fireCaloriesBurnedPromptWithAmount:(id)arg1;
- (void)fireCaloriesContextPromptWithCaloriesBurned:(id)arg1;
- (void)fireCaloriesRemainingPromptWithCaloriesRemaining:(id)arg1;
- (void)fireCurrentPacePromptWithAmount:(id)arg1 units:(id)arg2;
- (void)fireDistanceBeyondGoalPromptWithDistanceRanBeyondGoal:(id)arg1 units:(id)arg2;
- (void)fireDistanceContextPromptWithDistanceRan:(id)arg1 units:(id)arg2;
- (void)fireDistanceRemainingPromptWithDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)fireFastest10KWorkoutPrompt;
- (void)fireFastest5KWorkoutPrompt;
- (void)fireFastestHalfMarathonWorkoutPrompt;
- (void)fireFastestMarathonWorkoutPrompt;
- (void)fireFastestMilePrompt;
- (void)fireFinalRushPromptWithCaloriesRemaining:(id)arg1;
- (void)fireFinalRushPromptWithDistanceRemaining:(id)arg1 units:(id)arg2;
- (void)fireFinalRushPromptWithTimeRemaining:(id)arg1;
- (void)fireGoalCompletedPromptWithCaloriesGoal:(id)arg1;
- (void)fireGoalCompletedPromptWithDistanceGoal:(id)arg1 units:(id)arg2;
- (void)fireGoalCompletedPromptWithTimeGoal:(id)arg1;
- (void)fireHalfwayPointPrompt;
- (void)fireHit250MilesMorePrompt;
- (void)fireHit250MilesPrompt;
- (void)fireHit500KMorePrompt;
- (void)fireHit500KPrompt;
- (void)fireLongestWorkoutDistancePrompt;
- (void)fireMostCaloriesBurnedPrompt;
- (void)firePausingWorkoutPrompt;
- (void)fireResumingWorkoutPrompt;
- (void)fireTimeBeyondGoalPromptWithElapsedTimeBeyondGoal:(id)arg1;
- (void)fireTimeContextPromptWithElapsedTime:(id)arg1;
- (void)fireTimePromptWithAmount:(id)arg1;
- (void)fireTimeRemainingPromptWithTimeRemaining:(id)arg1;
- (void)fireWalkAroundToActivateSensorPrompt;
- (void)fireWorkoutCompletedPrompt;
- (void)fireWorkoutDistancePromptWithAmount:(id)arg1 units:(id)arg2;
- (id)gender;
- (id)init;
- (bool)isPlaying;
- (id)language;
- (void)refreshSettings;
- (void)setGender:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)stopAllPrompts;

@end

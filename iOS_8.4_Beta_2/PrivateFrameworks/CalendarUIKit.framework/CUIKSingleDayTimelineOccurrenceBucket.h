/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    CUIKSingleDayTimelineLayoutPartition *_correspondingPartition;
    NSMutableArray *_currentOccurrences;
    bool _ignoreFirstOccurrenceInFitnessCalculations;
    bool _ignoreLastOccurrenceInFitnessCalculations;
    bool _isOnlyBucket;
    double _originalFitnessLevel;
    bool _originalFitnessLevelRequiresCalculation;
    <CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
    double _temporaryFitnessLevel;
    bool _temporaryFitnessLevelRequiresCalculation;
    <CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtBeginning;
    <CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtEnd;
    bool _useTemporaryFitnessLevel;
}

@property(assign,retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;
@property(assign,retain) NSMutableArray * currentOccurrences;
@property(assign,readwrite) bool isOnlyBucket;
@property(assign,readonly) NSArray * occurrences;

- (void).cxx_destruct;
- (id)_occurrencesForFitnessLevel;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (id)correspondingPartition;
- (id)currentOccurrences;
- (id)earliestOccurrence;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;
- (bool)isOnlyBucket;
- (void)makeTemporaryChangesPermanent;
- (id)occurrences;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)removeOccurrenceAtEndTemporarily;
- (void)revertTemporaryChanges;
- (void)setCorrespondingPartition:(id)arg1;
- (void)setCurrentOccurrences:(id)arg1;
- (void)setIsOnlyBucket:(bool)arg1;
- (void)stampFramesOntoOccurrences;

@end

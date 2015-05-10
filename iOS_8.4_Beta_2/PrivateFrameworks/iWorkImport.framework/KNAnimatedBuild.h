/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedBuild : NSObject {
    bool _animateAtEndOfPreviousBuild;
    KNBuildAttributes *_attributes;
    bool _automatic;
    int _buildType;
    unsigned long long _deliveryOption;
    unsigned long long _deliveryStyle;
    unsigned long long _direction;
    double _duration;
    double _endTime;
    double _eventEndTime;
    long long _eventIndex;
    double _eventStartTime;
    NSDictionary *_finalAttributes;
    bool _isMovieStartBuild;
    bool _isVisibleAtBeginning;
    bool _isVisibleAtEnd;
    Class _pluginClass;
    NSDictionary *_previousAttributes;
    long long _stageIndex;
    double _startTime;
}

@property(assign,readwrite) bool animateAtEndOfPreviousBuild;
@property(assign,readonly) KNBuildAttributes * attributes;
@property(assign,readonly) bool automatic;
@property(assign,readonly) int buildType;
@property(assign,readonly) unsigned long long deliveryOption;
@property(assign,readonly) unsigned long long deliveryStyle;
@property(assign,readonly) unsigned long long direction;
@property(assign,readwrite) double duration;
@property(assign,readonly) double endTime;
@property(assign,readonly) double eventEndTime;
@property(assign,readwrite) long long eventIndex;
@property(assign,readonly) double eventStartTime;
@property(assign,copy) NSDictionary * finalAttributes;
@property(assign,readonly) bool isActionBuild;
@property(assign,readonly) bool isBuildIn;
@property(assign,readonly) bool isBuildOut;
@property(assign,readonly) bool isDriftBuild;
@property(assign,readonly) bool isEmphasisBuild;
@property(assign,readonly) bool isMagicChartBuild;
@property(assign,readwrite) bool isMovieStartBuild;
@property(assign,readwrite) bool isVisibleAtBeginning;
@property(assign,readwrite) bool isVisibleAtEnd;
@property(assign,readonly) Class pluginClass;
@property(assign,copy) NSDictionary * previousAttributes;
@property(assign,readonly) long long stageIndex;
@property(assign,readonly) double startTime;

- (bool)animateAtEndOfPreviousBuild;
- (id)attributes;
- (bool)automatic;
- (int)buildType;
- (void)dealloc;
- (unsigned long long)deliveryOption;
- (unsigned long long)deliveryStyle;
- (id)description;
- (unsigned long long)direction;
- (double)duration;
- (double)endTime;
- (double)eventEndTime;
- (long long)eventIndex;
- (double)eventStartTime;
- (id)finalAttributes;
- (id)initWithBuildType:(int)arg1 attributes:(id)arg2 pluginClass:(Class)arg3 deliveryStyle:(unsigned long long)arg4 eventIndex:(long long)arg5 stageIndex:(long long)arg6 startTime:(double)arg7 eventStartTime:(double)arg8 duration:(double)arg9 direction:(unsigned long long)arg10 automatic:(bool)arg11 animateAtEndOfPreviousBuild:(bool)arg12;
- (bool)isActionBuild;
- (bool)isBuildIn;
- (bool)isBuildOut;
- (bool)isDriftBuild;
- (bool)isEmphasisBuild;
- (bool)isMagicChartBuild;
- (bool)isMovieStartBuild;
- (bool)isVisibleAtBeginning;
- (bool)isVisibleAtEnd;
- (Class)pluginClass;
- (id)previousAttributes;
- (void)setAnimateAtEndOfPreviousBuild:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEventIndex:(long long)arg1;
- (void)setFinalAttributes:(id)arg1;
- (void)setIsMovieStartBuild:(bool)arg1;
- (void)setIsVisibleAtBeginning:(bool)arg1;
- (void)setIsVisibleAtEnd:(bool)arg1;
- (void)setPreviousAttributes:(id)arg1;
- (long long)stageIndex;
- (double)startTime;

@end

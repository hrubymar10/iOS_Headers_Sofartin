/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedSettings : PUSettings {
    bool _allowsInfiniteScrolling;
    double _fastScrollPreheatingWindowSize;
    long long _feedContent;
    bool _forceAllItemsAsVideo;
    bool _forceDefaultPreheatManager;
    bool _ignoresCaptions;
    long long _infiniteScrollingWindowSizeIncrement;
    long long _initialWindowSize;
    long long _maximumScrollRegimeForQualityImageFormats;
    double _mediumScrollPreheatingWindowSize;
    double _preheatingMinimumScrollFactor;
    bool _shouldPreheatAssets;
    bool _shouldPreheatComments;
    bool _shouldPreheatCoreData;
    bool _shouldUseJPEGFastFormatForLargeTiles;
    bool _shouldUseJPEGFastFormatForMediumTiles;
    bool _simulateSharedStreamsEnabled;
    double _slowScrollPreheatingWindowSize;
    double _smallTileSizeTolerance;
    double _speedometerFastLowerThreshold;
    double _speedometerFastUpperThreshold;
    double _speedometerMediumLowerThreshold;
    double _speedometerMediumUpperThreshold;
    long long _testInitialWindowSize;
    bool _useJPEGImageFormats;
    bool _useQualityImageFormats;
    bool _useSpeedometerFeedback;
}

@property(assign,readwrite) bool allowsInfiniteScrolling;
@property(assign,readwrite) double fastScrollPreheatingWindowSize;
@property(assign,readwrite) long long feedContent;
@property(assign,readwrite) bool forceAllItemsAsVideo;
@property(assign,readwrite) bool forceDefaultPreheatManager;
@property(assign,readwrite) bool ignoresCaptions;
@property(assign,readwrite) long long infiniteScrollingWindowSizeIncrement;
@property(assign,readwrite) long long initialWindowSize;
@property(assign,readwrite) long long maximumScrollRegimeForQualityImageFormats;
@property(assign,readwrite) double mediumScrollPreheatingWindowSize;
@property(assign,readwrite) double preheatingMinimumScrollFactor;
@property(assign,readwrite) bool shouldPreheatAssets;
@property(assign,readwrite) bool shouldPreheatComments;
@property(assign,readwrite) bool shouldPreheatCoreData;
@property(assign,readwrite) bool shouldUseJPEGFastFormatForLargeTiles;
@property(assign,readwrite) bool shouldUseJPEGFastFormatForMediumTiles;
@property(assign,readwrite) bool simulateSharedStreamsEnabled;
@property(assign,readwrite) double slowScrollPreheatingWindowSize;
@property(assign,readwrite) double smallTileSizeTolerance;
@property(assign,readwrite) double speedometerFastLowerThreshold;
@property(assign,readwrite) double speedometerFastUpperThreshold;
@property(assign,readwrite) double speedometerMediumLowerThreshold;
@property(assign,readwrite) double speedometerMediumUpperThreshold;
@property(assign,readwrite) long long testInitialWindowSize;
@property(assign,readwrite) bool useJPEGImageFormats;
@property(assign,readwrite) bool useQualityImageFormats;
@property(assign,readwrite) bool useSpeedometerFeedback;

+ (id)_localizedStrings;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowsInfiniteScrolling;
- (double)fastScrollPreheatingWindowSize;
- (long long)feedContent;
- (bool)forceAllItemsAsVideo;
- (bool)forceDefaultPreheatManager;
- (bool)ignoresCaptions;
- (long long)infiniteScrollingWindowSizeIncrement;
- (long long)initialWindowSize;
- (long long)maximumScrollRegimeForQualityImageFormats;
- (double)mediumScrollPreheatingWindowSize;
- (double)preheatingMinimumScrollFactor;
- (void)setAllowsInfiniteScrolling:(bool)arg1;
- (void)setDefaultValues;
- (void)setFastScrollPreheatingWindowSize:(double)arg1;
- (void)setFeedContent:(long long)arg1;
- (void)setForceAllItemsAsVideo:(bool)arg1;
- (void)setForceDefaultPreheatManager:(bool)arg1;
- (void)setIgnoresCaptions:(bool)arg1;
- (void)setInfiniteScrollingWindowSizeIncrement:(long long)arg1;
- (void)setInitialWindowSize:(long long)arg1;
- (void)setMaximumScrollRegimeForQualityImageFormats:(long long)arg1;
- (void)setMediumScrollPreheatingWindowSize:(double)arg1;
- (void)setPreheatingMinimumScrollFactor:(double)arg1;
- (void)setShouldPreheatAssets:(bool)arg1;
- (void)setShouldPreheatComments:(bool)arg1;
- (void)setShouldPreheatCoreData:(bool)arg1;
- (void)setShouldUseJPEGFastFormatForLargeTiles:(bool)arg1;
- (void)setShouldUseJPEGFastFormatForMediumTiles:(bool)arg1;
- (void)setSimulateSharedStreamsEnabled:(bool)arg1;
- (void)setSlowScrollPreheatingWindowSize:(double)arg1;
- (void)setSmallTileSizeTolerance:(double)arg1;
- (void)setSpeedometerFastLowerThreshold:(double)arg1;
- (void)setSpeedometerFastUpperThreshold:(double)arg1;
- (void)setSpeedometerMediumLowerThreshold:(double)arg1;
- (void)setSpeedometerMediumUpperThreshold:(double)arg1;
- (void)setTestInitialWindowSize:(long long)arg1;
- (void)setUseJPEGImageFormats:(bool)arg1;
- (void)setUseQualityImageFormats:(bool)arg1;
- (void)setUseSpeedometerFeedback:(bool)arg1;
- (bool)shouldPreheatAssets;
- (bool)shouldPreheatComments;
- (bool)shouldPreheatCoreData;
- (bool)shouldUseJPEGFastFormatForLargeTiles;
- (bool)shouldUseJPEGFastFormatForMediumTiles;
- (bool)simulateSharedStreamsEnabled;
- (double)slowScrollPreheatingWindowSize;
- (double)smallTileSizeTolerance;
- (double)speedometerFastLowerThreshold;
- (double)speedometerFastUpperThreshold;
- (double)speedometerMediumLowerThreshold;
- (double)speedometerMediumUpperThreshold;
- (long long)testInitialWindowSize;
- (bool)useJPEGImageFormats;
- (bool)useQualityImageFormats;
- (bool)useSpeedometerFeedback;

@end

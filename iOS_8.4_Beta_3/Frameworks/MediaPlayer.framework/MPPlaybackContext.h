/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackContext : NSObject {
    unsigned long long _repeatType;
    bool _shouldRestartPlayback;
    bool _shouldStartPlayback;
    unsigned long long _shuffleType;
    long long _startIndex;
}

@property (setter=mpuReporting_setFeatureName:, nonatomic, copy) NSString *mpuReporting_featureName;
@property (setter=mpuReporting_setRecommendationData:, nonatomic, copy) NSData *mpuReporting_recommendationData;
@property (nonatomic) unsigned long long repeatType;
@property (nonatomic) bool shouldRestartPlayback;
@property (nonatomic) bool shouldStartPlayback;
@property (nonatomic) unsigned long long shuffleType;
@property (nonatomic) long long startIndex;

+ (Class)queueFeederClass;

- (id)init;
- (id)mpuReporting_featureName;
- (id)mpuReporting_recommendationData;
- (void)mpuReporting_setFeatureName:(id)arg1;
- (void)mpuReporting_setRecommendationData:(id)arg1;
- (unsigned long long)repeatType;
- (void)setRepeatType:(unsigned long long)arg1;
- (void)setShouldRestartPlayback:(bool)arg1;
- (void)setShouldStartPlayback:(bool)arg1;
- (void)setShuffleType:(unsigned long long)arg1;
- (void)setStartIndex:(long long)arg1;
- (bool)shouldRestartPlayback;
- (bool)shouldStartPlayback;
- (unsigned long long)shuffleType;
- (long long)startIndex;

@end

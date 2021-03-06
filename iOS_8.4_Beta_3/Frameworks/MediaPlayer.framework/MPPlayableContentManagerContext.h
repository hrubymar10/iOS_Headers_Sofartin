/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentManagerContext : NSObject {
    bool _contentLimitsEnabled;
    bool _endpointAvailable;
    long long _enforcedContentItemsCount;
    long long _enforcedContentTreeDepth;
}

@property (nonatomic) bool contentLimitsEnabled;
@property (nonatomic) bool endpointAvailable;
@property (nonatomic) long long enforcedContentItemsCount;
@property (nonatomic) long long enforcedContentTreeDepth;

- (bool)contentLimitsEnabled;
- (bool)endpointAvailable;
- (long long)enforcedContentItemsCount;
- (long long)enforcedContentTreeDepth;
- (void)setContentLimitsEnabled:(bool)arg1;
- (void)setEndpointAvailable:(bool)arg1;
- (void)setEnforcedContentItemsCount:(long long)arg1;
- (void)setEnforcedContentTreeDepth:(long long)arg1;

@end

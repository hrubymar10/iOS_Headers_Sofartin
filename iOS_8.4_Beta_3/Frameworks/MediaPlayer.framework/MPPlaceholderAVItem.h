/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaceholderAVItem : MPAVItem <RURadioItemIdentifier> {
    NSString *_album;
    NSString *_artist;
    double _durationFromExternalMetadata;
    bool _explicitTrack;
    NSString *_mainTitle;
}

@property (nonatomic, retain) NSString *album;
@property (nonatomic, retain) NSString *artist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double durationFromExternalMetadata;
@property (getter=isExplicitTrack, nonatomic) bool explicitTrack;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *mainTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (double)durationFromExternalMetadata;
- (bool)isExplicitTrack;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (bool)mpuReporting_isValidReportingItem;
- (id)radioIdentifier;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDurationFromExternalMetadata:(double)arg1;
- (void)setExplicitTrack:(bool)arg1;
- (void)setMainTitle:(id)arg1;
- (bool)supportsSettingCurrentTime;
- (bool)supportsSkip;

@end

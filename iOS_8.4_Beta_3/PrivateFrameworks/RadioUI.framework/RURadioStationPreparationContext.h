/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioStationPreparationContext : NSObject {
    RadioGetTracksResponse *_getTracksResponse;
    NSMapTable *_preparedAdSlotByRadioTrack;
    RadioStation *_station;
}

@property (nonatomic, readonly, copy) NSArray *allPreparedAdSlotRadioTracks;
@property (nonatomic, readonly) bool shouldIncrementSkipCount;
@property (nonatomic, readonly) NSDate *skipDate;
@property (nonatomic, readonly) RadioStation *station;
@property (nonatomic, readonly, copy) NSArray *tracks;

- (void).cxx_destruct;
- (void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (id)allPreparedAdSlotRadioTracks;
- (id)initWithGetTracksResponse:(id)arg1 station:(id)arg2;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
- (bool)shouldIncrementSkipCount;
- (id)skipDate;
- (id)station;
- (id)tracks;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTracksResponse : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDate *_expirationDate;
    NSDictionary *_responseDictionary;
    RadioStation *_station;
    NSMutableDictionary *_tracksByStationKey;
}

@property(assign,copy) NSDictionary * dialogDictionary;
@property(assign,retain) NSDate * expirationDate;
@property(assign,readonly) unsigned long long globalVersion;
@property(assign,copy) NSDictionary * responseDictionary;
@property(assign,readonly) bool shouldIncrementSkipCount;
@property(assign,readonly) NSDate * skipDate;
@property(assign,retain) RadioStation * station;
@property(assign,readonly) long long tracklistActionType;
@property(assign,copy) NSArray * unusedKBSyncStrings;

- (void).cxx_destruct;
- (id)_tracksForStationKey:(id)arg1;
- (id)dialogDictionary;
- (id)expirationDate;
- (unsigned long long)globalVersion;
- (id)init;
- (id)initWithResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (void)setExpirationDate:(id)arg1;
- (void)setStation:(id)arg1;
- (bool)shouldIncrementSkipCount;
- (id)skipDate;
- (id)station;
- (long long)tracklistActionType;
- (id)tracksForStation:(id)arg1;
- (id)tracksForStationHash:(id)arg1;
- (id)tracksForStationID:(long long)arg1;
- (id)tracksForStationStringID:(id)arg1;
- (id)unusedKBSyncStrings;

@end

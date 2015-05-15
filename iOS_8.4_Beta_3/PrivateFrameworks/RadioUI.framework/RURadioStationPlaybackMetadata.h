/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    RadioArtworkCollection *_artworkCollection;
    bool _hasSetArtworkCollection;
    bool _hasSetStationHash;
    bool _hasSetStationID;
    bool _hasSetStationName;
    bool _hasSetStationStringID;
    bool _hasValidRadioStation;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
}

@property (nonatomic, readonly) RadioArtworkCollection *artworkCollection;
@property (nonatomic, readonly) RadioStation *station;
@property (nonatomic, readonly, copy) NSDictionary *stationDictionary;
@property (nonatomic, readonly, copy) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (nonatomic, readonly, copy) NSString *stationName;
@property (nonatomic, readonly, copy) NSString *stationStringID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (id)_station;
- (id)artworkCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStation:(id)arg1;
- (id)initWithStationStringID:(id)arg1;
- (bool)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)station;
- (id)stationDictionary;
- (id)stationHash;
- (long long)stationID;
- (id)stationName;
- (id)stationStringID;

@end

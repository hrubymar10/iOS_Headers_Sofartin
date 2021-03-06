/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEvent : NSObject <NSCopying, NSMutableCopying> {
    NSDate *_datePlayed;
    long long _endReason;
    double _endTimeInTrack;
    NSString *_externalIdentifier;
    double _startTimeInTrack;
    long long _storeID;
    NSData *_timedMetadata;
    NSDictionary *_trackInfo;
    long long _type;
}

@property (nonatomic, readonly) NSDate *datePlayed;
@property (nonatomic, readonly) long long endReason;
@property (nonatomic, readonly) double endTimeInTrack;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (nonatomic, readonly) double startTimeInTrack;
@property (nonatomic, readonly) long long storeID;
@property (nonatomic, readonly, copy) NSData *timedMetadata;
@property (nonatomic, readonly, copy) NSDictionary *trackInfo;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datePlayed;
- (id)description;
- (long long)endReason;
- (double)endTimeInTrack;
- (id)externalIdentifier;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playDictionary;
- (double)startTimeInTrack;
- (long long)storeID;
- (id)timedMetadata;
- (id)trackInfo;
- (long long)type;

@end

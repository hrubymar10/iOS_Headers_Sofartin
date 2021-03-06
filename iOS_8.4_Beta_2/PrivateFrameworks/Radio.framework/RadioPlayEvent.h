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

@property(assign,readonly) NSDate * datePlayed;
@property(assign,readonly) long long endReason;
@property(assign,readonly) double endTimeInTrack;
@property(assign,copy) NSString * externalIdentifier;
@property(assign,readonly) double startTimeInTrack;
@property(assign,readonly) long long storeID;
@property(assign,copy) NSData * timedMetadata;
@property(assign,copy) NSDictionary * trackInfo;
@property(assign,readonly) long long type;

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

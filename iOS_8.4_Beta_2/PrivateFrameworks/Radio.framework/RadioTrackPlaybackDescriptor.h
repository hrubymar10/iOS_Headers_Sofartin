/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    bool _current;
    NSDate *_expirationDate;
    double _pauseTime;
    NSDate *_skipDate;
    long long _storeID;
    NSDictionary *_trackInfo;
}

@property(getter=isCurrent,assign,readonly) bool current;
@property(assign,readonly) NSDate * expirationDate;
@property(assign,readonly) double pauseTime;
@property(assign,readonly) NSDate * skipDate;
@property(assign,readonly) long long storeID;
@property(assign,copy) NSDictionary * trackInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (bool)isCurrent;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)pauseTime;
- (id)queueTrackDictionary;
- (id)skipDate;
- (long long)storeID;
- (id)trackInfo;

@end
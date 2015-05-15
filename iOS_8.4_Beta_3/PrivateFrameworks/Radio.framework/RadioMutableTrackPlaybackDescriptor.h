/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor

@property(getter=isCurrent,assign,readwrite) bool current;
@property(assign,retain) NSDate * expirationDate;
@property(assign,readwrite) double pauseTime;
@property(assign,retain) NSDate * skipDate;
@property(assign,readwrite) long long storeID;
@property(assign,copy) NSDictionary * trackInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCurrent:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setPauseTime:(double)arg1;
- (void)setSkipDate:(id)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setTrackInfo:(id)arg1;

@end
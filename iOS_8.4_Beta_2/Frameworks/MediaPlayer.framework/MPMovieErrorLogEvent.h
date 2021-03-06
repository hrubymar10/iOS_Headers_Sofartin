/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEvent *_event;
}

@property(assign,readonly) NSString * URI;
@property(assign,readonly) NSDate * date;
@property(assign,readonly) NSString * errorComment;
@property(assign,readonly) NSString * errorDomain;
@property(assign,readonly) long long errorStatusCode;
@property(assign,readonly) NSString * playbackSessionID;
@property(assign,readonly) NSString * serverAddress;

- (void).cxx_destruct;
- (id)URI;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;

@end

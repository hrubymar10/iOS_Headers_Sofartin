/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(assign,readonly) NSString * URI;
@property(assign,readonly) long long downloadOverdue;
@property(assign,readonly) double durationWatched;
@property(assign,readonly) double indicatedBitrate;
@property(assign,readonly) long long mediaRequestsWWAN;
@property(assign,readonly) long long numberOfBytesTransferred;
@property(assign,readonly) long long numberOfDroppedVideoFrames;
@property(assign,readonly) long long numberOfMediaRequests;
@property(assign,readonly) long long numberOfSegmentsDownloaded;
@property(assign,readonly) long long numberOfServerAddressChanges;
@property(assign,readonly) long long numberOfStalls;
@property(assign,readonly) double observedBitrate;
@property(assign,readonly) double observedBitrateStandardDeviation;
@property(assign,readonly) double observedMaxBitrate;
@property(assign,readonly) double observedMinBitrate;
@property(assign,readonly) NSString * playbackSessionID;
@property(assign,readonly) NSDate * playbackStartDate;
@property(assign,readonly) double playbackStartOffset;
@property(assign,readonly) NSString * playbackType;
@property(assign,readonly) double segmentsDownloadedDuration;
@property(assign,readonly) NSString * serverAddress;
@property(assign,readonly) double startupTime;
@property(assign,readonly) double switchBitrate;
@property(assign,readonly) double transferDuration;

- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentObservedBitrate;
- (void)dealloc;
- (long long)downloadOverdue;
- (double)durationWatched;
- (long long)entryReasonCode;
- (void)finalize;
- (double)indicatedBitrate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)mediaRequestsWWAN;
- (long long)numberOfBytesTransferred;
- (long long)numberOfDroppedVideoFrames;
- (long long)numberOfMediaRequests;
- (long long)numberOfSegmentsDownloaded;
- (long long)numberOfServerAddressChanges;
- (long long)numberOfStalls;
- (double)observedBitrate;
- (double)observedBitrateStandardDeviation;
- (double)observedMaxBitrate;
- (double)observedMinBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (id)playbackType;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;
- (id)serviceIdentifier;
- (double)startupTime;
- (double)switchBitrate;
- (double)transferDuration;

@end
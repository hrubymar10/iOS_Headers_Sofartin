/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent {
    long long _insertionPosition;
    MPRemotePlaybackQueue *_playbackQueue;
}

@property(assign,readonly) long long insertionPosition;
@property(assign,readonly) MPRemotePlaybackQueue * playbackQueue;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (long long)insertionPosition;
- (id)playbackQueue;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property(assign,copy) NSString * applicationIdentifier;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SAMPMediaItem * listeningToItem;
@property(assign,retain) SANPCommandInfo * nowPlayingCommandInfo;
@property(assign,retain) SAMPNowPlayingQueuePosition * playbackQueuePosition;
@property(assign,copy) NSNumber * playbackRate;
@property(assign,copy) NSString * source;
@property(assign,readwrite) int state;
@property(assign,readonly) Class superclass;

+ (id)queueState;
+ (id)queueStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listeningToItem;
- (id)nowPlayingCommandInfo;
- (id)playbackQueuePosition;
- (id)playbackRate;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setListeningToItem:(id)arg1;
- (void)setNowPlayingCommandInfo:(id)arg1;
- (void)setPlaybackQueuePosition:(id)arg1;
- (void)setPlaybackRate:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setState:(int)arg1;
- (id)source;
- (int)state;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSPlaybackCoordinator : IKJSObject <MusicJSPlaybackCoordinator> {
    MusicAVPlayer *_player;
}

@property(assign,retain) MusicAVPlayer * player;

- (void).cxx_destruct;
- (void)_beginPlaybackWithStationDictionary:(id)arg1 completionHandler:(id)arg2;
- (void)_beginPlaybackWithStoreIDs:(id)arg1 completionHandler:(id)arg2;
- (void)beginPlayback:(id)arg1 :(id)arg2;
- (id)player;
- (void)setPlayer:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    unsigned long long _currentRepeatType;
}

@property(assign,readwrite) unsigned long long currentRepeatType;

- (id)_mediaRemoteCommandInfoOptions;
- (unsigned long long)currentRepeatType;
- (void)setCurrentRepeatType:(unsigned long long)arg1;

@end
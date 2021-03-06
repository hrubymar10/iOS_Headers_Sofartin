/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLITunesTone : NSObject {
    NSString *_artworkFile;
    unsigned long long _duration;
    NSString *_filePath;
    NSString *_identifier;
    NSString *_name;
    NSNumber *_pid;
    NSDictionary *_playbackProperties;
    bool _private;
    bool _protected;
    bool _purchased;
    bool _ringtone;
}

@property (nonatomic, copy) NSString *artworkFile;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *pid;
@property (nonatomic, copy) NSDictionary *playbackProperties;
@property (getter=isPrivate, nonatomic) bool private;
@property (getter=isProtected, nonatomic) bool protected;
@property (getter=isPurchased, nonatomic) bool purchased;
@property (getter=isRingtone, nonatomic) bool ringtone;

- (void)_setArtworkFile:(id)arg1;
- (void)_setDuration:(unsigned long long)arg1;
- (void)_setFilePath:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setPid:(id)arg1;
- (void)_setPlaybackProperties:(id)arg1;
- (void)_setPrivate:(bool)arg1;
- (void)_setProtected:(bool)arg1;
- (void)_setPurchased:(bool)arg1;
- (void)_setRingtone:(bool)arg1;
- (id)artworkFile;
- (void)dealloc;
- (unsigned long long)duration;
- (id)filePath;
- (id)identifier;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
- (bool)isPrivate;
- (bool)isProtected;
- (bool)isPurchased;
- (bool)isRingtone;
- (id)name;
- (id)pid;
- (id)playbackProperties;

@end

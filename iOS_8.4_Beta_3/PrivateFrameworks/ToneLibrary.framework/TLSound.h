/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLSound : NSObject {
    NSString *_filePath;
    bool _shouldDisposeOfSoundID;
    unsigned int _soundID;
}

@property (setter=_setShouldDisposeOfSoundID:, nonatomic) bool _shouldDisposeOfSoundID;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic) unsigned int soundID;

- (void)_setFilePath:(id)arg1;
- (void)_setShouldDisposeOfSoundID:(bool)arg1;
- (void)_setSoundID:(unsigned int)arg1;
- (bool)_shouldDisposeOfSoundID;
- (void)dealloc;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 soundID:(unsigned int)arg2;
- (unsigned int)soundID;

@end

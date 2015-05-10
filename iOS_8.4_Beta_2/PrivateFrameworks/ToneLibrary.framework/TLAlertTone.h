/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertTone : NSObject {
    TLSound *_actualSound;
    NSString *_filePath;
    TLSound *_previewSound;
}

@property(assign,retain) TLSound * actualSound;
@property(assign,copy) NSString * filePath;
@property(assign,retain) TLSound * previewSound;

- (void)_setActualSound:(id)arg1;
- (void)_setFilePath:(id)arg1;
- (void)_setPreviewSound:(id)arg1;
- (id)actualSound;
- (void)dealloc;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3;
- (id)previewSound;

@end

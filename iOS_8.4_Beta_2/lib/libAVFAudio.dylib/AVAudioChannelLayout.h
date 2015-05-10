/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioChannelLayout : NSObject {
    struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; } *_layout;
    unsigned int _layoutTag;
    void *_reserved;
}

@property(assign,readonly) unsigned int channelCount;
@property(assign,readonly) const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }* layout;
@property(assign,readonly) unsigned int layoutTag;

+ (unsigned long long)audioChannelLayoutSize:(id)arg1;
+ (id)layoutWithLayout:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
+ (id)layoutWithLayoutTag:(unsigned int)arg1;

- (unsigned int)channelCount;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithLayout:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
- (id)initWithLayoutTag:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)layout;
- (unsigned int)layoutTag;

@end

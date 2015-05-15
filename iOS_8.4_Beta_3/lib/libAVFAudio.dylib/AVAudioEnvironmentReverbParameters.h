/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEnvironmentReverbParameters : NSObject {
    void *_impl;
}

@property (nonatomic) bool enable;
@property (nonatomic, readonly) AVAudioUnitEQFilterParameters *filterParameters;
@property (nonatomic) float level;

- (void)dealloc;
- (bool)enable;
- (id)filterParameters;
- (id)init;
- (id)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x_5_1_1; unsigned long long x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x_3_2_1; } x_5_1_3; } x5; bool x6; struct AVAudioMixingImpl {} *x7; struct AudioComponentDescription { unsigned int x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct OpaqueAudioComponentInstance {} *x9; float x10; struct AVAudio3DPoint { float x_11_1_1; float x_11_1_2; float x_11_1_3; } x11; struct AVAudio3DVectorOrientation { struct AVAudio3DPoint { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_12_1_1; struct AVAudio3DPoint { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_12_1_2; } x12; struct AVAudio3DAngularOrientation { float x_13_1_1; float x_13_1_2; float x_13_1_3; } x13; struct map<AVAudio3DMixingImpl *, unsigned int, std::__1::less<AVAudio3DMixingImpl *>, std::__1::allocator<std::__1::pair<AVAudio3DMixingImpl *const, unsigned int> > > { struct __tree<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true>, std::__1::allocator<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int> > > { struct __tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<AVAudio3DMixingImpl *, std::__1::__value_type<AVAudio3DMixingImpl *, unsigned int>, std::__1::less<AVAudio3DMixingImpl *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_14_1_1; } x14; id x15; unsigned int x16; float x17; float x18; float x19; id x20; id x21; bool x22; float x23; float x24; float x25; float x26; }*)arg1;
- (float)level;
- (void)loadFactoryReverbPreset:(long long)arg1;
- (void)setEnable:(bool)arg1;
- (void)setLevel:(float)arg1;

@end

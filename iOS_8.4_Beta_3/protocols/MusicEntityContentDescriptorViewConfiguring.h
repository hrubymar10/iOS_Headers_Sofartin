/* Generated by RuntimeBrowser.
 */

@protocol MusicEntityContentDescriptorViewConfiguring <NSObject>

@required

+ (double)maximumHeightForContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 width:(double)arg2 traitCollection:(UITraitCollection *)arg3;

- (MusicEntityViewContentDescriptor *)contentDescriptor;
- (<MusicEntityValueProviding> *)entityValueProvider;
- (void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1;
- (void)setEntityValueProvider:(id <MusicEntityValueProviding>)arg1;

@optional

- (void)setEntityDisabled:(bool)arg1;

@end

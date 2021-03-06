/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectComponent : NSManagedObject

@property(assign,retain) TDEffectType * effectType;
@property(assign,readwrite) bool isEnabled;
@property(assign,retain) NSSet * parameters;
@property(assign,retain) TDEffectRenditionSpec * rendition;

- (void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned long long)arg2 withDocument:(id)arg3;
- (void)updatePresetParameters:(id)arg1 atIndex:(unsigned long long)arg2;

@end

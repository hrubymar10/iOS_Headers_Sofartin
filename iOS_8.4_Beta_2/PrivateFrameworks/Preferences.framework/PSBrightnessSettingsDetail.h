/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (bool)autoBrightnessEnabled;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(id)arg1 changedAction:(id)arg2;
+ (double)currentValue;
+ (bool)deviceSupportsAutoBrightness;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)endObservingExternalBrightnessChanges;
+ (id)iconImage;
+ (void)incrementBrightnessValue:(double)arg1;
+ (double)incrementedBrightnessValue:(double)arg1;
+ (id)preferencesURL;
+ (void)setAutoBrightnessEnabled:(bool)arg1;
+ (void)setValue:(double)arg1;

@end

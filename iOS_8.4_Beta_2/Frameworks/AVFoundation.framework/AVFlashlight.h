/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlight : NSObject {
    AVFlashlightInternal *_internal;
}

@property(getter=isAvailable,assign,readonly) bool available;
@property(assign,readonly) float flashlightLevel;
@property(getter=isOverheated,assign,readonly) bool overheated;

+ (id)alloc;
+ (bool)hasFlashlight;
+ (void)initialize;

- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_setupFlashlight;
- (void)_teardownFlashlight;
- (void)dealloc;
- (float)flashlightLevel;
- (id)init;
- (bool)isAvailable;
- (bool)isOverheated;
- (bool)setFlashlightLevel:(float)arg1 withError:(id*)arg2;
- (void)turnPowerOff;
- (bool)turnPowerOnWithError:(id*)arg1;

@end
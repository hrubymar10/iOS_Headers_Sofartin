/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBWallpaperImage : UIImage {
    NSData *_data;
    long long _variant;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long variant;

+ (struct CGImage { }*)_newBlackWallpaperImage;
+ (id)cachedWallpaperDataForVariant:(long long)arg1;
+ (void)preheatWallpaperDataForVariant:(long long)arg1;

- (id)data;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)variant;

@end

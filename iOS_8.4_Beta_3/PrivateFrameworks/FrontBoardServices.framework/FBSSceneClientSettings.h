/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_occlusions;
    BSSettings *_otherSettings;
    long long _preferredInterfaceOrientation;
    double _preferredLevel;
}

@property (nonatomic, readonly, copy) NSSet *occlusions;
@property (nonatomic, readonly) long long preferredInterfaceOrientation;
@property (nonatomic, readonly) double preferredLevel;

+ (bool)_isMutable;
+ (id)settings;

- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)occlusions;
- (id)otherSettings;
- (long long)preferredInterfaceOrientation;
- (double)preferredLevel;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end

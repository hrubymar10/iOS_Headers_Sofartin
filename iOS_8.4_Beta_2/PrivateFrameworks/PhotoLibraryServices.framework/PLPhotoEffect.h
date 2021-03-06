/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEffect : NSObject {
    NSString *_CIFilterName;
    NSString *_displayName;
    NSString *_filterIdentifier;
}

@property(assign,copy) NSString * CIFilterName;
@property(assign,copy) NSString * displayName;
@property(assign,copy) NSString * filterIdentifier;
@property(assign,readonly) long long latestVersion;

+ (id)_effectWithIdentifier:(id)arg1 CIFilterName:(id)arg2 displayName:(id)arg3;
+ (id)allEffects;
+ (id)effectWithCIFilterName:(id)arg1;
+ (id)effectWithIdentifier:(id)arg1;
+ (unsigned long long)indexOfEffectWithIdentifier:(id)arg1;

- (id)CIFilterName;
- (id)description;
- (id)displayName;
- (id)filterIdentifier;
- (long long)latestVersion;
- (id)newEffectFilter;

@end

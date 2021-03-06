/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditAdjustmentsVersion : NSObject {
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_platform;
}

@property(assign,readonly) unsigned long long majorVersion;
@property(assign,readonly) unsigned long long minorVersion;
@property(assign,copy) NSString * platform;
@property(assign,readonly) NSString * string;

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustmentVersion:(id)arg1;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (id)platform;
- (id)string;

@end

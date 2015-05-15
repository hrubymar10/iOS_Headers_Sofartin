/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBImage : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    NSString *_bundlePath;
    NSData *_data;
    NSString *_name;
    NSString *_path;
}

@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic, copy) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
@property (readonly) Class superclass;

+ (id)imageWithData:(id)arg1;
+ (id)imageWithName:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 path:(id)arg2 name:(id)arg3 bundlePath:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)path;
- (void)setBundlePath:(id)arg1;
- (void)setData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (id)uniqueIdentifier;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileInfo : NSObject <NSCoding, NSCopying> {
    NSDictionary *_extendedAttributes;
    bool _isDirectory;
    NSString *_path;
    long long _priority;
}

@property (nonatomic, copy) NSDictionary *extendedAttributes;
@property (nonatomic) bool isDirectory;
@property (nonatomic, copy) NSString *path;
@property (nonatomic) long long priority;

+ (id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 extendedAttributes:(id)arg2;
- (bool)isDirectory;
- (id)path;
- (long long)priority;
- (void)setExtendedAttributes:(id)arg1;
- (void)setIsDirectory:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setPriority:(long long)arg1;

@end

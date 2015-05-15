/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

@interface NSSUsageBundle : NSObject <NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSArray *_categories;
    NSString *_name;
    bool _purgeable;
    unsigned long long _totalSize;
}

@property(assign,retain) NSString * bundleIdentifier;
@property(assign,retain) NSArray * categories;
@property(assign,retain) NSString * name;
@property(getter=isPurgeable,assign,readwrite) bool purgeable;
@property(assign,readwrite) unsigned long long totalSize;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)categories;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPurgeable;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPurgeable:(bool)arg1;
- (void)setTotalSize:(unsigned long long)arg1;
- (unsigned long long)totalSize;

@end
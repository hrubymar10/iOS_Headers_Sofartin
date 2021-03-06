/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataService : NSObject <NSSecureCoding> {
    NSString *_localizedDescription;
    NSString *_name;
    NSString *_svcDescription;
    NSString *_type;
}

@property(assign,retain) NSString * localizedDescription;
@property(assign,retain) NSString * name;
@property(assign,retain) NSString * svcDescription;
@property(assign,retain) NSString * type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescription;
- (id)name;
- (void)setLocalizedDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSvcDescription:(id)arg1;
- (void)setType:(id)arg1;
- (id)svcDescription;
- (id)type;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_variants;
}

@property(assign,copy) NSSet * variants;

+ (bool)supportsSecureCoding;

- (id)_bestVariantForFormat:(long long)arg1;
- (id)_bestVariantForUIFormat:(int)arg1;
- (void)addVariant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variants;

@end

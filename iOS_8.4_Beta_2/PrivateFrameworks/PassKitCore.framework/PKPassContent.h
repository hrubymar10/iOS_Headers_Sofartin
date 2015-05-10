/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassContent : PKContent <NSSecureCoding> {
    NSArray *_backFieldBuckets;
    PKImage *_footerImage;
    NSArray *_frontFieldBuckets;
    NSString *_logoText;
    long long _transitType;
}

@property(assign,copy) NSArray * backFieldBuckets;
@property(assign,retain) PKImage * footerImage;
@property(assign,copy) NSArray * frontFieldBuckets;
@property(assign,copy) NSString * logoText;
@property(assign,readwrite) long long transitType;

+ (bool)supportsSecureCoding;

- (id)backFieldBuckets;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)footerImage;
- (id)frontFieldBuckets;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)logoText;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setTransitType:(long long)arg1;
- (long long)transitType;

@end

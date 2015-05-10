/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassDisplayProfile : PKDisplayProfile <NSCopying, NSSecureCoding> {
    PKColor *_backgroundColor;
    NSData *_backgroundHash;
    PKColor *_foregroundColor;
    NSData *_iconHash;
    PKColor *_labelColor;
    NSData *_logoHash;
    long long _passStyle;
    NSData *_paymentAssetsHash;
    PKColor *_stripColor;
    NSData *_stripHash;
    bool _tallCode;
    NSData *_thumbnailHash;
}

@property(assign,retain) PKColor * backgroundColor;
@property(assign,retain) NSData * backgroundHash;
@property(assign,retain) PKColor * foregroundColor;
@property(assign,retain) NSData * iconHash;
@property(assign,retain) PKColor * labelColor;
@property(assign,readonly) long long layoutMode;
@property(assign,retain) NSData * logoHash;
@property(assign,readwrite) long long passStyle;
@property(assign,retain) NSData * paymentAssetsHash;
@property(assign,readonly) bool showsBackgroundImage;
@property(assign,readonly) bool showsStripImage;
@property(assign,retain) PKColor * stripColor;
@property(assign,retain) NSData * stripHash;
@property(assign,readwrite) bool tallCode;
@property(assign,retain) NSData * thumbnailHash;

+ (bool)supportsSecureCoding;

- (id)backgroundColor;
- (id)backgroundHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)foregroundColor;
- (id)iconHash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)labelColor;
- (long long)layoutMode;
- (id)logoHash;
- (long long)passStyle;
- (id)paymentAssetsHash;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundHash:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setIconHash:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setLogoHash:(id)arg1;
- (void)setPassStyle:(long long)arg1;
- (void)setPaymentAssetsHash:(id)arg1;
- (void)setStripColor:(id)arg1;
- (void)setStripHash:(id)arg1;
- (void)setTallCode:(bool)arg1;
- (void)setThumbnailHash:(id)arg1;
- (bool)showsBackgroundImage;
- (bool)showsStripImage;
- (id)stripColor;
- (id)stripHash;
- (bool)tallCode;
- (id)thumbnailHash;
- (long long)type;

@end
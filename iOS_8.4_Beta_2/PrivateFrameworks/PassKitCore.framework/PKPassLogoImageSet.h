/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassLogoImageSet : PKPassImageSet {
    PKImage *_backgroundImage;
    PKImage *_bankLogoImage;
    PKImage *_cardBackgroundCombinedImage;
    PKImage *_cardBackgroundImage;
    PKImage *_cobrandLogoImage;
    PKImage *_footerImage;
    PKImage *_logoImage;
    PKImage *_networkLogoImage;
    PKImage *_stripImage;
}

@property(assign,retain) PKImage * backgroundImage;
@property(assign,retain) PKImage * bankLogoImage;
@property(assign,retain) PKImage * cardBackgroundCombinedImage;
@property(assign,retain) PKImage * cardBackgroundImage;
@property(assign,retain) PKImage * cobrandLogoImage;
@property(assign,retain) PKImage * footerImage;
@property(assign,retain) PKImage * logoImage;
@property(assign,retain) PKImage * networkLogoImage;
@property(assign,retain) PKImage * stripImage;

+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)supportsSecureCoding;

- (id)backgroundImage;
- (id)bankLogoImage;
- (id)cardBackgroundCombinedImage;
- (id)cardBackgroundImage;
- (id)cobrandLogoImage;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)footerImage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)loadPDFArtFromBundle:(id)arg1;
- (id)logoImage;
- (id)networkLogoImage;
- (void)preheatImages;
- (void)resizeWithScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBankLogoImage:(id)arg1;
- (void)setCardBackgroundCombinedImage:(id)arg1;
- (void)setCardBackgroundImage:(id)arg1;
- (void)setCobrandLogoImage:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setLogoImage:(id)arg1;
- (void)setNetworkLogoImage:(id)arg1;
- (void)setStripImage:(id)arg1;
- (id)stripImage;

@end
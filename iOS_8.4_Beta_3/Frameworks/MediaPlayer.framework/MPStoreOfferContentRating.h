/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferContentRating : NSObject <NSCoding> {
    NSDictionary *_dictionary;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    long long _ratingLevel;
    unsigned long long _ratingSystem;
}

@property(getter=isExplicitContent,assign,readonly) bool explicitContent;
@property(assign,readonly) id mediaPropertyContentRatingValue;
@property(assign,copy) NSString * ratingDescription;
@property(assign,copy) NSString * ratingLabel;
@property(assign,readwrite) long long ratingLevel;
@property(assign,readwrite) unsigned long long ratingSystem;
@property(getter=isRestrictedContent,assign,readonly) bool restrictedContent;
@property(getter=isRestrictedPurchase,assign,readonly) bool restrictedPurchase;

+ (unsigned long long)ratingSystemFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isRatingSystemForApps:(unsigned long long)arg1;
- (bool)_isRatingSystemForMovies:(unsigned long long)arg1;
- (bool)_isRatingSystemForMusic:(unsigned long long)arg1;
- (bool)_isRatingSystemForTV:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isExplicitContent;
- (bool)isRestrictedContent;
- (bool)isRestrictedPurchase;
- (id)mediaPropertyContentRatingValue;
- (id)ratingDescription;
- (id)ratingLabel;
- (long long)ratingLevel;
- (unsigned long long)ratingSystem;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingLevel:(long long)arg1;
- (void)setRatingSystem:(unsigned long long)arg1;
- (id)valueForProperty:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {
    NSDictionary *_lookupDictionary;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, readonly, copy) NSString *formattedPrice;
@property (nonatomic, readonly, copy) NSString *offerType;
@property (nonatomic, readonly, copy) NSNumber *price;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTextForType:(id)arg1;
- (id)assets;
- (id)buyParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedPrice;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)initWithLookupItemOffer:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offerType;
- (id)price;

@end

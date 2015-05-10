/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemOffer : NSObject <NSSecureCoding> {
    NSString *_buyParameters;
    NSString *_formattedPrice;
    NSString *_offerType;
    NSNumber *_price;
    NSDictionary *_typeToActionText;
}

@property(assign,readonly) NSString * buyParameters;
@property(assign,readonly) NSString * formattedPrice;
@property(assign,readonly) NSString * offerType;
@property(assign,readonly) NSNumber * price;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTextForType:(id)arg1;
- (id)buyParameters;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedPrice;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupItemOffer:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)offerType;
- (id)price;

@end

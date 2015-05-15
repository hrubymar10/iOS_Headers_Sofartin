/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEntityTag : NSObject <NSCopying> {
    bool _indexed;
    NSString *_name;
    bool _stored;
}

@property (nonatomic, readonly) bool indexed;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool stored;

+ (id)allDay;
+ (id)contactDetail:(id)arg1;
+ (id)containsEntityExtraction:(long long)arg1;
+ (id)defaultDuration;
+ (id)extraKey:(id)arg1;
+ (id)extractedBus;
+ (id)extractedCarRental;
+ (id)extractedEvent;
+ (id)extractedEventCancellation;
+ (id)extractedFlight;
+ (id)extractedFood;
+ (id)extractedFromTemplateWithShortName:(id)arg1;
+ (id)extractedHotel;
+ (id)extractedMovie;
+ (id)extractedSocial;
+ (id)extractedTicket;
+ (id)extractedTrain;
+ (id)fromExtractedDomain;
+ (id)fromForwardedMessage;
+ (id)fromReply;
+ (id)hardName;
+ (id)human;
+ (id)identity:(id)arg1;
+ (id)inhuman;
+ (void)initialize;
+ (id)messageWithMessageIdHash:(long long)arg1 fromSource:(id)arg2;
+ (id)remember:(id)arg1;
+ (void)rememberPrefix:(id)arg1 stored:(bool)arg2 indexed:(bool)arg3;
+ (id)resolveName:(id)arg1;
+ (id)tagForPrefix:(id)arg1 value:(id)arg2;
+ (id)testTag:(int)arg1;
+ (id)url:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)indexed;
- (id)initWithName:(id)arg1 stored:(bool)arg2 indexed:(bool)arg3;
- (bool)isContactDetail;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntityTag:(id)arg1;
- (bool)isExtraKey;
- (bool)isTemplateShortName;
- (bool)isUrl;
- (id)name;
- (bool)stored;
- (id)value;

@end

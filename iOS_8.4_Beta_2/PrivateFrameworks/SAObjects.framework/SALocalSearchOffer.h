/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchOffer : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * identifier;
@property(assign,retain) SAUIAppPunchOut * offerPunchOut;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;

+ (id)offer;
+ (id)offerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)offerPunchOut;
- (void)setIdentifier:(id)arg1;
- (void)setOfferPunchOut:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

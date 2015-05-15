/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property(assign,copy) NSString * addressLabel;
@property(assign,copy) NSURL * contactId;
@property(assign,copy) NSString * contactName;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSData * forwardGeoProtobuf;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)structuredDictationAddressResult;
+ (id)structuredDictationAddressResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)addressLabel;
- (id)contactId;
- (id)contactName;
- (id)encodedClassName;
- (id)forwardGeoProtobuf;
- (id)groupIdentifier;
- (void)setAddressLabel:(id)arg1;
- (void)setContactId:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setForwardGeoProtobuf:(id)arg1;

@end
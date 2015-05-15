/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASInterpretation : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * tokens;

+ (id)interpretation;
+ (id)interpretationWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_speechTokens;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTokens:(id)arg1;
- (id)tokens;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockAceClockWrap : SAClockObject <SASyncWrap>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSNumber * generation;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSURL * identifier;
@property(assign,readonly) Class superclass;

+ (id)aceClockWrap;
+ (id)aceClockWrapWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)generation;
- (id)groupIdentifier;
- (void)setGeneration:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
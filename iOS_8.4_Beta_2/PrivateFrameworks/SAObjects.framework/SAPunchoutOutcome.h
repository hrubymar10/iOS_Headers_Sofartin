/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPunchoutOutcome : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * originalCommandId;
@property(assign,copy) NSDictionary * outcomes;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)punchoutOutcome;
+ (id)punchoutOutcomeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (id)outcomes;
- (void)setOriginalCommandId:(id)arg1;
- (void)setOutcomes:(id)arg1;

@end

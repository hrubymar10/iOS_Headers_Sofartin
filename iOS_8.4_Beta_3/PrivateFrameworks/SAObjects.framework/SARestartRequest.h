/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARestartRequest : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * lastResponseId;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSString * requestId;
@property(assign,readonly) Class superclass;

+ (id)restartRequest;
+ (id)restartRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)lastResponseId;
- (id)requestId;
- (void)setLastResponseId:(id)arg1;
- (void)setRequestId:(id)arg1;

@end
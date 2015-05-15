/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSString * requestId;
@property(assign,copy) NSString * snippetId;
@property(assign,readonly) Class superclass;

+ (id)snippetInteraction;
+ (id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void)setSnippetId:(id)arg1;
- (id)snippetId;

@end

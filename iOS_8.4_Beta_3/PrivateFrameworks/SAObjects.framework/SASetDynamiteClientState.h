/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetDynamiteClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property(assign,copy) NSString * aceId;
@property(assign,retain) SADynamiteClientState * clientState;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)setDynamiteClientState;
+ (id)setDynamiteClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientState;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setClientState:(id)arg1;

@end
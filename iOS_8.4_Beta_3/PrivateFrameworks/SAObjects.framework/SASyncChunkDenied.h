/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * appId;
@property(assign,copy) NSArray * callbacks;
@property(assign,retain) SASyncAnchor * current;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) long long errorCode;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)chunkDenied;
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkDeniedWithErrorCode:(long long)arg1;

- (id)current;
- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)initWithErrorCode:(long long)arg1;
- (bool)requiresResponse;
- (void)setCurrent:(id)arg1;
- (void)setErrorCode:(long long)arg1;

@end

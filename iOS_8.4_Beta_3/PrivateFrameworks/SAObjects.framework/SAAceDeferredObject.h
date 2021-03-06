/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceDeferredObject : SABaseCommand <SAAceCommand, SAAceSerializable, SAClientBoundCommand, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SAAceSerializable> *value;

+ (id)aceDeferredObject;
+ (id)aceDeferredObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)callbacks;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)key;
- (bool)requiresResponse;
- (void)setAppId:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

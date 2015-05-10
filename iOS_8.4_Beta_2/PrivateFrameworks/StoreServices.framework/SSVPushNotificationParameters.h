/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPushNotificationParameters : NSObject <NSCopying, SSXPCCoding> {
    NSNumber *_accountIdentifier;
    NSString *_environmentName;
    NSMutableDictionary *_parameterDictionary;
    long long _requestType;
}

@property(assign,copy) NSNumber * accountIdentifier;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * environmentName;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * mediaKinds;
@property(assign,copy) NSString * notificationType;
@property(assign,copy) NSDictionary * putParameters;
@property(assign,readwrite) long long requestType;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyParametersDictionary;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)environmentName;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)mediaKinds;
- (id)notificationType;
- (id)putParameters;
- (long long)requestType;
- (void)setAccountIdentifier:(id)arg1;
- (void)setEnvironmentName:(id)arg1;
- (void)setMediaKinds:(id)arg1;
- (void)setNotificationType:(id)arg1;
- (void)setPutParameters:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (id)valueForParameter:(id)arg1;

@end

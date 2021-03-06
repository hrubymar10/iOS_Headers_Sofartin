/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticationResponse : NSObject {
    NSDictionary *_responseDictionary;
    long long _urlBagType;
    NSHTTPURLResponse *_urlResponse;
}

@property(assign,readwrite) long long URLBagType;
@property(assign,readonly) NSHTTPURLResponse * URLResponse;
@property(assign,readonly) long long accountKind;
@property(assign,readonly) NSString * accountName;
@property(assign,readonly) NSNumber * accountUniqueIdentifier;
@property(assign,readonly) long long availableServiceTypes;
@property(assign,readonly) NSString * creditsString;
@property(assign,readonly) long long enabledServiceTypes;
@property(assign,readonly) NSNumber * failureType;
@property(getter=isNewCustomer,assign,readonly) bool newCustomer;
@property(assign,readonly) NSDictionary * responseDictionary;
@property(assign,readonly) long long responseType;
@property(assign,readonly) NSString * storeFrontIdentifier;
@property(assign,readonly) NSString * token;
@property(assign,readonly) NSString * userMessage;

- (long long)URLBagType;
- (id)URLResponse;
- (long long)_responseTypeForErrorNumber:(long long)arg1;
- (long long)_responseTypeForFailureType:(long long)arg1;
- (long long)_responseTypeForStatusValue:(long long)arg1;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (long long)accountKind;
- (id)accountName;
- (id)accountUniqueIdentifier;
- (long long)availableServiceTypes;
- (id)creditsString;
- (void)dealloc;
- (long long)enabledServiceTypes;
- (id)failureType;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;
- (bool)isNewCustomer;
- (id)newAccount;
- (id)responseDictionary;
- (long long)responseType;
- (void)setURLBagType:(long long)arg1;
- (id)storeFrontIdentifier;
- (id)token;
- (id)userMessage;

@end

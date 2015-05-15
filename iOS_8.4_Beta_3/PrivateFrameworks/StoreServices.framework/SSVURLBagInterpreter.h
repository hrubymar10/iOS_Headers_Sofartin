/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVURLBagInterpreter : NSObject <NSCopying> {
    NSMutableDictionary *_cachedBagValues;
    SSVSAPSignaturePolicy *_subscriptionSignaturePolicy;
    NSArray *_subscriptionSignedActions;
}

@property (nonatomic, readonly, copy) NSArray *AMDDomains;
@property (nonatomic, readonly, copy) NSURL *mescalCertificateURL;
@property (nonatomic, readonly, copy) NSURL *mescalSetupURL;
@property (nonatomic, readonly, copy) NSDictionary *mescalSignedActions;
@property (nonatomic, readonly, copy) NSDictionary *mescalSignedRequests;
@property (nonatomic, readonly, copy) NSDictionary *mescalSignedResponses;
@property (nonatomic, readonly, copy) NSString *storeFrontSuffix;

- (void).cxx_destruct;
- (id)AMDDomains;
- (id)URLForURLBagKey:(id)arg1;
- (id)_valueForKey:(id)arg1 withClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)initWithURLBagDictionary:(id)arg1;
- (id)mescalCertificateURL;
- (id)mescalSetupURL;
- (id)mescalSignaturePolicyForRequestURL:(id)arg1;
- (id)mescalSignaturePolicyForResponseURL:(id)arg1;
- (id)mescalSignedActions;
- (id)mescalSignedRequests;
- (id)mescalSignedResponses;
- (bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;
- (id)storeFrontSuffix;
- (id)valueForURLBagKey:(id)arg1;

@end

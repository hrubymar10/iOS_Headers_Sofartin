/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
    NSDictionary *_errors;
    NSDictionary *_redeemedCodes;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSArray * failedCodes;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * redeemedCodes;
@property(assign,readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)dictionaryForCode:(id)arg1;
- (id)errorForCode:(id)arg1;
- (id)failedCodes;
- (id)initWithXPCEncoding:(id)arg1;
- (id)redeemedCodes;
- (void)setFailedCodes:(id)arg1;
- (void)setRedeemedCodes:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAvailabilityResponse : AAResponse {
    NSString *_eta;
    NSString *_feature;
    NSString *_status;
}

@property(assign,readonly) NSString * eta;
@property(assign,readonly) NSString * feature;
@property(assign,readonly) NSString * status;

- (void).cxx_destruct;
- (id)eta;
- (id)feature;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)status;

@end

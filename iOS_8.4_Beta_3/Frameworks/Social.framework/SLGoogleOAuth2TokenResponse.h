/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleOAuth2TokenResponse : NSObject {
    NSDictionary *_data;
    NSError *_error;
    NSString *_errorMessage;
    NSString *_refreshToken;
    long long _statusCode;
    NSString *_token;
}

@property(assign,readonly) NSDictionary * data;
@property(assign,readonly) NSError * error;
@property(assign,readonly) NSString * errorMessage;
@property(assign,readonly) NSString * refreshToken;
@property(assign,readonly) long long statusCode;
@property(assign,readonly) NSString * token;

- (void).cxx_destruct;
- (id)data;
- (id)error;
- (id)errorMessage;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (long long)statusCode;
- (id)token;

@end
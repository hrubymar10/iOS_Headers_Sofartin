/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {
    NSData *_bodyData;
    SSMetricsPageEvent *_metricsPageEvent;
    NSHTTPURLResponse *_urlResponse;
}

@property(assign,readonly) NSString * MIMEType;
@property(assign,readonly) NSURL * URL;
@property(assign,readonly) NSHTTPURLResponse * URLResponse;
@property(assign,readonly) NSData * bodyData;
@property(assign,readonly) NSData * databaseEncoding;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) long long expectedContentLength;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SSMetricsPageEvent * metricsPageEvent;
@property(assign,readonly) NSData * radio_decompressedBodyData;
@property(assign,readonly) bool ssv_isExpiredResponse;
@property(assign,readonly) NSString * suggestedFilename;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * textEncodingName;

- (id)MIMEType;
- (id)URL;
- (id)URLResponse;
- (id)allHeaderFields;
- (id)bodyData;
- (id)copyXPCEncoding;
- (id)databaseEncoding;
- (void)dealloc;
- (long long)expectedContentLength;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)initWithURLResponse:(id)arg1 bodyData:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)metricsPageEvent;
- (id)radio_decompressedBodyData;
- (void)setMetricsPageEvent:(id)arg1;
- (bool)ssv_isExpiredResponse;
- (long long)statusCode;
- (id)suggestedFilename;
- (id)textEncodingName;

@end
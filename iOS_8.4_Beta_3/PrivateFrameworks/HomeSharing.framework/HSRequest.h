/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSRequest : NSObject {
    bool _acceptsGzipEncoding;
    NSString *_action;
    NSDictionary *_arguments;
    NSData *_bodyData;
    bool _concurrent;
    bool _excludeSessionIDFromURL;
    long long _method;
    NSURL *_responseDataDestinationFileURL;
    bool _shouldPromptForAuthentication;
}

@property (nonatomic) bool acceptsGzipEncoding;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, copy) NSData *bodyData;
@property (getter=isConcurrent, nonatomic, readonly) bool concurrent;
@property (nonatomic) bool excludeSessionIDFromURL;
@property (nonatomic) long long method;
@property (nonatomic, copy) NSURL *responseDataDestinationFileURL;
@property (nonatomic) bool shouldPromptForAuthentication;
@property (nonatomic, readonly) double timeoutInterval;

+ (id)request;

- (void).cxx_destruct;
- (id)URLRequestForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (bool)acceptsGzipEncoding;
- (id)action;
- (id)bodyData;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)description;
- (bool)excludeSessionIDFromURL;
- (id)initWithAction:(id)arg1;
- (bool)isConcurrent;
- (long long)method;
- (id)requestURLForBaseURL:(id)arg1 sessionID:(unsigned int)arg2;
- (id)responseDataDestinationFileURL;
- (void)setAcceptsGzipEncoding:(bool)arg1;
- (void)setBodyData:(id)arg1;
- (void)setExcludeSessionIDFromURL:(bool)arg1;
- (void)setMethod:(long long)arg1;
- (void)setResponseDataDestinationFileURL:(id)arg1;
- (void)setShouldPromptForAuthentication:(bool)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (bool)shouldPromptForAuthentication;
- (double)timeoutInterval;

@end

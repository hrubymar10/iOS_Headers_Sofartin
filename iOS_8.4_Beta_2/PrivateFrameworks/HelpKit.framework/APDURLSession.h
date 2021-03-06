/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    id _completionHandler;
    NSMutableData *_data;
    NSURLSessionDataTask *_dataTask;
    long long _dataType;
    NSString *_lastModified;
    NSURLRequest *_request;
}

@property(assign,retain) id completionHandler;
@property(assign,retain) NSURLSessionDataTask * dataTask;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * lastModified;
@property(assign,retain) NSURLRequest * request;
@property(assign,readonly) NSURLSessionTask * sessionTask;
@property(assign,readonly) Class superclass;

+ (id)defaultOperationQueue;
+ (id)defaultURLSessionConfiguration;
+ (id)urlSessionWithRequest:(id)arg1 dataType:(long long)arg2 completionHandler:(id)arg3;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
- (id)completionHandler;
- (id)dataTask;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 dataType:(long long)arg2 completionHandler:(id)arg3;
- (id)lastModified;
- (void)notifyWithFormattedData:(id)arg1 response:(id)arg2 error:(id)arg3 cacheData:(bool)arg4;
- (id)request;
- (void)resume;
- (id)sessionTask;
- (void)setCompletionHandler:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setLastModified:(id)arg1;
- (void)setRequest:(id)arg1;

@end

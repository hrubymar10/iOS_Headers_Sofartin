/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSHTTPContext : NSObject <NSStreamDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate> {
    NSURLSessionDataTask *_dataTask;
    bool _didOpen;
    MMCSDuetReporter *_duetReporter;
    struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); void *x55; void *x56; struct mmcs_read_stream_pool {} *x57; struct __CFRunLoop {} *x58; struct __CFArray {} *x59; union { struct mmcs_cfnetwork_http_context {} *x_60_1_1; struct mmcs_nsurlsession_http_context {} *x_60_1_2; struct mmcs_curl_http_context {} *x_60_1_3; } x60; } *_hc;
    NSInputStream *_inputStream;
    bool _isHandlingError;
    bool _isTaskDone;
    bool _isValid;
    NSOperationQueue *_operationQueue;
    NSOutputStream *_outputStream;
    bool _requestIsStreamed;
    NSDictionary *_timingData;
    NSURLSession *_urlSession;
}

@property(assign,retain) NSURLSessionDataTask * dataTask;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didOpen;
@property(assign,retain) MMCSDuetReporter * duetReporter;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); void *x55; void *x56; struct mmcs_read_stream_pool {} *x57; struct __CFRunLoop {} *x58; struct __CFArray {} *x59; union { struct mmcs_cfnetwork_http_context {} *x_60_1_1; struct mmcs_nsurlsession_http_context {} *x_60_1_2; struct mmcs_curl_http_context {} *x_60_1_3; } x60; }* hc;
@property(assign,retain) NSInputStream * inputStream;
@property(assign,readwrite) bool isHandlingError;
@property(assign,readwrite) bool isTaskDone;
@property(assign,readwrite) bool isValid;
@property(assign,retain) NSOperationQueue * operationQueue;
@property(assign,retain) NSOutputStream * outputStream;
@property(assign,readwrite) bool requestIsStreamed;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSDictionary * timingData;
@property(assign,retain) NSURLSession * urlSession;

+ (id)sharedMMCSHTTPSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id)arg3;
- (void)cleanupRequest;
- (void)cleanupResponse;
- (long long)countOfRequestBodyBytesSent;
- (bool)createNewRequestBodyInputStream;
- (id)dataTask;
- (void)dealloc;
- (id)description;
- (bool)didOpen;
- (id)duetReporter;
- (struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); void *x55; void *x56; struct mmcs_read_stream_pool {} *x57; struct __CFRunLoop {} *x58; struct __CFArray {} *x59; union { struct mmcs_cfnetwork_http_context {} *x_60_1_1; struct mmcs_nsurlsession_http_context {} *x_60_1_2; struct mmcs_curl_http_context {} *x_60_1_3; } x60; }*)hc;
- (id)initWithContext:(struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); void *x55; void *x56; struct mmcs_read_stream_pool {} *x57; struct __CFRunLoop {} *x58; struct __CFArray {} *x59; union { struct mmcs_cfnetwork_http_context {} *x_60_1_1; struct mmcs_nsurlsession_http_context {} *x_60_1_2; struct mmcs_curl_http_context {} *x_60_1_3; } x60; }*)arg1 options:(const struct mmcs_http_context_options { struct __CFString {} *x1; struct __CFHTTPMessage {} *x2; struct __CFDictionary {} *x3; double x4; unsigned char x5; unsigned long long x6; int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); void *x13; int (*x14)(); void *x15; unsigned char x16; }*)arg2;
- (id)inputStream;
- (void)invalidate;
- (void)invalidateStreamPair;
- (bool)isHandlingError;
- (bool)isTaskDone;
- (bool)isValid;
- (id)operationQueue;
- (id)outputStream;
- (bool)requestBodyCanAcceptData;
- (void)requestBodyDone;
- (bool)requestIsStreamed;
- (bool)send;
- (void)setDataTask:(id)arg1;
- (void)setDidOpen:(bool)arg1;
- (void)setDuetReporter:(id)arg1;
- (void)setHc:(struct mmcs_http_context { unsigned int x1; int x2; int x3; struct __CFString {} *x4; long long x5; double x6; double x7; double x8; double x9; double x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; int x17; struct __CFUUID {} *x18; double x19; double x20; long long x21; long long x22; long long x23; double x24; unsigned long long x25; double x26; long long x27; double x28; unsigned long long x29; long long x30; long long x31; struct __CFError {} *x32; struct __CFHTTPMessage {} *x33; unsigned char x34; unsigned long long x35; struct __CFDictionary {} *x36; double x37; struct __CFHTTPMessage {} *x38; unsigned char x39; struct __CFData {} *x40; struct __sFILE {} *x41; struct __sFILE {} *x42; struct __CFString {} *x43; struct __CFString {} *x44; unsigned short x45; unsigned char x46; struct mmcs_metrics_http_info {} *x47; int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); void *x55; void *x56; struct mmcs_read_stream_pool {} *x57; struct __CFRunLoop {} *x58; struct __CFArray {} *x59; union { struct mmcs_cfnetwork_http_context {} *x_60_1_1; struct mmcs_nsurlsession_http_context {} *x_60_1_2; struct mmcs_curl_http_context {} *x_60_1_3; } x60; }*)arg1;
- (void)setInputStream:(id)arg1;
- (void)setIsHandlingError:(bool)arg1;
- (void)setIsTaskDone:(bool)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setRequestIsStreamed:(bool)arg1;
- (void)setTimingData:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)timingData;
- (id)urlSession;
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

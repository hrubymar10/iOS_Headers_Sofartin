/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIImageLoad : NSObject <NSURLConnectionDelegate> {
    NSURL *_URL;
    NSURLConnection *_connection;
    NSMutableData *_imageData;
    bool _invalidResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createImage;
- (void)_loadFinished;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)receivedValidResponse:(id)arg1;
- (void)start;

@end

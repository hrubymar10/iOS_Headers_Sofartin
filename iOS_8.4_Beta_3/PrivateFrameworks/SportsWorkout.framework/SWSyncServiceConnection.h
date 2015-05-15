/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWSyncServiceConnection : NSObject {
    NSURLConnection *_URLConnection;
    NSTimer *_bailOutTimer;
    SWSyncHost *_host;
    NSMutableData *_receivedData;
}

@property (nonatomic, readonly) SWSyncHost *host;

- (void)_bailOutTimerFired:(id)arg1;
- (void)_restartBailOutTimer;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleResponse:(id)arg1;
- (id)host;
- (id)initWithHost:(id)arg1;

@end

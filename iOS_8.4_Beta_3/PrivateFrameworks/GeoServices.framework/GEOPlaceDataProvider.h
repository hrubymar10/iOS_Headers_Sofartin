/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataProvider : NSObject {
    id _errorHandler;
    id _finishedHandler;
    bool _isLoading;
}

@property (nonatomic, copy) id errorHandler;
@property (nonatomic, copy) id finishedHandler;
@property (nonatomic) bool isLoading;

- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (id)errorHandler;
- (id)finishedHandler;
- (bool)isLoading;
- (void)providerDidCancel;
- (void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2;
- (void)providerReceivedResponse:(id)arg1;
- (void)requestCompleted;
- (void)setErrorHandler:(id)arg1;
- (void)setFinishedHandler:(id)arg1;
- (void)setIsLoading:(bool)arg1;
- (void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2;
- (void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(id)arg3 error:(id)arg4;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShiftLocation : NSObject {
    double _accuracy;
    id _completionHandler;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    id _errorHandler;
    id _mustGoToNetworkCallback;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFRunLoop { } *_runLoop;
}

@property(assign,readonly) double accuracy;
@property(assign,readonly) struct { double x1; double x2; } coordinate;

- (id)_initWithCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4 mustGoToNetworkCallback:(id)arg5;
- (void)_performOnCallbackQueue:(id)arg1;
- (double)accuracy;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4 mustGoToNetworkCallback:(id)arg5 callbackQueue:(id)arg6;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 completionHandler:(id)arg3 errorHandler:(id)arg4 mustGoToNetworkCallback:(id)arg5 callbackRunLoop:(struct __CFRunLoop { }*)arg6;
- (void)performCompletionHandlerWithShiftedCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2;
- (void)performErrorHandler:(id)arg1;
- (void)performMustGoToNetwork;

@end
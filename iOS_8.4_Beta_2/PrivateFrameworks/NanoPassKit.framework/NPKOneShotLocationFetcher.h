/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate> {
    id _completionHandler;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    CLLocationManager *_locationManager;
}

@property(assign,copy) id completionHandler;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_dispatch_source> * locationFixTimeout;
@property(assign,retain) CLLocationManager * locationManager;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (id)completionHandler;
- (void)dealloc;
- (void)fetchLocationWithCompletion:(id)arg1;
- (id)locationFixTimeout;
- (id)locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setCompletionHandler:(id)arg1;
- (void)setLocationFixTimeout:(id)arg1;
- (void)setLocationManager:(id)arg1;

@end

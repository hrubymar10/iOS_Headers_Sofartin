/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    <CLLocationManagerDelegate> *_delegate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CLLocationManagerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
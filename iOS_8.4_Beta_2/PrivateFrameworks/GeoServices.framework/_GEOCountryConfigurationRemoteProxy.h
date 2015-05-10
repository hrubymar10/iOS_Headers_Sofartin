/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy> {
    int _countryCodeChangedToken;
    <_GEOCountryConfigurationServerProxyDelegate> *_delegate;
    int _providersChangedToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <_GEOCountryConfigurationServerProxyDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateCountryCode:(id)arg1;

@end

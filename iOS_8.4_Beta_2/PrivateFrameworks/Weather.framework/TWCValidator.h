/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface TWCValidator : NSObject <MKSearchCompleterDelegate> {
    MKLocalSearchCompleter *_completer;
    <WeatherValidatorDelegate> *_delegate;
    CLGeocoder *_geocoder;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <WeatherValidatorDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)sharedValidator;

- (id)aggregateDictionaryDomain;
- (void)autocompleteLocation:(id)arg1;
- (void)cancel;
- (void)completerDidFail:(id)arg1 error:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (void)geocodeLocation:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

@end

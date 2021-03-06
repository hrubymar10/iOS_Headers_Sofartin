/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface TWCValidator : NSObject <MKSearchCompleterDelegate> {
    MKLocalSearchCompleter *_completer;
    <WeatherValidatorDelegate> *_delegate;
    CLGeocoder *_geocoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WeatherValidatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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

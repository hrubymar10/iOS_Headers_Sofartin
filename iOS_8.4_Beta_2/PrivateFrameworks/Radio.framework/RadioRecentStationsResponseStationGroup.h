/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsResponseStationGroup : NSObject {
    NSDictionary *_responseDictionary;
}

@property(getter=isActive,assign,readonly) bool active;
@property(assign,copy) NSString * localizedTitle;
@property(assign,copy) NSArray * stationDictionaries;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isActive;
- (id)localizedTitle;
- (id)stationDictionaries;

@end

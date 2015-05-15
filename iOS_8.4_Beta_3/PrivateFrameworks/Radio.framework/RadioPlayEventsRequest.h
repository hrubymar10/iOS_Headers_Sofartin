/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlayEventsRequest : RadioRequest {
    RadioPlayEventCollection *_playEventCollection;
    SSURLConnectionRequest *_request;
}

@property(assign,copy) RadioPlayEventCollection * playEventCollection;

- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (id)initWithPlayEventCollection:(id)arg1;
- (id)initWithStation:(id)arg1 playEvents:(id)arg2;
- (id)initWithStationHash:(id)arg1 stationID:(long long)arg2 playEvents:(id)arg3;
- (id)playEventCollection;
- (void)setDeviceName:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;

@end

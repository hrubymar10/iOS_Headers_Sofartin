/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STShowWeatherForecastRequest : AFSiriRequest {
    AFCity *_city;
    STWeatherCurrentConditions *_currentConditions;
    long long _forecastType;
    NSArray *_hourlyForecasts;
    STWeatherUnits *_units;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(long long)arg5;
- (id)city;
- (id)createResponse;
- (id)currentConditions;
- (void)encodeWithCoder:(id)arg1;
- (long long)forecastType;
- (id)hourlyForecasts;
- (id)initWithCoder:(id)arg1;
- (id)units;

@end

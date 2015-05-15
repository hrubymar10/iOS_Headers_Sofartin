/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherCurrentConditions : AceObject <SAAceSerializable>

@property(assign,retain) SAWeatherBarometricPressure * barometricPressure;
@property(assign,retain) SAWeatherCondition * condition;
@property(assign,copy) NSNumber * dayOfWeek;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * dewPoint;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * heatIndex;
@property(assign,copy) NSString * moonPhase;
@property(assign,copy) NSString * percentHumidity;
@property(assign,copy) NSNumber * percentOfMoonFaceVisible;
@property(assign,copy) NSString * sunrise;
@property(assign,copy) NSString * sunset;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * temperature;
@property(assign,copy) NSString * timeOfObservation;
@property(assign,copy) NSString * timeZone;
@property(assign,copy) NSString * visibility;
@property(assign,copy) NSString * windChill;
@property(assign,retain) SAWeatherWindSpeed * windSpeed;

+ (id)currentConditions;
+ (id)currentConditionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)barometricPressure;
- (id)condition;
- (id)dayOfWeek;
- (id)dewPoint;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)heatIndex;
- (id)moonPhase;
- (id)percentHumidity;
- (id)percentOfMoonFaceVisible;
- (void)setBarometricPressure:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDayOfWeek:(id)arg1;
- (void)setDewPoint:(id)arg1;
- (void)setHeatIndex:(id)arg1;
- (void)setMoonPhase:(id)arg1;
- (void)setPercentHumidity:(id)arg1;
- (void)setPercentOfMoonFaceVisible:(id)arg1;
- (void)setSunrise:(id)arg1;
- (void)setSunset:(id)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTimeOfObservation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setVisibility:(id)arg1;
- (void)setWindChill:(id)arg1;
- (void)setWindSpeed:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (id)temperature;
- (id)timeOfObservation;
- (id)timeZone;
- (id)visibility;
- (id)windChill;
- (id)windSpeed;

@end
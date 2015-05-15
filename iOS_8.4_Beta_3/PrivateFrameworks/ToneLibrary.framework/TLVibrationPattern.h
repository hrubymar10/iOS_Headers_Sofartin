/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPattern : NSObject {
    id _complexPatternDescription;
    id _contextObject;
    double _duration;
    id _propertyListRepresentation;
}

@property (nonatomic, readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property (setter=_setComplexPatternDescription:, nonatomic, retain) id _complexPatternDescription;
@property (setter=_setDuration:, nonatomic) double _duration;
@property (setter=_setPropertyListRepresentation:, nonatomic, retain) id _propertyListRepresentation;
@property (nonatomic, readonly) double computedDuration;
@property (nonatomic, retain) id contextObject;
@property (nonatomic, readonly) id propertyListRepresentation;

+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (bool)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
+ (id)noneVibrationPattern;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;

- (id)_artificiallyRepeatingPropertyListRepresentation;
- (id)_complexPatternDescription;
- (double)_duration;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(bool)arg2;
- (id)_propertyListRepresentation;
- (void)_setComplexPatternDescription:(id)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setPropertyListRepresentation:(id)arg1;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(bool)arg2;
- (double)computedDuration;
- (id)contextObject;
- (void)dealloc;
- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (void)setContextObject:(id)arg1;

@end

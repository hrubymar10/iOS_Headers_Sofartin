/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface LocalizerParameters : PBCodable <NSCopying> {
    int _bilinearWifi;
    BodyFixedDetectorParameters *_bodyFixed;
    float _confidenceFactor;
    struct { 
        unsigned int notifyIntervalNanos : 1; 
        unsigned int bilinearWifi : 1; 
        unsigned int confidenceFactor : 1; 
        unsigned int localizerType : 1; 
        unsigned int modeEstimator : 1; 
        unsigned int motionPdrUnmodelledHeadingVariancePerSecond : 1; 
        unsigned int numParticles : 1; 
        unsigned int time2dMotionVariancePerSecond : 1; 
    } _has;
    InjectionParameters *_injection;
    int _localizerType;
    int _modeEstimator;
    float _motionPdrUnmodelledHeadingVariancePerSecond;
    MotionTruthParameters *_motionTruth;
    MultiphoneDbmParameters *_multiphoneDbm;
    unsigned long long _notifyIntervalNanos;
    unsigned int _numParticles;
    PdrParameters *_pdr;
    PedometryCompassMotionParameters *_pedomCompassMotion;
    float _time2dMotionVariancePerSecond;
    WifiParameters *_wifi;
}

@property(assign,readwrite) int bilinearWifi;
@property(assign,retain) BodyFixedDetectorParameters * bodyFixed;
@property(assign,readwrite) float confidenceFactor;
@property(assign,readwrite) bool hasBilinearWifi;
@property(assign,readonly) bool hasBodyFixed;
@property(assign,readwrite) bool hasConfidenceFactor;
@property(assign,readonly) bool hasInjection;
@property(assign,readwrite) bool hasLocalizerType;
@property(assign,readwrite) bool hasModeEstimator;
@property(assign,readwrite) bool hasMotionPdrUnmodelledHeadingVariancePerSecond;
@property(assign,readonly) bool hasMotionTruth;
@property(assign,readonly) bool hasMultiphoneDbm;
@property(assign,readwrite) bool hasNotifyIntervalNanos;
@property(assign,readwrite) bool hasNumParticles;
@property(assign,readonly) bool hasPdr;
@property(assign,readonly) bool hasPedomCompassMotion;
@property(assign,readwrite) bool hasTime2dMotionVariancePerSecond;
@property(assign,readonly) bool hasWifi;
@property(assign,retain) InjectionParameters * injection;
@property(assign,readwrite) int localizerType;
@property(assign,readwrite) int modeEstimator;
@property(assign,readwrite) float motionPdrUnmodelledHeadingVariancePerSecond;
@property(assign,retain) MotionTruthParameters * motionTruth;
@property(assign,retain) MultiphoneDbmParameters * multiphoneDbm;
@property(assign,readwrite) unsigned long long notifyIntervalNanos;
@property(assign,readwrite) unsigned int numParticles;
@property(assign,retain) PdrParameters * pdr;
@property(assign,retain) PedometryCompassMotionParameters * pedomCompassMotion;
@property(assign,readwrite) float time2dMotionVariancePerSecond;
@property(assign,retain) WifiParameters * wifi;

- (void).cxx_destruct;
- (int)bilinearWifi;
- (id)bodyFixed;
- (float)confidenceFactor;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBilinearWifi;
- (bool)hasBodyFixed;
- (bool)hasConfidenceFactor;
- (bool)hasInjection;
- (bool)hasLocalizerType;
- (bool)hasModeEstimator;
- (bool)hasMotionPdrUnmodelledHeadingVariancePerSecond;
- (bool)hasMotionTruth;
- (bool)hasMultiphoneDbm;
- (bool)hasNotifyIntervalNanos;
- (bool)hasNumParticles;
- (bool)hasPdr;
- (bool)hasPedomCompassMotion;
- (bool)hasTime2dMotionVariancePerSecond;
- (bool)hasWifi;
- (unsigned long long)hash;
- (id)initEmpty;
- (id)injection;
- (bool)isEqual:(id)arg1;
- (int)localizerType;
- (void)mergeFrom:(id)arg1;
- (int)modeEstimator;
- (float)motionPdrUnmodelledHeadingVariancePerSecond;
- (id)motionTruth;
- (id)multiphoneDbm;
- (unsigned long long)notifyIntervalNanos;
- (unsigned int)numParticles;
- (id)pdr;
- (id)pedomCompassMotion;
- (bool)readFrom:(id)arg1;
- (void)setBilinearWifi:(int)arg1;
- (void)setBodyFixed:(id)arg1;
- (void)setConfidenceFactor:(float)arg1;
- (void)setHasBilinearWifi:(bool)arg1;
- (void)setHasConfidenceFactor:(bool)arg1;
- (void)setHasLocalizerType:(bool)arg1;
- (void)setHasModeEstimator:(bool)arg1;
- (void)setHasMotionPdrUnmodelledHeadingVariancePerSecond:(bool)arg1;
- (void)setHasNotifyIntervalNanos:(bool)arg1;
- (void)setHasNumParticles:(bool)arg1;
- (void)setHasTime2dMotionVariancePerSecond:(bool)arg1;
- (void)setInjection:(id)arg1;
- (void)setLocalizerType:(int)arg1;
- (void)setModeEstimator:(int)arg1;
- (void)setMotionPdrUnmodelledHeadingVariancePerSecond:(float)arg1;
- (void)setMotionTruth:(id)arg1;
- (void)setMultiphoneDbm:(id)arg1;
- (void)setNotifyIntervalNanos:(unsigned long long)arg1;
- (void)setNumParticles:(unsigned int)arg1;
- (void)setPdr:(id)arg1;
- (void)setPedomCompassMotion:(id)arg1;
- (void)setTime2dMotionVariancePerSecond:(float)arg1;
- (void)setWifi:(id)arg1;
- (float)time2dMotionVariancePerSecond;
- (void)updateDeepTo:(id)arg1;
- (id)wifi;
- (void)writeTo:(id)arg1;

@end

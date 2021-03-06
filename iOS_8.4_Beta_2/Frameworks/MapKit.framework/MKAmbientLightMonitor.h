/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAmbientLightMonitor : NSObject {
    long long _ambientLightLevel;
    struct __IOHIDEventSystemClient { } *_client;
    bool _debugLogLux;
    double _lightLevelLowThreshold;
    double _lightLevelMediumThreshold;
    double _lightLevelNoneThreshold;
    bool _monitoring;
    NSHashTable *_observers;
    struct deque<double, std::__1::allocator<double> > { 
        struct __split_buffer<double *, std::__1::allocator<double *> > { 
            double **__first_; 
            double **__begin_; 
            double **__end_; 
            struct __compressed_pair<double **, std::__1::allocator<double *> > { 
                double **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<double> > { 
            unsigned long long __first_; 
        } __size_; 
    } _runningStatBuffer;
    unsigned int _runningStatSize;
    double _runningStatSum;
}

@property(assign,readonly) long long ambientLightLevel;
@property(assign,readwrite) bool debugLogLux;
@property(getter=isMonitoring,assign,readonly) bool monitoring;

+ (id)sharedAmbientLightMonitor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_addSampleAndComputeMean:(const double*)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)_updateThresholds;
- (long long)ambientLightLevel;
- (void)dealloc;
- (bool)debugLogLux;
- (void)handleIOHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)init;
- (bool)isMonitoring;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDebugLogLux:(bool)arg1;
- (void)startMonitoringWithObserver:(id)arg1;
- (void)stopMonitoringWithObserver:(id)arg1;

@end

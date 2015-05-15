/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARAudioClassifierSession : NSObject {
    struct RecogAudioBuffer { 
        int (**_vptr$OnlineAudioSourceItf)(); 
        int state; 
        unsigned int samplingRate; 
        int maxBufferLen; 
        bool maxBufferLenReached; 
        unsigned int bufferPos; 
        struct Vector<float> { 
            float *data_; 
            int dim_; 
            int capacity_; 
        } linearBuffer; 
        struct mutex { 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } __m_; 
        } bufferMutex; 
        struct condition_variable_any { 
            struct condition_variable { 
                struct _opaque_pthread_cond_t { 
                    long long __sig; 
                    BOOL __opaque[40]; 
                } __cv_; 
            } __cv_; 
            struct shared_ptr<std::__1::mutex> { 
                struct mutex {} *__ptr_; 
                struct __shared_weak_count {} *__cntrl_; 
            } __mut_; 
        } bufferCond; 
        struct thread { 
            struct _opaque_pthread_t {} *__t_; 
        } recogThread; 
        bool endOfAudio; 
    } _bufferedSource;
    <_EARAudioClassifierSessionDelegate> *_delegate;
    double _frameDuration;
}

@property (nonatomic, readonly) double frameDuration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendAudioSamples:(const float*)arg1 count:(unsigned long long)arg2;
- (void)cancel;
- (void)finish;
- (double)frameDuration;
- (id)initWithDelegate:(id)arg1 frameDuration:(double)arg2;

@end

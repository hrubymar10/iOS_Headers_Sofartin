/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMIDSMessageInstance : NSObject {
    id _retryAction;
    long long _retryCount;
    double _retryInterval;
}

@property(assign,copy) id retryAction;
@property(assign,readwrite) long long retryCount;
@property(assign,readwrite) double retryInterval;

+ (id)newMessageInstanceWithAction:(id)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)retryAction;
- (long long)retryCount;
- (double)retryInterval;
- (void)setRetryAction:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setRetryInterval:(double)arg1;

@end
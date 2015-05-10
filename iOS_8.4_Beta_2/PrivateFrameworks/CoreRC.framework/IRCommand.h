/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface IRCommand : NSObject {
    bool _isRepeat;
    unsigned long long _payload;
    IRProtocol *_protocol;
    unsigned long long _timestamp;
}

@property(assign,readonly) bool isRepeat;
@property(assign,readonly) unsigned long long payload;
@property(assign,readonly) IRProtocol * protocol;
@property(assign,readwrite) unsigned long long timestamp;

- (void)dealloc;
- (id)init;
- (id)initWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(bool)arg3;
- (bool)isRepeat;
- (unsigned long long)payload;
- (id)protocol;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
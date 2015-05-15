/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandLogChannel : NSObject {
    bool cachingEnabled;
    <PLBasebandLogChannelDelegate> *delegate;
    struct __CFMessagePort { } *localPort;
    struct __CFMessagePort { } *remotePort;
}

@property(assign,readwrite) bool cachingEnabled;
@property(assign,readwrite) <PLBasebandLogChannelDelegate> * delegate;
@property(assign,readonly) bool isValid;

- (bool)cachingEnabled;
- (void)close;
- (void)commitHardwareLogs;
- (void)connectionInvalidated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableLogCodes:(id)arg1 andEvents:(id)arg2;
- (void)flush;
- (id)init;
- (void)invalidate;
- (bool)isValid;
- (bool)openWithConnection:(id)arg1;
- (void)sendObjectOverRemotePort:(id)arg1;
- (void)setCachingEnabled:(bool)arg1;
- (void)setChannelTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHardwareLoggingLevel:(unsigned long long)arg1 withWindowSize:(unsigned long long)arg2;

@end

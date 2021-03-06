/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    MFError *_error;
    int _status;
}

@property(assign,readonly) unsigned long long bytesRead;
@property(assign,readonly) unsigned long long bytesWritten;
@property(assign,retain) MFError * error;
@property(assign,readonly) int status;

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
- (void)dealloc;
- (id)error;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3;
- (void)setError:(id)arg1;
- (int)status;

@end

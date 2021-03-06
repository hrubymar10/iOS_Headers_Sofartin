/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface WLOTcpConnection : NSObject <NSStreamDelegate> {
    <WLOTcpConnectionDelegate> *_delegate;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <WLOTcpConnectionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSInputStream * inputStream;
@property(assign,retain) NSOutputStream * outputStream;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_readData:(bool)arg1;
- (long long)_writeData:(id)arg1;
- (void)close;
- (void)closeStream:(id)arg1;
- (id)delegate;
- (id)initWithHost:(id)arg1 port:(unsigned long long)arg2;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithNetService:(id)arg1;
- (id)inputStream;
- (bool)open;
- (bool)openStream:(id)arg1;
- (id)outputStream;
- (void)setDelegate:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)writeData:(id)arg1;

@end

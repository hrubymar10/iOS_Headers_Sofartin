/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EASession : NSObject {
    EAAccessory *_accessory;
    NSInputStream *_inputStream;
    bool _openCompleted;
    NSOutputStream *_outputStream;
    NSString *_protocolString;
    unsigned int _sessionID;
    int _sock;
}

@property (nonatomic, readonly) EAAccessory *accessory;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (nonatomic, readonly) NSString *protocolString;

- (void)_endStreams;
- (unsigned int)_sessionID;
- (id)_shortDescription;
- (void)_streamClosed;
- (id)accessory;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)inputStream;
- (bool)isOpenCompleted;
- (id)outputStream;
- (id)protocolString;
- (void)setOpenCompleted:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandResultMessageProtobuf *_protobuf;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned int errorCode;
@property(assign,readonly) NSArray * handlerReturnStatuses;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSDate * serializationDate;
@property(assign,readonly) Class superclass;

+ (id)messageWithErrorCode:(unsigned int)arg1 handlerReturnStatuses:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithErrorCode:(unsigned int)arg1 handlerReturnStatuses:(id)arg2;
- (unsigned int)errorCode;
- (id)handlerReturnStatuses;
- (id)initWithProtobufData:(id)arg1;
- (id)protobufData;
- (id)serializationDate;

@end

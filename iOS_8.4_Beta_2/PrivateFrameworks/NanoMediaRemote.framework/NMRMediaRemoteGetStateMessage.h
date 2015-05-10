/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteGetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetStateMessageProfobuf *_protobuf;
}

@property(assign,readonly) NSData * applicationInfoDigest;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSData * nowPlayingInfoDigest;
@property(assign,readonly) NSDate * serializationDate;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSData * supportedCommandsDigest;

+ (id)messageWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3;
- (id)applicationInfoDigest;
- (id)initWithProtobufData:(id)arg1;
- (id)nowPlayingInfoDigest;
- (id)protobufData;
- (id)serializationDate;
- (id)supportedCommandsDigest;

@end
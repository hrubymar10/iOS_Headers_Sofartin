/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEClientTransaction : NSObject {
    BTLEClient *_client;
    NSString *_readCharacteristic;
    NSData *_readData;
    id _readHandler;
    id _replyHandler;
    NSString *_writeCharacteristic;
    NSData *_writeData;
    id _writeHandler;
}

@property (nonatomic, retain) BTLEClient *client;
@property (nonatomic, copy) NSString *readCharacteristic;
@property (nonatomic, copy) NSData *readData;
@property (nonatomic, copy) id readHandler;
@property (nonatomic, copy) id replyHandler;
@property (nonatomic, copy) NSString *writeCharacteristic;
@property (nonatomic, copy) NSData *writeData;
@property (nonatomic, copy) id writeHandler;

- (id)client;
- (id)readCharacteristic;
- (id)readData;
- (id)readHandler;
- (id)replyHandler;
- (void)setClient:(id)arg1;
- (void)setReadCharacteristic:(id)arg1;
- (void)setReadData:(id)arg1;
- (void)setReadHandler:(id)arg1;
- (void)setReplyHandler:(id)arg1;
- (void)setWriteCharacteristic:(id)arg1;
- (void)setWriteData:(id)arg1;
- (void)setWriteHandler:(id)arg1;
- (id)writeCharacteristic;
- (id)writeData;
- (id)writeHandler;

@end

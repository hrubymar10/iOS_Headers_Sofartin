/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    unsigned long long _count;
    bool _lastNewLine;
    NSData *_rawData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (unsigned long long)count;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (bool)isLastCharacterNewLine;
- (id)rawData;

@end

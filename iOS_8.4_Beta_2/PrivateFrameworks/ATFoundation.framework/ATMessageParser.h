/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATMessageParser : NSObject {
    unsigned long long _curObjectLength;
    Class _messageClass;
    void *_objectDataBuffer;
    unsigned long long _objectDataLen;
    id _objectParsedBlock;
    NSMutableData *_parserData;
    NSError *_parserError;
    BOOL _varIntBuf;
    unsigned long long _varIntDataLen;
}

@property(assign,readonly) Class messageClass;
@property(assign,copy) id objectParsedBlock;
@property(assign,readonly) NSError * parserError;

- (void).cxx_destruct;
- (bool)_parseObjectFromData:(id)arg1;
- (bool)_parseObjectLength:(const char *)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3;
- (void)dealloc;
- (id)initWithMessageClass:(Class)arg1;
- (Class)messageClass;
- (id)objectParsedBlock;
- (id)parserError;
- (bool)processData:(const char *)arg1 length:(long long)arg2;
- (void)setObjectParsedBlock:(id)arg1;

@end
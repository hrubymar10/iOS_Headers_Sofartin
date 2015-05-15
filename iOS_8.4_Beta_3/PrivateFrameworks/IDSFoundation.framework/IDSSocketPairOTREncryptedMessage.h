/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage {
    NSData *_data;
    bool _encrypted;
    bool _fileXfer;
    unsigned long long _offset;
    unsigned short _priority;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned char _versionNumber;
}

@property(assign,retain) NSData * data;
@property(assign,readonly) bool encrypted;
@property(assign,readonly) bool fileXfer;
@property(assign,readonly) unsigned short priority;
@property(assign,readonly) unsigned int sequenceNumber;
@property(assign,readonly) unsigned short streamID;
@property(assign,readonly) unsigned char versionNumber;

- (id)_nonHeaderData;
- (unsigned char)command;
- (id)data;
- (void)dealloc;
- (bool)encrypted;
- (bool)fileXfer;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(bool)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned int)arg5 fileXfer:(bool)arg6 data:(id)arg7;
- (unsigned short)priority;
- (unsigned int)sequenceNumber;
- (unsigned short)streamID;
- (unsigned char)versionNumber;

@end

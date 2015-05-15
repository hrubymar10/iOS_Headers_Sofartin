/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairHandshake : IDSSocketPairMessage {
    unsigned int _versionNumber;
}

@property(assign,readonly) unsigned int versionNumber;

- (id)_nonHeaderData;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersionNumber:(unsigned int)arg1;
- (unsigned int)versionNumber;

@end

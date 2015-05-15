/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageDetails : NSObject {
    long long conversationHash;
    unsigned int dateReceived;
    unsigned int dateSent;
    unsigned int encoding;
    NSString *externalID;
    bool isInvalid;
    MFMessageLibrary *library;
    unsigned int libraryID;
    unsigned int mailboxID;
    unsigned long long messageFlags;
    long long messageIDHash;
    unsigned int uid;
}

- (id)copyMessageInfo;
- (double)dateReceivedAsTimeIntervalSince1970;
- (double)dateSentAsTimeIntervalSince1970;
- (void)dealloc;
- (id)description;
- (id)externalID;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned int)libraryID;
- (id)mailbox;
- (unsigned int)mailboxID;
- (unsigned long long)messageFlags;
- (id)messageID;
- (long long)messageIDHash;
- (id)remoteID;
- (unsigned int)uid;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfo : NSObject {
    long long _conversationHash;
    unsigned int _dateReceivedInterval;
    unsigned int _dateSentInterval;
    unsigned int _deleted;
    unsigned int _flagged;
    long long _generationNumber;
    unsigned int _hasAttachments;
    unsigned int _isVIP;
    unsigned int _mailboxID;
    unsigned int _read;
    unsigned int _uid;
    unsigned int _uidIsLibraryID;
}

@property(assign,readwrite) long long conversationHash;
@property(assign,readwrite) unsigned int dateReceivedInterval;
@property(assign,readwrite) unsigned int dateSentInterval;
@property(assign,readwrite) bool deleted;
@property(assign,readwrite) bool flagged;
@property(assign,readonly) long long generationNumber;
@property(assign,readwrite) bool isVIP;
@property(getter=isKnownToHaveAttachments,assign,readwrite) bool knownToHaveAttachments;
@property(assign,readwrite) unsigned int mailboxID;
@property(assign,readwrite) bool read;
@property(assign,readwrite) unsigned int uid;
@property(assign,readwrite) bool uidIsLibraryID;

+ (long long)newGenerationNumber;

- (long long)conversationHash;
- (unsigned int)dateReceivedInterval;
- (unsigned int)dateSentInterval;
- (bool)deleted;
- (id)description;
- (bool)flagged;
- (long long)generationCompare:(id)arg1;
- (long long)generationNumber;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUid:(unsigned int)arg1 mailboxID:(unsigned int)arg2 dateReceivedInterval:(unsigned int)arg3 dateSentInterval:(unsigned int)arg4 conversationHash:(long long)arg5 read:(bool)arg6 knownToHaveAttachments:(bool)arg7 flagged:(bool)arg8 isVIP:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isKnownToHaveAttachments;
- (bool)isVIP;
- (unsigned int)mailboxID;
- (bool)read;
- (void)setConversationHash:(long long)arg1;
- (void)setDateReceivedInterval:(unsigned int)arg1;
- (void)setDateSentInterval:(unsigned int)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setFlagged:(bool)arg1;
- (void)setIsVIP:(bool)arg1;
- (void)setKnownToHaveAttachments:(bool)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setRead:(bool)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUidIsLibraryID:(bool)arg1;
- (unsigned int)uid;
- (bool)uidIsLibraryID;

@end

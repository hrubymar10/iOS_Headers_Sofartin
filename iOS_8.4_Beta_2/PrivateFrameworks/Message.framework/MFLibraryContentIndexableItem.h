/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibraryContentIndexableItem : NSObject {
    NSArray *_cc;
    NSString *_content;
    unsigned int _documentIdentifier;
    unsigned int _mailboxID;
    NSArray *_senders;
    NSString *_subject;
    NSArray *_to;
}

@property(assign,copy) NSArray * cc;
@property(assign,copy) NSString * content;
@property(assign,readwrite) unsigned int documentIdentifier;
@property(assign,readwrite) unsigned int mailboxID;
@property(assign,copy) NSArray * senders;
@property(assign,copy) NSString * subject;
@property(assign,copy) NSArray * to;

- (id)cc;
- (long long)compare:(id)arg1;
- (id)content;
- (void)dealloc;
- (unsigned int)documentIdentifier;
- (id)initWithDocumentIdentifier:(unsigned int)arg1;
- (unsigned int)mailboxID;
- (id)senders;
- (void)setCc:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDocumentIdentifier:(unsigned int)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setSenders:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (id)subject;
- (id)to;

@end
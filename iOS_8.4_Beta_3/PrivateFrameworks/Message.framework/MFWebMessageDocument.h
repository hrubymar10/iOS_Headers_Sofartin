/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWebMessageDocument : MFWebAttachmentSource {
    MFAttachmentManager *_attachmentManager;
    NSURL *_baseURL;
    NSData *_htmlData;
    MFMimePart *_htmlPart;
    MFLock *_lock;
    MFMimeBody *_mimeBody;
    NSMutableDictionary *_partsByFilename;
    NSMutableDictionary *_partsByURL;
    unsigned int _preferredEncoding;
    unsigned int _uniqueId;
}

@property(assign,retain) MFAttachmentManager * attachmentManager;
@property(assign,readonly) NSURL * baseURL;
@property(assign,readonly) NSData * htmlData;
@property(assign,readonly) MFMimeBody * mimeBody;
@property(assign,readonly) MFMimePart * mimePart;
@property(assign,readwrite) unsigned int preferredEncoding;

+ (id)sourceForURL:(id)arg1;

- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)attachmentForCID:(id)arg1;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentManager;
- (id)attachmentsInDocument;
- (id)baseURL;
- (void)dealloc;
- (id)fileWrapper;
- (id)htmlData;
- (id)init;
- (id)initWithMimeBody:(id)arg1;
- (id)initWithMimePart:(id)arg1;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned int)arg3;
- (id)mimeBody;
- (id)mimePart;
- (id)mimePartForURL:(id)arg1;
- (id)preferredCharacterSet;
- (unsigned int)preferredEncoding;
- (void)setAttachmentManager:(id)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;

@end
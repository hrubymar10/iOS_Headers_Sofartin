/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailDelivery : NSObject {
    DeliveryAccount *_account;
    MailAccount *_archiveAccount;
    NSArray *_charsets;
    NSDictionary *_compositionSpecification;
    unsigned long long _conversationFlags;
    id _delegate;
    MFMutableMessageHeaders *_headers;
    NSString *_htmlString;
    bool _isUserRequested;
    MFMessage *_message;
    NSArray *_mixedContent;
    NSArray *_otherStringsAndAttachments;
    MFPlainTextDocument *_plainTextAlternative;
    MFDeliveryResult *_result;
    bool _textPartsAreHTML;
    unsigned int _threaded;
    unsigned int _useCellDataOnly;
}

@property (nonatomic, retain) NSDictionary *compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) bool isUserRequested;

+ (bool)deliverMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
+ (id)newWithMessage:(id)arg1;

- (id)account;
- (void)archive;
- (id)archiveAccount;
- (id)compositionSpecification;
- (unsigned long long)conversationFlags;
- (void)dealloc;
- (id)delegate;
- (void)deliverAsynchronously;
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;
- (id)deliverSynchronously;
- (id)deliveryResult;
- (int)deliveryStatus;
- (id)headersForDelivery;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)initWithMessage:(id)arg1;
- (bool)isUserRequested;
- (id)message;
- (id)newMessageWriter;
- (id)originalHeaders;
- (void)setAccount:(id)arg1;
- (void)setArchiveAccount:(id)arg1;
- (void)setCellDataOnly:(bool)arg1;
- (void)setCompositionSpecification:(id)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsUserRequested:(bool)arg1;
- (bool)shouldEncryptMessage;
- (bool)shouldSignMessage;

@end

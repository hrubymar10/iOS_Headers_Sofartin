/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptHeaderViewController : UIViewController {
    CKConversation *_conversation;
    bool _shouldInvalidateOnAddressBookChange;
}

@property(assign,retain) CKConversation * conversation;
@property(assign,readonly) bool shouldInvalidateOnAddressBookChange;

- (id)conversation;
- (void)dealloc;
- (id)initWithConversation:(id)arg1;
- (void)setConversation:(id)arg1;
- (bool)shouldInvalidateOnAddressBookChange;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGFakeMailClient : NSObject <SGMailClient> {
    NSMutableArray *_fullDownloadRequests;
    NSMutableArray *_messages;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSArray * fullDownloadRequests;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1 source:(id)arg2;
- (id)allMessagesSince:(id)arg1 onMessage:(id)arg2;
- (id)fullDownloadRequests;
- (id)init;
- (id)messagesWithIds:(id)arg1 onMessage:(id)arg2;
- (void)requestRichDownloadOfMessagesWithReferences:(id)arg1;

@end
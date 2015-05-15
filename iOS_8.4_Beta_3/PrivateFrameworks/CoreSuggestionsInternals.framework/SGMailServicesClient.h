/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMailServicesClient : NSObject <SGMailClient> {
    bool _ignoreEmptyMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreEmptyMessages;
@property (readonly) Class superclass;

- (id)allMessagesSince:(id)arg1 onMessage:(id)arg2;
- (bool)ignoreEmptyMessages;
- (id)messagesWithIds:(id)arg1 onMessage:(id)arg2;
- (void)requestRichDownloadOfMessagesWithReferences:(id)arg1;
- (void)setIgnoreEmptyMessages:(bool)arg1;

@end

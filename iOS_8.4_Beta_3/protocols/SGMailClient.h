/* Generated by RuntimeBrowser.
 */

@protocol SGMailClient <NSObject>

@required

- (NSError *)allMessagesSince:(NSDate *)arg1 onMessage:(id)arg2;
- (NSError *)messagesWithIds:(NSSet *)arg1 onMessage:(id)arg2;
- (void)requestRichDownloadOfMessagesWithReferences:(NSArray *)arg1;

@end

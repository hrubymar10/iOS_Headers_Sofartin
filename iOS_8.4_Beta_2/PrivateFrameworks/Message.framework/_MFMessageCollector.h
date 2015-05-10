/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {
    NSMutableArray *_messages;
    MFActivityMonitor *_monitor;
    id _transmogrifier;
}

@property(assign,copy) id transmogrifier;

- (id)copyMessages;
- (void)dealloc;
- (id)init;
- (id)messages;
- (void)newMessagesAvailable:(id)arg1;
- (void)setTransmogrifier:(id)arg1;
- (bool)shouldCancel;
- (id)transmogrifier;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingDelayedReplyContext : NSObject {
    bool _portPassing;
    unsigned int _replyPort;
}

@property(assign,readwrite) bool portPassing;
@property(assign,readwrite) unsigned int replyPort;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(bool)arg2;
- (bool)portPassing;
- (unsigned int)replyPort;
- (void)setPortPassing:(bool)arg1;
- (void)setReplyPort:(unsigned int)arg1;

@end

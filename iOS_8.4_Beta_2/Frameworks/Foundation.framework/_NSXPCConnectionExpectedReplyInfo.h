/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {
    id _cleanupBlock;
    id _errorBlock;
    NSXPCInterface *_interface;
    unsigned long long _proxyNumber;
    NSBlock *_replyBlock;
    SEL _selector;
    NSDictionary *_userInfo;
}

@property(assign,copy) id cleanupBlock;
@property(assign,copy) id errorBlock;
@property(assign,retain) NSXPCInterface * interface;
@property(assign,readwrite) unsigned long long proxyNumber;
@property(assign,copy) NSBlock * replyBlock;
@property(assign,readwrite) SEL selector;
@property(assign,retain) NSDictionary * userInfo;

- (id)cleanupBlock;
- (void)dealloc;
- (id)errorBlock;
- (id)interface;
- (unsigned long long)proxyNumber;
- (id)replyBlock;
- (SEL)selector;
- (void)setCleanupBlock:(id)arg1;
- (void)setErrorBlock:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setProxyNumber:(unsigned long long)arg1;
- (void)setReplyBlock:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
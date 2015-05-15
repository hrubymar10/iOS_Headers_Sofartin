/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCInterface : NSObject {
    struct __CFDictionary { } *_methods2;
    Protocol *_protocol;
    id _reserved1;
}

@property(assign,readwrite) Protocol * protocol;

+ (id)af_siriTaskDeliveringInterface;
+ (id)interfaceWithProtocol:(id)arg1;
+ (id)mf_mailComposeRemoteHostInterface;
+ (id)mf_mailComposeRemoteServiceInterface;
+ (id)signatureForBlock:(id)arg1;

- (id)_allowedClassesForSelector:(SEL)arg1 reply:(bool)arg2;
- (id)_interfaceForArgument:(unsigned long long)arg1 ofSelector:(SEL)arg2 reply:(bool)arg3;
- (id)_verifiedMethodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_verifiedMethodSignatureForSelector:(SEL)arg1;
- (Class)classForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (void)dealloc;
- (id)debugDescription;
- (void)finalize;
- (id)init;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)protocol;
- (id)replyBlockSignatureForSelector:(SEL)arg1;
- (void)setClass:(Class)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setProtocol:(id)arg1;
- (void)setReplyBlockSignature:(id)arg1 forSelector:(SEL)arg2;

@end

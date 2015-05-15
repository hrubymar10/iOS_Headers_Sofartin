/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionInterface : NSObject {
    NSXPCInterface *_interface;
}

@property(assign,retain) NSXPCInterface * interface;
@property(assign,readwrite) Protocol * protocol;

+ (id)interfaceWithProtocol:(id)arg1;

- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (void)dealloc;
- (id)initWithNSXPCInterface:(id)arg1;
- (id)interface;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(bool)arg3;
- (id)protocol;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setInterface:(id)arg1;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(bool)arg4;
- (void)setProtocol:(id)arg1;

@end

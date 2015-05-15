/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {
    struct __IOHIDDevice { } *_hidDevice;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __IOHIDDevice { }*)hidDevice;
- (id)initWithIOObject:(unsigned int)arg1;
- (int)transport;

@end
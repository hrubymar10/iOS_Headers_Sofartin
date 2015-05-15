/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROIOElement : NSObject <NSCopying, SCROIOElementProtocol> {
    int _identifier;
    unsigned int _ioObject;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithIOObject:(unsigned int)arg1;
- (unsigned int)ioObject;
- (bool)isEqual:(id)arg1;
- (int)transport;

@end
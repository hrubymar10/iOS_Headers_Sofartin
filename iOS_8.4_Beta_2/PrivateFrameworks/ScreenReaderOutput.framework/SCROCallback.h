/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROCallback : NSObject <NSCoding> {
    bool _isAtomic;
    int _key;
    id _object;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;
- (bool)isAtomic;
- (int)key;
- (id)object;
- (void)postToHandler:(id)arg1;
- (void)setIsAtomic:(bool)arg1;

@end

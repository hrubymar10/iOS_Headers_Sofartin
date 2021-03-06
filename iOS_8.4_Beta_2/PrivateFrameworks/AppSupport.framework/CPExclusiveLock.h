/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
}

- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (void)unlock;

@end

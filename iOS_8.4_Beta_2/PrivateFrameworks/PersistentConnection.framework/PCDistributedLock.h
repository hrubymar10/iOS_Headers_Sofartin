/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCDistributedLock : NSObject <NSLocking> {
    int _fd;
    NSString *_path;
}

- (bool)_lockBlocking:(bool)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)lock;
- (bool)tryLock;
- (void)unlock;

@end

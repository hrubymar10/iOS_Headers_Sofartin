/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLock : NSObject <NSLocking> {
    void *_priv;
}

@property(assign,copy) NSString * name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (void)lock;
- (bool)lockBeforeDate:(id)arg1;
- (void)mf_waitForLock;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (void)unlock;

@end

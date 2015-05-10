/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyDetailsCache : NSObject {
    bool _isValid;
    bool _isValidating;
    unsigned long long _pendingInviteCount;
}

@property(assign,readonly) unsigned long long pendingInviteCount;

+ (id)sharedCache;

- (void)_fetchPendingInviteCount;
- (void)_setPendingInviteCount:(unsigned long long)arg1;
- (void)invalidate;
- (unsigned long long)pendingInviteCount;

@end

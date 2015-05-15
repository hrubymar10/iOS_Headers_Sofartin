/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerChangeState : NSObject <NSCopying, NSSecureCoding> {
    CKServerChangeToken *_changeToken;
    unsigned long long _clientRequestID;
    NSDate *_lastSyncDownDate;
    long long _lastSyncDownStatus;
    CKServerChangeToken *_pendingChangeToken;
}

@property(assign,retain) CKServerChangeToken * changeToken;
@property(assign,readwrite) unsigned long long clientRequestID;
@property(assign,readonly) bool hasNeverSyncedDown;
@property(assign,retain) NSDate * lastSyncDownDate;
@property(assign,readwrite) long long lastSyncDownStatus;
@property(assign,readonly) CKServerChangeToken * nextSyncRequestChangeToken;
@property(assign,retain) CKServerChangeToken * pendingChangeToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeToken;
- (unsigned long long)clientRequestID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (void)forgetPendingChangeToken;
- (bool)hasNeverSyncedDown;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerSyncState:(id)arg1;
- (id)lastSyncDownDate;
- (long long)lastSyncDownStatus;
- (id)nextSyncRequestChangeToken;
- (id)pendingChangeToken;
- (void)setChangeToken:(id)arg1;
- (void)setClientRequestID:(unsigned long long)arg1;
- (void)setLastSyncDownDate:(id)arg1;
- (void)setLastSyncDownStatus:(long long)arg1;
- (void)setPendingChangeToken:(id)arg1;
- (bool)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3;

@end

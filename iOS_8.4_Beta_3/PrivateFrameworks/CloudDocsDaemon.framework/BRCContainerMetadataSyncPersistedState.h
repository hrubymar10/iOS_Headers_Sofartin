/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncPersistedState : NSObject <NSSecureCoding> {
    NSDate *_lastSyncDate;
    CKServerChangeToken *_serverChangeToken;
    BRCAccountSession *_session;
}

@property(assign,retain) NSDate * lastSyncDate;
@property(assign,retain) CKServerChangeToken * serverChangeToken;

+ (id)loadFromClientStateInSession:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastSyncDate;
- (id)serverChangeToken;
- (void)setLastSyncDate:(id)arg1;
- (void)setServerChangeToken:(id)arg1;

@end

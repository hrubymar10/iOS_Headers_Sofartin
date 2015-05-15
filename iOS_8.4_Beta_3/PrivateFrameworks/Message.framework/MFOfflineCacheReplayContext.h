/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCacheReplayContext : NSObject {
    NSMutableDictionary *_failureSnapshotsByTemporaryID;
    NSString *_selectedMailboxID;
    NSMutableDictionary *_translatedIDsByTemporaryID;
}

@property(assign,readonly) NSMutableDictionary * failureSnapshotsByTemporaryID;
@property(assign,copy) NSString * selectedMailboxID;
@property(assign,readonly) NSMutableDictionary * translatedIDsByTemporaryID;

- (void)dealloc;
- (id)failureSnapshotsByTemporaryID;
- (id)init;
- (id)selectedMailboxID;
- (void)setSelectedMailboxID:(id)arg1;
- (id)translatedIDsByTemporaryID;

@end

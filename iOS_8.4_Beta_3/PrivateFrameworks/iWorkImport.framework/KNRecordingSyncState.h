/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingSyncState : NSObject <NSCopying> {
    bool _canClearOutOfSyncToken;
    NSUUID *_outOfSyncToken;
}

@property(assign,readonly) NSUUID * outOfSyncToken;
@property(getter=isRecordingOutOfSync,assign,readonly) bool recordingOutOfSync;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(bool)arg2;
- (bool)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
- (bool)isRecordingOutOfSync;
- (id)outOfSyncToken;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(bool)arg1 withLocalOutOfSyncToken:(id)arg2;

@end

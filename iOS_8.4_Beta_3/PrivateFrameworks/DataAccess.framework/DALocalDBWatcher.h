/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DALocalDBWatcher : NSObject {
    void *_abWatcher;
    struct CalDatabase { } *_calWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedBookmarkPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
    int _lastSavedABSequenceNumber;
    int _lastSavedCalSequenceNumber;
    NoteContext *_noteWatcher;
    bool _watchingBookmarks;
}

@property(assign,readwrite) int lastSavedABSequenceNumber;
@property(assign,readwrite) int lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (void).cxx_destruct;
- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)_handleBookmarkChangeNotification;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)lastSavedABSequenceNumber;
- (int)lastSavedCalSequenceNumber;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedBookmarkParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)removeConcernedBookmarkParty:(id)arg1;
- (void)removeConcernedCalParty:(id)arg1;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)setLastSavedABSequenceNumber:(int)arg1;
- (void)setLastSavedCalSequenceNumber:(int)arg1;

@end
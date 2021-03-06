/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusManager : NSObject {
    NSMutableSet *_currentState;
    bool _needsFlush;
    NSMutableDictionary *_pendingStatesByPriority;
    bool _systemAppControlsFocusOnMainDisplay;
}

@property(assign,readonly) NSMutableSet * currentState;
@property(assign,readwrite) bool needsFlush;
@property(assign,readonly) NSMutableDictionary * pendingStatesByPriority;
@property(assign,readwrite) bool systemAppControlsFocusOnMainDisplay;

+ (id)sharedInstance;

- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(id)arg2;
- (id)currentState;
- (void)dealloc;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (id)description;
- (void)flush;
- (id)init;
- (bool)needsFlush;
- (id)pendingStatesByPriority;
- (void)reallyFlushWithSet:(id)arg1;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)setNeedsFlush:(bool)arg1;
- (void)setSystemAppControlsFocusOnMainDisplay:(bool)arg1;
- (bool)systemAppControlsFocusOnMainDisplay;

@end

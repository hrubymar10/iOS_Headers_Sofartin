/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUReportingPlaybackActivityEvent : NSObject <MPUReportingEvent> {
    SSVPlayActivityEvent *_playActivityEvent;
    NSString *_playbackSessionID;
    bool _shouldReportToStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SSVPlayActivityEvent *playActivityEvent;
@property (nonatomic, copy) NSString *playbackSessionID;
@property (nonatomic) bool shouldReportToStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (bool)isValidReportingEvent;
- (id)playActivityEvent;
- (id)playbackSessionID;
- (unsigned long long)reportingEventType;
- (void)setPlayActivityEvent:(id)arg1;
- (void)setPlaybackSessionID:(id)arg1;
- (void)setShouldReportToStore:(bool)arg1;
- (bool)shouldReportToStore;

@end

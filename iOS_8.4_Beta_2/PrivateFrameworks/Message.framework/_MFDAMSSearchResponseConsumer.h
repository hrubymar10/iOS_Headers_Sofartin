/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {
    MFConditionLock *doneCondition;
    NSDate *latestDateToAdd;
    NSMutableArray *matchingRemoteIDs;
    double timeReceivedLastResponse;
    unsigned int totalCount;
}

@property(assign,retain) NSDate * latestDateToAdd;
@property(assign,retain) NSArray * matchingRemoteIDs;

- (void)dealloc;
- (bool)handleItems:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (id)latestDateToAdd;
- (id)matchingRemoteIDs;
- (void)resetDoneCondition;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)setLatestDateToAdd:(id)arg1;
- (void)waitUntilDone;
- (bool)waitUntilDoneBeforeDate:(id)arg1;

@end

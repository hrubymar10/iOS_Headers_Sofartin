/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDataOrDocsScopeGatherer : BRCNotificationGatherer {
    BRCItemID *_gatheredChildrenItemID;
    NSMutableArray *_gatheringContainers;
    NSString *_gatheringNamePrefix;
    unsigned long long _gatheringRankCur;
    unsigned long long _gatheringRankMax;
}

@property(assign,retain) BRCItemID * gatheredChildrenItemID;

- (void).cxx_destruct;
- (id)_gatheringDescendantOfContainerWithID:(id)arg1;
- (id)_gatheringNotDescendantOfContainerWithID:(id)arg1;
- (bool)continueGatheringWithBatchSize:(long long)arg1;
- (id)gatheredChildrenItemID;
- (id)initWithNotificationPipe:(id)arg1 reply:(id)arg2;
- (void)setGatheredChildrenItemID:(id)arg1;

@end

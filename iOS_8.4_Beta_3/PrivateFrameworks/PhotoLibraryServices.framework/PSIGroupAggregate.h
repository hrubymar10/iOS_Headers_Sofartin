/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIGroupAggregate : NSObject {
    NSMutableArray *_aggregatedGroupIds;
    NSMutableArray *_assetIdArrays;
    NSMutableArray *_groups;
    NSMutableArray *_rangesMatchingTokens;
    NSArray *_searchTokens;
}

- (struct __CFArray { }*)_newSortedGroupIds;
- (bool)_prefer:(id)arg1 over:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfString:(id)arg1 inGroup:(id)arg2 excludingRanges:(id)arg3;
- (bool)_verifySortedGroupIdsUnique;
- (void)dealloc;
- (id)initWithSearchTokens:(id)arg1;
- (id)newGroup;
- (void)pop;
- (void)postProcessGroupResults:(id)arg1;
- (bool)pushGroup:(id)arg1;

@end

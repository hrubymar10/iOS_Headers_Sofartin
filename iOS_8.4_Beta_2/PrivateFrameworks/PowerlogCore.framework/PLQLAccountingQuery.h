/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLQLAccountingQuery : NSObject {
    <PLQLAccountingGroupProtocol> *_QLAccountingGroup;
    NSString *_aggKey;
    NSArray *_allRails;
    NSArray *_allRailsToBeAdded;
    NSArray *_allRailsToBeSubtracted;
    double _queryHasRunTillTime;
    NSString *_queryName;
    short _queryType;
}

@property(assign,retain) <PLQLAccountingGroupProtocol> * QLAccountingGroup;
@property(assign,retain) NSString * aggKey;
@property(assign,readonly) NSArray * allRails;
@property(assign,readonly) NSArray * allRailsToBeAdded;
@property(assign,readonly) NSArray * allRailsToBeSubtracted;
@property(assign,readwrite) double queryHasRunTillTime;
@property(assign,retain) NSString * queryName;
@property(assign,readonly) short queryType;

- (void).cxx_destruct;
- (id)QLAccountingGroup;
- (void)TestAccountBucketCreation;
- (id)aggKey;
- (id)allRails;
- (id)allRailsToBeAdded;
- (id)allRailsToBeSubtracted;
- (void)cacheRailsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withSnap:(bool)arg2 cache:(bool)arg3;
- (id)initWithName:(id)arg1 withRails:(id)arg2 withQLAccountingGroup:(id)arg3 withQueryType:(short)arg4 withAggregationKey:(id)arg5;
- (id)initWithName:(id)arg1 withRailsToBeAdded:(id)arg2 withRailsToBeSubtracted:(id)arg3 withQLAccountingGroup:(id)arg4 withQueryType:(short)arg5 withAggregationKey:(id)arg6;
- (double)queryHasRunTillTime;
- (id)queryName;
- (short)queryType;
- (id)runQueryForTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withSnapRail:(bool)arg2;
- (id)runQueryIterationWithSnap:(bool)arg1;
- (void)setQueryHasRunTillTime:(double)arg1;

@end

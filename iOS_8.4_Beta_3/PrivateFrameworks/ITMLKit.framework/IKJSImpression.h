/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSImpression : IKJSObject <IKJSImpression> {
    long long _indexInParent;
    NSString *_metricsData;
    NSMutableArray *_mutableChildren;
    NSMutableArray *_mutableTimestamps;
    <IKJSImpression> *_parentImpression;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSString *data;
@property (nonatomic, readonly) long long index;
@property (nonatomic) long long indexInParent;
@property (nonatomic, copy) NSString *metricsData;
@property (nonatomic, retain) NSMutableArray *mutableChildren;
@property (nonatomic, retain) NSMutableArray *mutableTimestamps;
@property (nonatomic, readonly) id parent;
@property (nonatomic) <IKJSImpression> *parentImpression;
@property (nonatomic, readonly) NSArray *timestamps;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addTimestamp:(long long)arg1;
- (id)children;
- (id)data;
- (id)description;
- (long long)index;
- (long long)indexInParent;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3;
- (void)linkReferences;
- (id)metricsData;
- (id)mutableChildren;
- (id)mutableTimestamps;
- (id)parent;
- (id)parentImpression;
- (void)setIndexInParent:(long long)arg1;
- (void)setMetricsData:(id)arg1;
- (void)setMutableChildren:(id)arg1;
- (void)setMutableTimestamps:(id)arg1;
- (void)setParentImpression:(id)arg1;
- (id)timestamps;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentNode : NSObject {
    PLMomentCluster *__cluster;
    NSDate *__creationDate;
    CLLocation *__location;
    NSObject<NSCopying> *__objectID;
    NSString *__userTag;
    unsigned long long __userTagType;
    NSNumber *_cacheInsertionIndex;
    bool _marked;
    bool _visited;
}

@property(assign,retain) NSNumber * cacheInsertionIndex;
@property(assign,readwrite) PLMomentCluster * cluster;
@property(assign,readonly) struct { double x1; double x2; } coordinate;
@property(assign,retain) NSDate * creationDate;
@property(assign,readonly) CLLocation * location;
@property(getter=isMarked,assign,readwrite) bool marked;
@property(assign,retain) NSObject<NSCopying> * objectID;
@property(assign,readonly) NSString * userTag;
@property(assign,readonly) unsigned long long userTagType;
@property(getter=isVisited,assign,readwrite) bool visited;

- (id)cacheInsertionIndex;
- (id)cluster;
- (struct { double x1; double x2; })coordinate;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)initWithManagedAsset:(id)arg1;
- (id)initWithPartialFetchDictionary:(id)arg1;
- (bool)isMarked;
- (bool)isTagged;
- (bool)isVisited;
- (id)location;
- (id)objectID;
- (void)setCacheInsertionIndex:(id)arg1;
- (void)setCluster:(id)arg1;
- (void)setMarked:(bool)arg1;
- (void)setVisited:(bool)arg1;
- (id)userTag;
- (unsigned long long)userTagType;

@end
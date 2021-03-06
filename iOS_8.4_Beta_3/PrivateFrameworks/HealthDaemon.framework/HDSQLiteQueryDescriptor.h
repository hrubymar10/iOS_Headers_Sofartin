/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {
    Class _entityClass;
    NSString *_groupBy;
    long long _limitCount;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    HDSQLitePredicate *_predicate;
    bool _returnsDistinctEntities;
}

@property (nonatomic) Class entityClass;
@property (nonatomic, copy) NSString *groupBy;
@property (nonatomic) long long limitCount;
@property (nonatomic, copy) NSArray *orderingDirections;
@property (nonatomic, copy) NSArray *orderingProperties;
@property (nonatomic, copy) HDSQLitePredicate *predicate;
@property (nonatomic) bool returnsDistinctEntities;

- (id)_newSelectSQLWithProperties:(id)arg1;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (Class)entityClass;
- (id)groupBy;
- (long long)limitCount;
- (id)orderingDirections;
- (id)orderingProperties;
- (id)predicate;
- (bool)returnsDistinctEntities;
- (void)setEntityClass:(Class)arg1;
- (void)setGroupBy:(id)arg1;
- (void)setLimitCount:(long long)arg1;
- (void)setOrderingDirections:(id)arg1;
- (void)setOrderingProperties:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setReturnsDistinctEntities:(bool)arg1;

@end

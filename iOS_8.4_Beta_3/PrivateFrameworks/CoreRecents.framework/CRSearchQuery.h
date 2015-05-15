/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@interface CRSearchQuery : NSObject <NSSecureCoding> {
    id _comparator;
    NSArray *_domains;
    unsigned long long _implicitGroupThreshold;
    unsigned long long _options;
    NSPredicate *_predicate;
    id _weightDecayer;
}

@property (nonatomic, copy) id comparator;
@property (nonatomic, copy) NSArray *domains;
@property (nonatomic) unsigned long long implicitGroupThreshold;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, copy) id weightDecayer;

+ (id)frecencyComparator;
+ (id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (id)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4;
+ (bool)supportsSecureCoding;

- (id)comparator;
- (void)dealloc;
- (id)domains;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)implicitGroupThreshold;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)options;
- (id)predicate;
- (void)setComparator:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setWeightDecayer:(id)arg1;
- (id)weightDecayer;

@end

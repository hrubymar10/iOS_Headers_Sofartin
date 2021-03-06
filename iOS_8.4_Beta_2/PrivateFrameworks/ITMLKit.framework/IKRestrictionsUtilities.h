/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)_purgableRatingsDictionary;
+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;

@end

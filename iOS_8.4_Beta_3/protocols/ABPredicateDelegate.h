/* Generated by RuntimeBrowser.
 */

@protocol ABPredicateDelegate <NSObject>

@required

- (bool)predicateShouldContinue:(NSPredicate *)arg1;
- (bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void*)arg2;

@optional

- (bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void*)arg2 moreComing:(bool)arg3;

@end

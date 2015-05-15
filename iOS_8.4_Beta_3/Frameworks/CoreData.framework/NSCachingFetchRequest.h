/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachingFetchRequest : NSFetchRequest {
    NSMutableSet *_cachingCoordinators;
    bool _hasCachedInfo;
    id _identifier;
    NSDictionary *_substitutionVariables;
}

@property (nonatomic, readonly) id _identifier;
@property (nonatomic, copy) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (id)_identifier;
- (void)_registerCachingCoordinator:(id)arg1;
- (void)_sanityCheckVariables:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setSubstitutionVariables:(id)arg1;
- (id)substitutionVariables;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemValidator : NSObject {
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property (nonatomic, readonly) NSArray *validationTests;

- (void)addCollectionValidationTests:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)dealloc;
- (void)removeValidationTest:(id)arg1;
- (bool)validateItems:(id)arg1 error:(id*)arg2;
- (bool)validateItems:(id)arg1 offers:(id)arg2 error:(id*)arg3;
- (id)validationTests;

@end

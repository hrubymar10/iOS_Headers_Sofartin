/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICAPackageView : UIView {
    CAPackage *_package;
    NSArray *_rootViews;
}

+ (id)_buildViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3;
+ (bool)_shouldCatchDecodingExceptions;
+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id)arg3;
+ (void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id)arg3;
+ (void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(id)arg3;

- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2;
- (id)publishedObjectWithName:(id)arg1;
- (id)publishedViewWithName:(id)arg1;

@end
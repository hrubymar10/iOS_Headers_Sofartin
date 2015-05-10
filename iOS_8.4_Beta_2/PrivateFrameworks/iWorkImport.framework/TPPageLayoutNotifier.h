/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageLayoutNotifier : NSObject <TPPageControllerLayoutObserver> {
    TPPageController *_pageController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)initWithPageController:(id)arg1;
- (void)pageController:(id)arg1 didLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(bool)arg4;
- (void)teardown;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKViewState : TSPObject {
    TSPObject *_viewStateRoot;
}

@property(assign,retain) TSPObject * viewStateRoot;

+ (id)viewStateWithRoot:(id)arg1 context:(id)arg2;

- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithViewStateRoot:(id)arg1 context:(id)arg2;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setViewStateRoot:(id)arg1;
- (id)viewStateRoot;

@end

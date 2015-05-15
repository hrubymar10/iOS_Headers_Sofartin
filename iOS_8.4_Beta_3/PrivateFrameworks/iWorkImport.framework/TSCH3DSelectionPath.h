/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSelectionPath : TSCHSelectionPath {
    Class mSceneObjectClass;
    unsigned long long mStyleIndex;
}

@property (nonatomic, readonly) Class sceneObjectClass;
@property (nonatomic, readonly) unsigned long long styleIndex;

+ (id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 selectionPath:(id)arg3;
+ (id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5;

- (id)initWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5;
- (Class)sceneObjectClass;
- (unsigned long long)styleIndex;

@end

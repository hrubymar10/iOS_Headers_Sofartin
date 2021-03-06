/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDNodePoint : ODDDataPoint {
    NSMutableArray *mChildren;
    ODDNodePoint *mParent;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (void)dealloc;
- (id)parent;
- (id)parentTransition;
- (void)setParentTransition:(id)arg1;
- (void)setSiblingTransition:(id)arg1;
- (void)setType:(int)arg1;
- (id)siblingTransition;

@end

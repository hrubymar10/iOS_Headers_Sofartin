/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {
    unsigned int mSheetIndex;
    EBReaderSheetState *mSheetState;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)dealloc;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;
- (bool)loadDelayedNode:(id)arg1;

@end
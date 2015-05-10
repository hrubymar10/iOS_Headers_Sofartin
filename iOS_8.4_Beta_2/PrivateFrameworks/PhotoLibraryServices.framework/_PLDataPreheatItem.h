/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface _PLDataPreheatItem : PLPreheatItem {
    PLImageTable *_imageTable;
    unsigned long long _thumbIndex;
}

- (void)dealloc;
- (id)initWithThumbIndex:(unsigned long long)arg1 imageTable:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;

@end

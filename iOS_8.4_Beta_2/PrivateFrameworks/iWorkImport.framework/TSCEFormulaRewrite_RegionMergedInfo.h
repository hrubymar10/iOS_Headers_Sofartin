/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject {
    TSCEFormulaRewrite_RegionInfo *_mergeRegion;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } _mergeSource;
}

@property(assign,readonly) TSCEFormulaRewrite_RegionInfo * mergeRegion;
@property(assign,readwrite) const struct { unsigned short x1; unsigned char x2; unsigned char x3; }* mergeSource;

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithMergeRegion:(id)arg1;
- (id)mergeRegion;
- (const struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)mergeSource;
- (void)setMergeSource:(const struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg1;

@end

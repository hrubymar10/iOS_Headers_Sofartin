/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartRangeList : NSObject {
    struct TNChartRangeNode { struct TNChartRangeNode {} *x1; struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_2_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_2_1_2; } x2; } *mNodeList;
    struct __CFUUID { } *mTableID;
    struct TSCERangeCoordinate { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mTopLeft; 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mBottomRight; 
    } mUnionRange;
    bool mUnionRangeValid;
}

@property(assign,readonly) struct __CFUUID { }* tableID;

+ (id)rangeListWithRangeRef:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
+ (id)rangeListWithTableID:(struct __CFUUID { }*)arg1;
+ (id)rangeListWithTableID:(struct __CFUUID { }*)arg1 range:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2;

- (void)addRange:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 coalesceFlags:(int)arg2;
- (bool)containsCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)containsRange:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateRangesUsingBlock:(id)arg1;
- (id)initWithTableID:(struct __CFUUID { }*)arg1;
- (id)initWithTableID:(struct __CFUUID { }*)arg1 range:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2;
- (unsigned long long)numberOfRanges;
- (struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeAtIndex:(unsigned long long)arg1;
- (struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeStartingAfterCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 direction:(int)arg2;
- (struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })rangeStartingAtCell:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 direction:(int)arg2;
- (void)removeAllRanges;
- (struct __CFUUID { }*)tableID;
- (struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })unionRange;
- (struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })unionRangeRef;

@end

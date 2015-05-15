/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating> {
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mBoundingCellRange;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mCellID;
    struct set<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> > { 
        struct __tree<TSUColumnRowRect, TSTCellRangeColumnMajorLess, std::__1::allocator<TSUColumnRowRect> > { 
            struct __tree_node<TSUColumnRowRect, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUColumnRowRect, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTCellRangeColumnMajorLess> { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    } mCellRangeSet;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })getNext;
- (id)initWithCellRegion:(id)arg1;
- (void)terminate;

@end
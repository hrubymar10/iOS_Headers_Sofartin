/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_RelocatedMergeCells : NSObject {
    struct unordered_map<TSUColumnRowCoordinate, unsigned short, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, unsigned short> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, std::__1::hash<TSUColumnRowCoordinate>, true>, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, std::__1::equal_to<TSUColumnRowCoordinate>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, std::__1::hash<TSUColumnRowCoordinate>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, unsigned short>, std::__1::equal_to<TSUColumnRowCoordinate>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _mergeRangeAdjustments;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned short)mergeRangeAdjustmentForCoord:(const struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg1;
- (void)mergeRangeAt:(const struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg1 adjustedBy:(unsigned short)arg2;

@end
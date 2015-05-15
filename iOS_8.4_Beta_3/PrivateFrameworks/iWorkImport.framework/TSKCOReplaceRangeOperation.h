/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation, TSKCOReplaceRangeOperationSubset, TSKCOTransforming> {
    TSKCORangeAddress *mAddress;
    unsigned long long mInsertLength;
    bool mPreserveLowerPriorityLocation;
}

@property (nonatomic, readonly) TSKCORangeAddress *address;
@property (nonatomic, readonly) unsigned long long insertLength;
@property (nonatomic, readonly) bool preserveLowerPriorityLocation;

- (id)address;
- (void)dealloc;
- (id)description;
- (id)fromReplaceRangeOperation:(id)arg1;
- (bool)hasNoEffects;
- (id)initWithRangeAddress:(id)arg1 insertLength:(unsigned long long)arg2;
- (id)initWithRangeAddress:(id)arg1 insertLength:(unsigned long long)arg2 noop:(bool)arg3;
- (id)initWithRangeAddress:(id)arg1 insertLength:(unsigned long long)arg2 preserveLowerPriorityLocation:(bool)arg3 noop:(bool)arg4;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; bool x6; }*)arg2;
- (unsigned long long)insertLength;
- (id)operationWithNewAddress:(id)arg1;
- (id)operationWithNewAddress:(id)arg1 newPreserveLowerPriorityLocation:(bool)arg2;
- (id)operationWithNewNoop:(bool)arg1;
- (id)p_transformReplaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementLength:(unsigned long long)arg2 myRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 myReplacementLength:(unsigned long long)arg4 preserveLocation:(bool)arg5;
- (id)p_transformUpdateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 myRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementLength:(unsigned long long)arg3 transformBehavior:(int)arg4;
- (void)p_validateAndMergeTransformedRanges:(id)arg1;
- (bool)preserveLowerPriorityLocation;
- (void)saveToArchiver:(id)arg1 message:(struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; bool x6; }*)arg2;
- (id)toReplaceRangeOperation;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(bool)arg2;
- (id)ut_transformByTransformer:(id)arg1;

@end

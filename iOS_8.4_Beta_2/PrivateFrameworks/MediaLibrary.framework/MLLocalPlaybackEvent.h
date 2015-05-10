/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
 */

@interface MLLocalPlaybackEvent : MLEntity

@property(assign,readonly) double datePlayed;
@property(assign,readonly) long long itemPid;
@property(assign,readonly) long long storeItemID;

+ (struct EntityClass { int (**x1)(); struct mutex { struct _opaque_pthread_mutex_t { long long x_1_2_1; BOOL x_1_2_2[56]; } x_2_1_1; } x2; struct unordered_map<std::__1::basic_string<char>, mlcore::ModelProperty *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelProperty *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::hash<std::__1::basic_string<char> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, mlcore::ModelProperty *>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { float x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; struct unordered_map<mlcore::ModelProperty *, mlcore::EntityClass *, std::__1::hash<mlcore::ModelProperty *>, std::__1::equal_to<mlcore::ModelProperty *>, std::__1::allocator<std::__1::pair<mlcore::ModelProperty *const, mlcore::EntityClass *> > > { struct __hash_table<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::__unordered_map_hasher<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelProperty *>, true>, std::__1::__unordered_map_equal<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelProperty *>, true>, std::__1::allocator<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::hash<mlcore::ModelProperty *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<mlcore::ModelProperty *, std::__1::__hash_value_type<mlcore::ModelProperty *, mlcore::EntityClass *>, std::__1::equal_to<mlcore::ModelProperty *>, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; }*)coreEntityClass;

- (double)datePlayed;
- (id)init;
- (id)initWithItemPid:(long long)arg1 storeItemID:(long long)arg2 datePlayed:(double)arg3;
- (id)initWithPersistentID:(long long)arg1 itemPid:(long long)arg2 storeItemID:(long long)arg3 datePlayed:(double)arg4;
- (long long)itemPid;
- (long long)storeItemID;

@end

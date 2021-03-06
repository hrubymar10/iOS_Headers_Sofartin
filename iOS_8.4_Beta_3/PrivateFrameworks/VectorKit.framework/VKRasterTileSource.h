/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTileSource : VKTileSetBackedTileSource {
    NSMutableDictionary *_genericTextureCache;
    struct unordered_map<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D>, std::__1::hash<GEOGenericTileType>, std::__1::equal_to<GEOGenericTileType>, std::__1::allocator<std::__1::pair<const GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> > > > { 
        struct __hash_table<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::__unordered_map_hasher<GEOGenericTileType, std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::hash<GEOGenericTileType>, true>, std::__1::__unordered_map_equal<GEOGenericTileType, std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::equal_to<GEOGenericTileType>, true>, std::__1::allocator<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> > > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<GEOGenericTileType, std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::hash<GEOGenericTileType>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<GEOGenericTileType, std::__1::__hash_value_type<GEOGenericTileType, std::__1::shared_ptr<ggl::Texture2D> >, std::__1::equal_to<GEOGenericTileType>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _gglGenericRasterTextureCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_fetchedTile:(id)arg1;
- (void)clearCaches;
- (void)dealloc;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTileList : NSObject {
    /* Warning: unhandled struct encoding: '{vector<VKMapTile *, std::__1::allocator<VKMapTile *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VKMapTile **, std::__1::allocator<VKMapTile *> >="__first_"^@}}' */ struct vector<VKMapTile *, std::__1::allocator<VKMapTile *> > { 
        __end_ **__begin_; 
    } _list;
    float _maximumStyleZ;
}

@property(assign,readonly) float maximumStyleZ;
@property(assign,readonly) unsigned long long numTiles;
@property(assign,readonly) id* tileList;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTileToList:(id)arg1;
- (void)clearList;
- (void)consolidateList;
- (id)init;
- (float)maximumStyleZ;
- (unsigned long long)numTiles;
- (id*)tileList;

@end
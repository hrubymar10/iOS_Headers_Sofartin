/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileMap : SKNode <NSXMLParserDelegate> {
    int _firstGid;
    int _imgHeight;
    NSString *_imgName;
    int _imgWidth;
    bool _isometric;
    int _layerHeight;
    NSString *_layerName;
    NSMutableArray *_layerTiles;
    int _layerWidth;
    bool _loaded;
    bool _loading;
    int _mapHeight;
    NSString *_mapName;
    int _mapTileHeight;
    int _mapTileWidth;
    int _mapWidth;
    int _margin;
    NSXMLParser *_parser;
    bool _skipSprites;
    int _spacing;
    int _tileHeight;
    int _tileIndex;
    int _tileWidth;
    NSString *_tilesetName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mapSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tileSize;

+ (id)tileMapWithName:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)loadMap;
- (struct CGSize { double x1; double x2; })mapSize;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (id)textureForGid:(unsigned int)arg1;
- (id)tileAtGridLocationX:(unsigned int)arg1 y:(unsigned int)arg2;
- (struct CGSize { double x1; double x2; })tileSize;

@end

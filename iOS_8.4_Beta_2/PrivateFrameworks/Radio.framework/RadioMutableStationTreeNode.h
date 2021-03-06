/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property(assign,copy) RadioArtworkCollection * artworkCollection;
@property(assign,readwrite) long long childNodeLoadingStyle;
@property(assign,copy) NSArray * childNodes;
@property(assign,readwrite) long long displayStyle;
@property(assign,readwrite) bool hasAdditionalChildNodes;
@property(assign,copy) NSString * name;
@property(assign,readwrite) long long nodeID;
@property(assign,copy) NSDictionary * stationDictionary;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setArtworkCollection:(id)arg1;
- (void)setChildNodeLoadingStyle:(long long)arg1;
- (void)setChildNodes:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setHasAdditionalChildNodes:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNodeID:(long long)arg1;
- (void)setStationDictionary:(id)arg1;

@end

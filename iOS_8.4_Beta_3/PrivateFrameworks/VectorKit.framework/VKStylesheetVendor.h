/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKStylesheetVendor : NSObject <GEOResourceManifestTileGroupObserver> {
    NSDictionary *_localizationToAttributeValue;
    NSObject<OS_dispatch_queue> *_localizationToAttributeValueQueue;
    VKResourceManager *_resourceManager;
    NSMutableDictionary *_stylesheetMap;
    NSObject<OS_dispatch_queue> *_stylesheetMapEditQueue;
    unsigned int _tileGroupIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 resourceManager:(id)arg2;
- (void)resetStylesheetCache;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (int)styleAttributeValueForLocalization:(id)arg1;
- (id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4;

@end

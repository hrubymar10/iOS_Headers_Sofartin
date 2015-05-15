/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeWatchAttributeController : NSObject {
    NRDevice *_device;
    unsigned long long _edition;
    int _material;
    unsigned long long _size;
    NSCache *_stringCache;
}

@property (nonatomic, retain) NRDevice *device;
@property (nonatomic, readonly) unsigned long long edition;
@property (nonatomic, readonly) int material;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, retain) NSCache *stringCache;

+ (id)editionDescription:(unsigned long long)arg1;
+ (id)materialDescription:(int)arg1;
+ (id)materialKeyColorForMaterial:(int)arg1;
+ (id)resourceString:(id)arg1 material:(int)arg2 size:(unsigned long long)arg3 forAttributes:(unsigned long long)arg4;
+ (id)sharedDeviceController;
+ (id)sizeDescription:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_populateMaterialDetailsWithDMinProperities:(id)arg1;
- (id)attributesDescription;
- (id)device;
- (unsigned long long)edition;
- (id)getGestaltDmin;
- (id)init;
- (int)material;
- (id)materialKeyColor;
- (id)resourceString:(id)arg1 forAttributes:(unsigned long long)arg2;
- (void)setDevice:(id)arg1;
- (void)setMaterial:(int)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStringCache:(id)arg1;
- (unsigned long long)size;
- (id)stringCache;

@end

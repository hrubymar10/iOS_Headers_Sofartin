/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataDecompressionOptions : NSObject {
    id _createBuffer;
    bool _decompressAllAtOnce;
    id _growData;
    int _windowBits;
}

@property(assign,copy) id createBuffer;
@property(assign,readwrite) bool decompressAllAtOnce;
@property(assign,copy) id growData;
@property(assign,readwrite) int windowBits;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (id)createBuffer;
- (bool)decompressAllAtOnce;
- (id)growData;
- (void)setCreateBuffer:(id)arg1;
- (void)setDecompressAllAtOnce:(bool)arg1;
- (void)setGrowData:(id)arg1;
- (void)setWindowBits:(int)arg1;
- (int)windowBits;

@end

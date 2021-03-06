/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFZlibDataCompressionOptions : NSObject {
    int _chunkSize;
    int _compressionLevel;
    int _memoryLevel;
    int _strategy;
    int _windowBits;
}

@property(assign,readwrite) int chunkSize;
@property(assign,readwrite) int compressionLevel;
@property(assign,readwrite) int memoryLevel;
@property(assign,readwrite) int strategy;
@property(assign,readwrite) int windowBits;

+ (id)defaultOptions;

- (int)chunkSize;
- (int)compressionLevel;
- (int)memoryLevel;
- (void)setChunkSize:(int)arg1;
- (void)setCompressionLevel:(int)arg1;
- (void)setCompressionStrategy:(int)arg1;
- (void)setMemoryLevel:(int)arg1;
- (void)setStrategy:(int)arg1;
- (void)setWindowBits:(int)arg1;
- (int)strategy;
- (int)windowBits;

@end

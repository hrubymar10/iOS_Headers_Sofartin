/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNowPlayingArtworkImage : MRNowPlayingArtwork {
    NSData *_imageData;
    NSString *_mimeType;
}

@property(assign,copy) NSData * imageData;
@property(assign,copy) NSString * mimeType;

- (void)bindToXPCDictionary:(id)arg1;
- (id)copyImageData;
- (void)dealloc;
- (bool)hasArtworkData;
- (id)imageData;
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mimeType;
- (unsigned int)type;

@end
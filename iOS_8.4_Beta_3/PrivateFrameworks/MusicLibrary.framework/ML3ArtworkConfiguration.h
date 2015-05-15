/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ArtworkConfiguration : NSObject {
    NSMutableDictionary *_artworkConfigurationDictionary;
    double _mainScreenScale;
    NSMutableDictionary *_supportedSizesCache;
}

@property (nonatomic, retain) NSMutableDictionary *artworkConfigurationDictionary;
@property (nonatomic) double mainScreenScale;
@property (nonatomic, retain) NSMutableDictionary *supportedSizesCache;

+ (id)systemConfiguration;

- (void).cxx_destruct;
- (id)_supportedSizeKeysForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)artworkConfigurationDictionary;
- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (double)mainScreenScale;
- (void)setArtworkConfigurationDictionary:(id)arg1;
- (void)setMainScreenScale:(double)arg1;
- (void)setSupportedSizesCache:(id)arg1;
- (id)sizesToAutogenerateForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)supportedSizesCache;
- (id)supportedSizesForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;

@end

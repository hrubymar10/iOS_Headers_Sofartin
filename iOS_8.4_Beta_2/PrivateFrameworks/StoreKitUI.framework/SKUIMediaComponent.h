/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSString *_accessibilityLabel;
    long long _alignment;
    double _duration;
    SKUILink *_link;
    long long _mediaAppearance;
    long long _mediaIdentifier;
    long long _mediaType;
    NSString *_mediaURLString;
    SKUIArtworkList *_thumbnailArtworkList;
    NSString *_title;
    float _titleFontSize;
    long long _titleFontWeight;
}

@property(assign,readonly) NSString * accessibilityLabel;
@property(assign,readonly) long long alignment;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) double duration;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) SKUILink * link;
@property(assign,readonly) long long mediaAppearance;
@property(assign,readonly) long long mediaIdentifier;
@property(assign,readonly) long long mediaType;
@property(assign,readonly) NSString * mediaURLString;
@property(assign,readonly) Class superclass;
@property(assign,readonly) SKUIArtworkList * thumbnailArtworkList;
@property(assign,readonly) NSString * title;
@property(assign,readonly) float titleFontSize;
@property(assign,readonly) long long titleFontWeight;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (long long)alignment;
- (id)bestThumbnailArtwork;
- (id)bestThumbnailForWidth:(double)arg1;
- (long long)componentType;
- (double)duration;
- (id)initWithArtwork:(id)arg1;
- (id)initWithArtworkList:(id)arg1;
- (id)initWithArtworkList:(id)arg1 appearance:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)link;
- (long long)mediaAppearance;
- (long long)mediaIdentifier;
- (long long)mediaType;
- (id)mediaURLString;
- (id)metricsElementName;
- (id)thumbnailArtworkList;
- (id)title;
- (float)titleFontSize;
- (long long)titleFontWeight;
- (id)valueForMetricsField:(id)arg1;

@end

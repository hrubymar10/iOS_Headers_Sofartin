/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBrickItem : NSObject {
    NSString *_accessibilityLabel;
    SKUIArtwork *_artwork;
    long long _brickIdentifier;
    SKUICountdown *_countdown;
    SKUIEditorialComponent *_editorial;
    SKUILink *_link;
}

@property(assign,readonly) NSString * accessibilityLabel;
@property(assign,readonly) SKUIArtwork * artwork;
@property(assign,readonly) long long brickIdentifier;
@property(assign,readonly) SKUICountdown * countdown;
@property(assign,readonly) SKUIEditorialComponent * editorial;
@property(assign,readonly) SKUILink * link;

- (void).cxx_destruct;
- (void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2;
- (void)_setLinkItem:(id)arg1;
- (id)accessibilityLabel;
- (id)artwork;
- (long long)brickIdentifier;
- (id)countdown;
- (id)description;
- (id)editorial;
- (id)initWithBannerRoomContext:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)link;

@end
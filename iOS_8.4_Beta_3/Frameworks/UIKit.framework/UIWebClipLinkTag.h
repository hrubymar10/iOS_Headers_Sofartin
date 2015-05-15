/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebClipLinkTag : NSObject {
    NSString *_href;
    bool _mediaMatchesLandscapeOrientation;
    bool _mediaMatchesPortraitOrientation;
    NSString *_rel;
    NSString *_sizes;
}

@property(assign,copy) NSString * href;
@property(assign,readonly) NSURL * hrefURL;
@property(assign,readwrite) bool mediaMatchesLandscapeOrientation;
@property(assign,readwrite) bool mediaMatchesPortraitOrientation;
@property(assign,copy) NSString * rel;
@property(assign,copy) NSString * sizes;

- (void)dealloc;
- (id)href;
- (id)hrefURL;
- (bool)mediaMatchesLandscapeOrientation;
- (bool)mediaMatchesPortraitOrientation;
- (id)rel;
- (void)setHref:(id)arg1;
- (void)setMediaMatchesLandscapeOrientation:(bool)arg1;
- (void)setMediaMatchesPortraitOrientation:(bool)arg1;
- (void)setRel:(id)arg1;
- (void)setSizes:(id)arg1;
- (id)sizes;

@end
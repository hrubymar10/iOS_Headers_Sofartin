/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationMenuItem : NSObject <NSCopying> {
    SUItemContentRating *_contentRating;
    NSString *_title;
    NSURL *_url;
}

@property(assign,readonly) NSURL * URL;
@property(assign,readonly) SUItemContentRating * contentRating;
@property(assign,readonly) NSString * title;

- (id)URL;
- (id)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)title;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftTheme : NSObject <NSCopying> {
    UIColor *_backgroundColor;
    UIColor *_bodyTextColor;
    UIImage *_headerImage;
    NSURL *_headerImageURL;
    UIColor *_primaryTextColor;
    long long _themeIdentifier;
    NSString *_themeName;
}

@property(assign,copy) UIColor * backgroundColor;
@property(assign,copy) UIColor * bodyTextColor;
@property(assign,retain) UIImage * headerImage;
@property(assign,copy) NSURL * headerImageURL;
@property(assign,copy) UIColor * primaryTextColor;
@property(assign,readwrite) long long themeIdentifier;
@property(assign,copy) NSString * themeName;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)bodyTextColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)headerImage;
- (id)headerImageURL;
- (id)initWithThemeDictionary:(id)arg1;
- (id)primaryTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setBodyTextColor:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHeaderImageURL:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setThemeIdentifier:(long long)arg1;
- (void)setThemeName:(id)arg1;
- (long long)themeIdentifier;
- (id)themeName;

@end

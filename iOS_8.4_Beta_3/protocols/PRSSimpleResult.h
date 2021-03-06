/* Generated by RuntimeBrowser.
 */

@protocol PRSSimpleResult <PRSBaseResult>

@required

- (PRSImage *)icon;
- (NSString *)section_header;
- (void)setIcon:(PRSImage *)arg1;
- (void)setSection_header:(NSString *)arg1;
- (void)setTemplateName:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)templateName;
- (NSString *)title;

@optional

- (NSArray *)card_sections;
- (NSString *)card_title;
- (NSURL *)card_url;
- (long long)description_maxlines;
- (bool)description_nowrap;
- (long long)description_size;
- (NSString *)footnote;
- (long long)footnote_maxlines;
- (bool)footnote_nowrap;
- (long long)footnote_size;
- (NSArray *)more_icons;
- (NSString *)resultDescription;
- (void)setCard_sections:(NSArray *)arg1;
- (void)setCard_title:(NSString *)arg1;
- (void)setCard_url:(NSURL *)arg1;
- (void)setDescription_maxlines:(long long)arg1;
- (void)setDescription_nowrap:(bool)arg1;
- (void)setDescription_size:(long long)arg1;
- (void)setFootnote:(NSString *)arg1;
- (void)setFootnote_maxlines:(long long)arg1;
- (void)setFootnote_nowrap:(bool)arg1;
- (void)setFootnote_size:(long long)arg1;
- (void)setMore_icons:(NSArray *)arg1;
- (void)setResultDescription:(NSString *)arg1;
- (void)setTitle_glyph:(PRSImage *)arg1;
- (void)setTitle_maxlines:(long long)arg1;
- (void)setTitle_size:(long long)arg1;
- (PRSImage *)title_glyph;
- (long long)title_maxlines;
- (long long)title_size;

@end

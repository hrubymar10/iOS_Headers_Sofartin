/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@interface Cell : NSObject <InitFromPlistProtocol> {
    NSMutableDictionary *_attributes;
    int _type;
}

@property(assign,retain) NSMutableDictionary * attributes;
@property(assign,retain) NSString * content;
@property(assign,retain) NSString * post;
@property(assign,retain) NSString * pre;
@property(assign,readonly) int type;

+ (id)blank;
+ (id)cell;
+ (id)cellWithCell:(id)arg1;
+ (id)cellWithContentString:(id)arg1;
+ (id)instanceFromPlist:(id)arg1;
+ (id)literalCellWithCell:(id)arg1;
+ (id)wildcard;

- (id)attributeForKey:(id)arg1;
- (id)attributes;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)flattened;
- (bool)hasContent;
- (id)init;
- (id)initAsBlank;
- (id)initAsWildcard;
- (id)initFromPlist:(id)arg1;
- (id)initWithAttributesDictionary:(id)arg1;
- (id)initWithContentString:(id)arg1;
- (bool)isBlank;
- (id)literalCell;
- (bool)matches:(id)arg1;
- (id)overlayedOn:(id)arg1;
- (id)post;
- (id)pre;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAttributes:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setPost:(id)arg1;
- (void)setPre:(id)arg1;
- (int)type;

@end

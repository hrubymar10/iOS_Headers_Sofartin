/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewMetadata : NSObject <NSCopying> {
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSString *_nickname;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

@property(assign,copy) NSString * body;
@property(assign,readonly) unsigned long long bodyMaxLength;
@property(assign,copy) NSString * nickname;
@property(assign,readonly) unsigned long long nicknameMaxLength;
@property(assign,readwrite) float rating;
@property(assign,readonly) NSURL * submitURL;
@property(assign,copy) NSString * title;
@property(assign,readonly) unsigned long long titleMaxLength;

- (void).cxx_destruct;
- (id)body;
- (unsigned long long)bodyMaxLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithReviewDictionary:(id)arg1;
- (id)nickname;
- (unsigned long long)nicknameMaxLength;
- (float)rating;
- (void)setBody:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setTitle:(id)arg1;
- (id)submitURL;
- (id)title;
- (unsigned long long)titleMaxLength;

@end

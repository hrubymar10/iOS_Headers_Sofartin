/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDSearchResultItem : APDGenericData <NSCopying> {
    NSString *_identifier;
    long long _matchCount;
    long long _weight;
}

@property(assign,retain) NSString * identifier;
@property(assign,readwrite) long long matchCount;
@property(assign,readwrite) long long weight;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (long long)matchCount;
- (void)setIdentifier:(id)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setWeight:(long long)arg1;
- (long long)weight;

@end

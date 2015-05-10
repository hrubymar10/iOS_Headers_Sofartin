/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGIdentityName : NSObject {
    NSString *_firstname;
    NSString *_middlename;
    NSString *_prefix;
    NSString *_privFullName;
    NSString *_suffix;
    NSString *_surname;
}

@property(assign,readonly) NSString * firstname;
@property(assign,readonly) NSString * fullName;
@property(assign,readonly) NSString * middlename;
@property(assign,readonly) NSString * prefix;
@property(assign,readonly) NSString * suffix;
@property(assign,readonly) NSString * surname;

+ (void)initialize;
+ (id)nameWithString:(id)arg1;

- (void).cxx_destruct;
- (id)firstname;
- (id)fullName;
- (id)initWithChineseName:(id)arg1;
- (id)initWithJapaneseName:(id)arg1;
- (id)initWithKoreanName:(id)arg1;
- (id)initWithSpanishName:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithVietnameseName:(id)arg1;
- (id)initWithWesternName:(id)arg1;
- (id)middlename;
- (id)prefix;
- (id)segmentWesternNameWithNameParts:(id)arg1 andPrefix:(id)arg2;
- (id)suffix;
- (id)surname;
- (id)toSGName;

@end
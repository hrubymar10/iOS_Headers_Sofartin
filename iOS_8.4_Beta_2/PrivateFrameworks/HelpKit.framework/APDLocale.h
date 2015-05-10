/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDLocale : APDGenericData {
    bool _RTL;
    bool _cache;
    NSString *_cacheHTML;
    NSString *_folder;
    NSArray *_isoCodes;
    NSString *_isoName;
    NSString *_name;
}

@property(getter=isRTL,assign,readwrite) bool RTL;
@property(assign,readwrite) bool cache;
@property(assign,copy) NSString * cacheHTML;
@property(assign,copy) NSString * folder;
@property(assign,readonly) bool isSimplifiedChinese;
@property(assign,copy) NSArray * isoCodes;
@property(assign,copy) NSString * isoName;
@property(assign,copy) NSString * name;

- (void).cxx_destruct;
- (bool)cache;
- (id)cacheHTML;
- (id)description;
- (id)folder;
- (id)initWithDictionary:(id)arg1;
- (bool)isRTL;
- (bool)isSimplifiedChinese;
- (id)isoCodes;
- (id)isoName;
- (id)name;
- (void)setCache:(bool)arg1;
- (void)setCacheHTML:(id)arg1;
- (void)setFolder:(id)arg1;
- (void)setIsoCodes:(id)arg1;
- (void)setIsoName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRTL:(bool)arg1;
- (id)simplifiedChineseFontFamilyName;

@end
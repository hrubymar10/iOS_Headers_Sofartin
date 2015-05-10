/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILocalizedIndexedCollation : NSObject {
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    NSLocale *_locale;
    NSArray *_sectionIndexMapping;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionTitles;
    struct __CFStringTokenizer { } *_tokenizer;
    NSString *_transform;
}

@property(assign,readonly) NSArray * sectionIndexTitles;
@property(assign,readonly) NSArray * sectionTitles;

+ (id)collationWithDictionary:(id)arg1;
+ (id)currentCollation;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
- (id)sectionIndexTitles;
- (id)sectionTitles;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (struct __CFStringTokenizer { }*)tokenizer;
- (id)transformedCollationStringForString:(id)arg1;

@end

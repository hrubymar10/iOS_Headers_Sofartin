/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockNewsItem : NSObject {
    NSDate *_date;
    NSString *_headline;
    NSURL *_link;
    NSString *_localizedDateString;
    NSString *_source;
    NSString *_summary;
}

@property(assign,retain) NSDate * date;
@property(assign,retain) NSString * headline;
@property(assign,retain) NSURL * link;
@property(assign,retain) NSString * localizedDateString;
@property(assign,retain) NSString * source;
@property(assign,retain) NSString * summary;

+ (id)localizedStringForDate:(id)arg1;

- (void).cxx_destruct;
- (id)archiveDictionary;
- (long long)chronologicalComparisonWithNewsItem:(id)arg1;
- (id)date;
- (id)description;
- (id)headline;
- (id)initWithArchiveDictionary:(id)arg1;
- (id)link;
- (id)localizedDateString;
- (void)resetLocale;
- (void)setDate:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)source;
- (id)summary;

@end

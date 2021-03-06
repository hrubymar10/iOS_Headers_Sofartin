/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface APDSearchModel : APDGenericModel {
    NSString *_copyrightTopicId;
    NSArray *_currentSearchResults;
    NSDictionary *_searchIndex;
    NSArray *_searchTerms;
    NSString *_searchText;
}

@property(assign,retain) NSString * copyrightTopicId;
@property(assign,retain) NSArray * currentSearchResults;
@property(assign,retain) NSDictionary * searchIndex;
@property(assign,retain) NSArray * searchTerms;
@property(assign,retain) NSString * searchText;

- (void).cxx_destruct;
- (void)clearData;
- (id)copyrightTopicId;
- (id)currentSearchResults;
- (id)indexTermsForSearchTermRoot:(id)arg1;
- (bool)processLocalDataFromLocalResource;
- (void)processRequestData:(id)arg1;
- (void)processSearchJSONData:(id)arg1;
- (id)searchIndex;
- (id)searchTerms;
- (id)searchText;
- (void)setCopyrightTopicId:(id)arg1;
- (void)setCurrentSearchResults:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)updateResultsForSearch:(id)arg1 forLocale:(struct __CFLocale { }*)arg2 withRoots:(bool)arg3;

@end

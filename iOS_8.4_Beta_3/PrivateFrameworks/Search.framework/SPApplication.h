/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPApplication : NSObject {
    NSString *_displayIdentifier;
    NSString *_displayName;
    NSMutableArray *_keywords;
    NSString *_longDisplayName;
}

@property(assign,retain) NSString * displayIdentifier;
@property(assign,retain) NSString * displayName;
@property(assign,retain) NSMutableArray * keywords;
@property(assign,retain) NSString * longDisplayName;
@property(assign,readonly) SPSearchResult * searchResult;

- (void)dealloc;
- (id)description;
- (id)displayIdentifier;
- (id)displayName;
- (id)keywords;
- (id)longDisplayName;
- (id)searchResult;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setLongDisplayName:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchOperation : NSOperation {
    PSSearchResults *_currentResults;
    <PSSearchOperationDelegate> *_delegate;
    bool _newQuery;
    NSString *_query;
    NSSet *_rootEntries;
}

@property(assign,copy) PSSearchResults * currentResults;
@property(assign,readwrite) <PSSearchOperationDelegate> * delegate;
@property(getter=isNewQuery,assign,readwrite) bool newQuery;
@property(assign,copy) NSString * query;
@property(assign,copy) NSSet * rootEntries;

+ (struct __CFStringTokenizer { }*)_wordBoundaryTokenizer;

- (void)_didCancel;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (bool)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (id)currentResults;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;
- (bool)isNewQuery;
- (void)main;
- (id)query;
- (id)rootEntries;
- (void)setDelegate:(id)arg1;
- (void)setNewQuery:(bool)arg1;

@end
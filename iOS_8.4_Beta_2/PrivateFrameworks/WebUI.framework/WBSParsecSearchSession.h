/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchSession : NSObject {
    WBSParsecSearchClient *_client;
    WBSCompletionQuery *_currentQuery;
    <WBSParsecSearchSessionDelegate> *_delegate;
    NSMutableArray *_feedbackActions;
    bool _hasRespondedToCurrentQuery;
    WBSParsecSearchResult *_lastHiddenParsecResult;
    <WBSCompletionListItem> *_lastLocalResultHidingParsecResult;
    NSMutableDictionary *_resultSetPrefixCache;
    WBSParsecSearchResultCache *_searchResultCache;
    struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { 
        struct duration<long long, std::__1::ratio<1, 1000000000> > { 
            long long __rep_; 
        } __d_; 
    } _sessionStartTimestamp;
    double _uiScale;
    NSURLSession *_urlSession;
    bool _valid;
}

@property(assign,readonly) WBSParsecSearchClient * client;
@property(assign,retain) WBSCompletionQuery * currentQuery;
@property(assign,readwrite) <WBSParsecSearchSessionDelegate> * delegate;
@property(setter=setUIScale:,assign,readwrite) double uiScale;
@property(getter=isValid,assign,readonly) bool valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_addFeedbackAction:(id)arg1;
- (void)_addParsecAndSearchSuggestionDeltaForQuery:(id)arg1 toFeedbackDictionary:(id)arg2;
- (void)_cacheResultSet:(id)arg1;
- (void)_cacheResultsFromSearchResponse:(id)arg1;
- (id)_cachedResultSetForQuery:(id)arg1;
- (bool)_canSendQuery;
- (void)_endSession;
- (void)_generateCachedSearchFeedbackForQuery:(id)arg1;
- (void)_generateSearchFeedbackForResponse:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 error:(id)arg4;
- (void)_invalidate;
- (void)_processBestResultSetOnMainThread:(id)arg1 forQuery:(id)arg2;
- (void)_processSearchResponseOnMainThread:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3;
- (void)_respondToCurrentQueryIfNeededWithResults:(id)arg1;
- (id)_searchFallbackURLForQuery:(id)arg1;
- (void)_searchRequestFailedForQuery:(id)arg1;
- (id)_searchRequestForQuery:(id)arg1;
- (id)_searchURLForQuery:(id)arg1;
- (id)_searchURLForQuery:(id)arg1 baseURL:(id)arg2;
- (void)_sendGeneratedFeedback;
- (void)_sendWarmupRequest;
- (double)_timeToFirstByteForDataTask:(id)arg1;
- (id)_urlSession;
- (id)client;
- (id)currentQuery;
- (void)dealloc;
- (id)delegate;
- (void)didDisplayCompletionListItems:(id)arg1 hidingParsecResult:(id)arg2 inFavorOfLocalResult:(id)arg3 forQuery:(id)arg4;
- (void)didReceiveLocalResultsForQuery:(id)arg1;
- (void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2;
- (id)initWithClient:(id)arg1;
- (bool)isValid;
- (void)setCurrentQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUIScale:(double)arg1;
- (double)uiScale;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)arg1;
- (void)userDidEngageWithCardShowingResult:(id)arg1 onCardOfType:(id)arg2 actionType:(id)arg3 actionTarget:(id)arg4 destination:(id)arg5;
- (void)userDidEngageWithCompletionListItem:(id)arg1 withCardActionDictionary:(id)arg2;
- (void)userDidSelectCompletionListItem:(id)arg1;

@end

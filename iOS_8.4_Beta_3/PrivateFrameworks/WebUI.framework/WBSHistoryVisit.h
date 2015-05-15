/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSHistoryVisit : NSObject {
    long long _databaseID;
    long long _generation;
    bool _httpNonGet;
    WBSHistoryItem *_item;
    bool _loadSuccessful;
    long long _origin;
    WBSHistoryVisit *_redirectDestination;
    long long _redirectDestinationDatabaseID;
    WBSHistoryVisit *_redirectSource;
    long long _redirectSourceDatabaseID;
    bool _synthesized;
    NSString *_title;
    double _visitTime;
}

@property (nonatomic) long long databaseID;
@property (nonatomic, readonly) WBSHistoryVisit *endOfRedirectChain;
@property (nonatomic) long long generation;
@property (getter=wasHTTPNonGet, nonatomic, readonly) bool httpNonGet;
@property (nonatomic) WBSHistoryItem *item;
@property (getter=loadWasSuccessful, nonatomic) bool loadSuccessful;
@property (nonatomic) long long origin;
@property (nonatomic, retain) WBSHistoryVisit *redirectDestination;
@property (nonatomic) long long redirectDestinationDatabaseID;
@property (nonatomic, retain) WBSHistoryVisit *redirectSource;
@property (nonatomic, readonly) unsigned long long redirectSourceChainLength;
@property (nonatomic) long long redirectSourceDatabaseID;
@property (getter=isSynthesized, nonatomic, readonly) bool synthesized;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) double visitTime;

+ (id)synthesizedVisitWithHistoryItem:(id)arg1 visitTime:(double)arg2;

- (void).cxx_destruct;
- (long long)databaseID;
- (id)endOfRedirectChain;
- (long long)generation;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2;
- (id)initWithHistoryItem:(id)arg1 sqliteRow:(id)arg2 baseColumnIndex:(unsigned long long)arg3;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2;
- (id)initWithHistoryItem:(id)arg1 visitTime:(double)arg2 loadWasSuccesful:(bool)arg3 wasHTTPNonGet:(bool)arg4 origin:(long long)arg5;
- (bool)isSynthesized;
- (id)item;
- (bool)loadWasSuccessful;
- (long long)origin;
- (id)redirectDestination;
- (long long)redirectDestinationDatabaseID;
- (id)redirectSource;
- (unsigned long long)redirectSourceChainLength;
- (long long)redirectSourceDatabaseID;
- (void)setDatabaseID:(long long)arg1;
- (void)setGeneration:(long long)arg1;
- (void)setItem:(id)arg1;
- (void)setLoadSuccessful:(bool)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRedirectDestination:(id)arg1;
- (void)setRedirectDestinationDatabaseID:(long long)arg1;
- (void)setRedirectSource:(id)arg1;
- (void)setRedirectSourceDatabaseID:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)visitTime;
- (bool)wasHTTPNonGet;

@end

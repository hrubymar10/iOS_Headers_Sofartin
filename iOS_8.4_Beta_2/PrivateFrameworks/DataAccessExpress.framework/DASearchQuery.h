/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DASearchQuery : NSObject {
    <DASearchQueryConsumer> *_consumer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSString *_searchID;
    NSString *_searchString;
    int _state;
    int _timeLimit;
}

@property(assign,readwrite) <DASearchQueryConsumer> * consumer;
@property(assign,readwrite) unsigned int maxResults;
@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property(assign,copy) NSString * searchID;
@property(assign,copy) NSString * searchString;
@property(assign,readwrite) int state;
@property(assign,readwrite) int timeLimit;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (void).cxx_destruct;
- (id)consumer;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (bool)isQueryRunning;
- (unsigned int)maxResults;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)searchID;
- (id)searchString;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (void)setConsumer:(id)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSearchID:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTimeLimit:(int)arg1;
- (int)state;
- (int)timeLimit;

@end
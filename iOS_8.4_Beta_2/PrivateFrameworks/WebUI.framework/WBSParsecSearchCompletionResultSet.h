/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSParsecSearchCompletionResultSet : NSObject {
    double _completionScore;
    NSString *_completionString;
    NSString *_errorCodeString;
    NSString *_feedbackQueryIdentifier;
    double _maxAge;
    NSString *_prefix;
    NSArray *_results;
    long long _status;
}

@property(assign,readonly) double completionScore;
@property(assign,readonly) NSString * completionString;
@property(assign,readonly) NSString * errorCodeString;
@property(assign,readonly) NSString * feedbackQueryIdentifier;
@property(assign,readonly) double maxAge;
@property(assign,readonly) NSString * prefix;
@property(assign,readonly) NSArray * results;
@property(assign,readonly) long long status;

+ (id)resultSetWithDictionary:(id)arg1 cache:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1 cache:(id)arg2;
- (double)completionScore;
- (id)completionString;
- (id)errorCodeString;
- (id)feedbackQueryIdentifier;
- (double)maxAge;
- (id)prefix;
- (id)results;
- (long long)status;

@end

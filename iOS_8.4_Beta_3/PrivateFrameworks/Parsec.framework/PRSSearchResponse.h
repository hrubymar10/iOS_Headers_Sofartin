/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSSearchResponse : NSObject {
    double _backOff;
    NSArray *_completionResultSets;
    NSString *_errorCodeString;
    double _maxAge;
    long long _status;
    NSString *_statusString;
}

@property(assign,readonly) double backOff;
@property(assign,readonly) NSArray * completionResultSets;
@property(assign,readonly) NSString * errorCodeString;
@property(assign,readonly) double maxAge;
@property(assign,readonly) long long status;
@property(assign,readonly) NSString * statusString;

- (void).cxx_destruct;
- (double)backOff;
- (id)completionResultSets;
- (id)description;
- (id)errorCodeString;
- (id)initWithFactory:(id)arg1 session:(id)arg2 webSearch:(bool)arg3 resourceProvider:(id)arg4 array:(id)arg5 error:(id*)arg6;
- (double)maxAge;
- (long long)status;
- (id)statusString;

@end

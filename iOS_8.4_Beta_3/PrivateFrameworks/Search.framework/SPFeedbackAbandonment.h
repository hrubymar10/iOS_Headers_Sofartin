/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackAbandonment : SPFeedback {
    unsigned long long _reason;
}

@property (nonatomic) unsigned long long reason;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;

@end

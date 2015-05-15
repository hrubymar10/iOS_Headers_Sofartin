/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedback : NSObject <NSSecureCoding> {
    unsigned int _domain;
    NSString *_fbq;
    NSString *_identifier;
    NSString *_input;
    NSArray *_results;
    double _timestamp;
}

@property(assign,readwrite) unsigned int domain;
@property(assign,copy) NSString * fbq;
@property(assign,retain) NSString * identifier;
@property(assign,retain) NSString * input;
@property(assign,retain) NSArray * results;
@property(assign,readonly) double timestamp;

+ (id)feedback;
+ (id)feedbackForSearchResult:(id)arg1 section:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)fbq;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)parsecFeedbackFromSession:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2;
- (id)results;
- (void)setDomain:(unsigned int)arg1;
- (void)setFbq:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setResults:(id)arg1;
- (double)timestamp;

@end
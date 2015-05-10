/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGDetection : NSObject {
    NSString *_context;
    NSString *_extraction;
    bool _hasPhoneLabel;
    NSString *_label;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _match;
    unsigned int _type;
}

@property(assign,readonly) NSString * context;
@property(assign,readonly) NSString * extraction;
@property(assign,readonly) bool hasPhoneLabel;
@property(assign,readonly) NSString * label;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } match;
@property(assign,readonly) unsigned int type;

+ (id)detectionWithType:(unsigned int)arg1 text:(id)arg2 matchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(bool)arg6;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)extraction;
- (bool)hasPhoneLabel;
- (id)initWithType:(unsigned int)arg1 extraction:(id)arg2 context:(id)arg3 label:(id)arg4 hasPhoneLabel:(bool)arg5 match:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (id)label;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })match;
- (unsigned int)type;

@end

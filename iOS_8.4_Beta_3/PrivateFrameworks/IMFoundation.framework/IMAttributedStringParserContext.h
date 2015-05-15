/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMAttributedStringParserContext : NSObject {
    NSAttributedString *_inString;
}

@property (readonly, retain) NSAttributedString *inString;
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSArray *resultsForLogging;
@property (readonly) bool shouldPreprocess;

- (void)dealloc;
- (id)inString;
- (id)initWithAttributedString:(id)arg1;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)parserDidEnd:(id)arg1;
- (void)parserDidStart:(id)arg1;
- (id)resultsForLogging;
- (bool)shouldPreprocess;

@end

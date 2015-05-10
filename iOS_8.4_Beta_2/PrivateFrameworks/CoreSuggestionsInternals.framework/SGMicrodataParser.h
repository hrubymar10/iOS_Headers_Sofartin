/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMicrodataParser : NSObject {
    SGMicrodataParserStackItem *_stackItem;
}

@property(assign,readonly) SGMicrodataParserStackItem * stackItem;

+ (id)parse:(id)arg1;
+ (id)whitespaceSplit:(id)arg1;

- (void).cxx_destruct;
- (void)endElement;
- (id)initWithDocument:(id)arg1;
- (id)stackItem;
- (void)startElement:(id)arg1 withAttributes:(id)arg2;
- (void)textContent:(id)arg1;

@end

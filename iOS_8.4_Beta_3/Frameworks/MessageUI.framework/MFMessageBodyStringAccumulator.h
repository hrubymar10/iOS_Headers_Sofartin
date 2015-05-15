/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {
    NSMutableString *_accumulatedString;
    bool _isFull;
    unsigned long long _lastCustomEntityTag;
    int _lastEntity;
    int _options;
    unsigned long long _remainingLength;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)accumulatedString;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
- (void)appendInnerTextWithConsumableNode:(id)arg1;
- (void)appendNewline;
- (void)appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofString:(id)arg2;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2;
- (bool)isFull;

@end
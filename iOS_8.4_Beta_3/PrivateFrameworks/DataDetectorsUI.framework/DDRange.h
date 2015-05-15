/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRange : NSObject {
    long long _endOffset;
    DOMNode *_node;
    long long _startOffset;
}

@property(assign,readwrite) long long endOffset;
@property(assign,retain) DOMNode * node;
@property(assign,readwrite) long long startOffset;

+ (id)rangeWithDOMRange:(id)arg1;

- (void)dealloc;
- (id)description;
- (long long)endOffset;
- (id)initWithDOMRange:(id)arg1;
- (id)node;
- (void)setEndOffset:(long long)arg1;
- (void)setNode:(id)arg1;
- (void)setStartOffset:(long long)arg1;
- (long long)startOffset;

@end
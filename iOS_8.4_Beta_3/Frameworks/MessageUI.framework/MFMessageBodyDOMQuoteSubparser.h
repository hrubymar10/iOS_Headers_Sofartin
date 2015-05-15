/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser {
    id _foundDedentedAttributionRangeBlock;
    id _foundTrailingEmptyQuoteRangeBlock;
    <MFMessageBodyElement_Private> *_lastUnindentedAttributionHint;
    <MFMessageBodyElement_Private> *_lastUnindentedElement;
    unsigned long long _trailingEmptyQuoteLevel;
    DOMRange *_trailingEmptyQuoteRange;
    unsigned long long _unindentedSiblingGap;
    NSMutableArray *_unindentedSiblingNodes;
}

- (void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(id)arg2;
- (void)copyBlocks;
- (void)dealloc;
- (bool)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)setFoundDedentedAttributionRangeBlock:(id)arg1;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(id)arg1;

@end
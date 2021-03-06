/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMTreeWalker : DOMObject

@property(assign,retain) DOMNode * currentNode;
@property(assign,readonly) bool expandEntityReferences;
@property(assign,readonly) <DOMNodeFilter> * filter;
@property(assign,readonly) DOMNode * root;
@property(assign,readonly) unsigned int whatToShow;

- (id)currentNode;
- (void)dealloc;
- (bool)expandEntityReferences;
- (id)filter;
- (void)finalize;
- (id)firstChild;
- (id)lastChild;
- (id)nextNode;
- (id)nextSibling;
- (id)parentNode;
- (id)previousNode;
- (id)previousSibling;
- (id)root;
- (void)setCurrentNode:(id)arg1;
- (unsigned int)whatToShow;

@end

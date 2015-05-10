/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKDocumentModelEnumerator : NSEnumerator {
    NSMutableArray *_enumeratorStack;
    id _filter;
    <TSKModel> *_root;
    bool _stop;
}

@property(assign,retain) NSMutableArray * enumeratorStack;
@property(assign,copy) id filter;
@property(assign,retain) <TSKModel> * root;

- (void)dealloc;
- (void)enumerateReferencedStylesUsingBlock:(id)arg1;
- (void)enumerateStyleClientsUsingBlock:(id)arg1;
- (void)enumerateUsingBlock:(id)arg1;
- (id)enumeratorStack;
- (id)filter;
- (id)initWithEnumerator:(id)arg1 filter:(id)arg2;
- (id)initWithRootModelObject:(id)arg1 filter:(id)arg2;
- (id)nextObject;
- (id)root;
- (void)setEnumeratorStack:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setRoot:(id)arg1;

@end

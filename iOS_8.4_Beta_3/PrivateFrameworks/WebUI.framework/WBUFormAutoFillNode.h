/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillNode : NSObject <WBSFormAutoFillNode> {
    DOMNode *_domNode;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) DOMNode * domNode;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)autoFillNodeWithDOMNode:(id)arg1;

- (void).cxx_destruct;
- (id)domNode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (id)htmlTableCellElementCellAbove;
- (id)initWithDOMNode:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (bool)isHTMLInputElementAutofilled;
- (bool)isHTMLInputElementUserEdited;
- (bool)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutofilled:(bool)arg1;

@end

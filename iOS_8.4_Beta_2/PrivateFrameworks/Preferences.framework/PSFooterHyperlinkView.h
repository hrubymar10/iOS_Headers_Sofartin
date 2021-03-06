/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate> {
    NSURL *_URL;
    SEL _action;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _linkRange;
    id _target;
    NSString *_text;
    UITextView *_textView;
}

@property(assign,retain) NSURL * URL;
@property(assign,readwrite) SEL action;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } linkRange;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) id target;
@property(assign,retain) NSString * text;

- (id)URL;
- (void)_linkify;
- (SEL)action;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })linkRange;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setAction:(SEL)arg1;
- (void)setLinkRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTarget:(id)arg1;
- (void)setText:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)target;
- (id)text;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end

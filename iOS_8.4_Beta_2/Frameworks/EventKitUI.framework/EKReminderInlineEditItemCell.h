/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderInlineEditItemCell : UITableViewCell {
    double _lastSeenContentWidth;
    EKExpandingTextView *_textView;
    double _verticalPadding;
}

@property(assign,copy) NSString * placeholder;
@property(assign,readonly) EKExpandingTextView * textView;
@property(assign,readwrite) double verticalPadding;

- (void).cxx_destruct;
- (double)_textViewWidthForContentWidth:(double)arg1;
- (double)heightNeededForContentWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setVerticalPadding:(double)arg1;
- (id)textView;
- (double)verticalPadding;

@end

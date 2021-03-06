/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDAndOthersLabel : UIView {
    NSString *_andOthers;
    UIFont *_font;
    NSArray *_items;
    NSString *_separator;
    UIColor *_textColor;
    NSString *_truncatedItemsString;
}

@property (nonatomic, readonly) double actualHeight;
@property (nonatomic, retain) NSString *andOthers;
@property (nonatomic, readonly) double desiredHeight;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *separator;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (long long)_stringDrawingOptions;
- (id)_textAttributes;
- (void)_truncateItemsToFit;
- (double)actualHeight;
- (id)andOthers;
- (double)desiredHeight;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (id)items;
- (id)separator;
- (void)setAndOthers:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCaptionLabel : UIView {
    void *_addressBook;
    NSArray *_bccRecipients;
    NSArray *_ccRecipients;
    UIButton *_moreButton;
    bool _needsLabelUpdate;
    UILabel *_recipientLabel;
    NSArray *_toRecipients;
}

@property (nonatomic) void*addressBook;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } baselinePoint;
@property (nonatomic, retain) NSArray *bccRecipients;
@property (nonatomic, retain) NSArray *ccRecipients;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) UIButton *moreButton;
@property (nonatomic, readonly) UILabel *recipientLabel;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSArray *toRecipients;

+ (id)_propertiesThatNeedLabelUpdates;
+ (id)defaultFont;

- (void)_setNeedsLabelUpdate;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;
- (void)_updateLabel;
- (void*)addressBook;
- (struct CGPoint { double x1; double x2; })baselinePoint;
- (id)bccRecipients;
- (id)ccRecipients;
- (void)clear;
- (void)dealloc;
- (id)font;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)moreButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)recipientLabel;
- (void)setAddressBook:(void*)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)text;
- (id)toRecipients;
- (id)viewForBaselineLayout;

@end

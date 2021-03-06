/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _accessoryOffset;
    UIView *_accessoryView;
    UIImageView *_chevronView;
    bool _hasChevron;
    SiriUIKeyline *_keyline;
    long long _keylineType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _textAndAccessoryInsets;
    UILabel *_textLabel;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _textOffset;
    long long _verticalAlignment;
}

@property (nonatomic) struct UIOffset { double x1; double x2; } accessoryOffset;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic) bool hasChevron;
@property (nonatomic, readonly) SiriUIKeyline *keyline;
@property (nonatomic) long long keylineType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textAndAccessoryInsets;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) struct UIOffset { double x1; double x2; } textOffset;
@property (nonatomic) long long verticalAlignment;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (struct UIOffset { double x1; double x2; })accessoryOffset;
- (id)accessoryView;
- (bool)hasChevron;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyline;
- (long long)keylineType;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setHasChevron:(bool)arg1;
- (void)setKeylineType:(long long)arg1;
- (void)setTextAndAccessoryInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTextOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textAndAccessoryInsets;
- (id)textLabel;
- (struct UIOffset { double x1; double x2; })textOffset;
- (long long)verticalAlignment;

@end

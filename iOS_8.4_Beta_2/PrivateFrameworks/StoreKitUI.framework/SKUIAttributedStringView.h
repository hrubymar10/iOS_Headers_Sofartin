/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringView : UIView {
    double _calculatedTopInset;
    bool _containsLinks;
    long long _firstLineTopInset;
    SKUIAttributedStringLayout *_layout;
    NSLayoutManager *_layoutManager;
    <SKUILinkHandler> *_linkDelegate;
    NSMutableArray *_requiredBadges;
    long long _stringTreatment;
    UITapGestureRecognizer *_tapRecognizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _textBounds;
    UIColor *_textColor;
    bool _textColorFollowsTintColor;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    UIColor *_treatmentColor;
}

@property(assign,readonly) double baselineOffset;
@property(assign,readwrite) bool containsLinks;
@property(assign,readonly) double firstBaselineOffset;
@property(assign,readwrite) long long firstLineTopInset;
@property(assign,retain) SKUIAttributedStringLayout * layout;
@property(assign,readwrite) <SKUILinkHandler> * linkDelegate;
@property(assign,copy) NSArray * requiredBadges;
@property(assign,readwrite) long long stringTreatment;
@property(assign,retain) UIColor * textColor;
@property(assign,readwrite) bool textColorFollowsTintColor;
@property(assign,retain) UIColor * treatmentColor;
@property(assign,readonly) bool usesTallCharacterSet;

+ (struct CGSize { double x1; double x2; })sizeWithLayout:(id)arg1 treatment:(long long)arg2;

- (void).cxx_destruct;
- (void)_linkTextRangeForTouchEvent:(struct CGPoint { double x1; double x2; })arg1;
- (void)_reloadTopInset;
- (void)_setupTapLocatorContainer;
- (void)_tapped:(id)arg1;
- (double)baselineOffset;
- (bool)containsLinks;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)firstBaselineOffset;
- (long long)firstLineTopInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (id)linkDelegate;
- (id)requiredBadges;
- (void)setContainsLinks:(bool)arg1;
- (void)setFirstLineTopInset:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setLinkDelegate:(id)arg1;
- (void)setRequiredBadges:(id)arg1;
- (void)setStringTreatment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (void)setTreatmentColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)stringTreatment;
- (id)textColor;
- (bool)textColorFollowsTintColor;
- (void)tintColorDidChange;
- (id)treatmentColor;
- (bool)usesTallCharacterSet;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernLabelledAtomList : UIView <MFModernAddressAtomDelegate, MFPassthroughViewProvider> {
    NSMutableArray *_addressAtoms;
    void *_addressBook;
    UIView *_baselineView;
    <MFModernLabelledAtomListDelegate> *_delegate;
    double _firstLineWidth;
    unsigned int _isChangingFrame;
    UILabel *_label;
    UIColor *_labelTextColor;
    bool _labelVisible;
    double _lineSpacing;
    unsigned int _needsReflow;
    unsigned long long _numberOfRows;
    bool _primary;
    NSDictionary *_recipients;
    NSString *_title;
    bool _usePadDisplayStyle;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) UILabel * label;
@property(assign,retain) UIColor * labelTextColor;
@property(getter=isLabelVisible,assign,readwrite) bool labelVisible;
@property(assign,readwrite) double lineSpacing;
@property(assign,readonly) unsigned long long numberOfRows;
@property(assign,readwrite) bool primary;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool usePadDisplayStyle;

+ (double)atomLineHeight;
+ (id)defaultLabelFont;
+ (id)defaultLabelTextColor;
+ (id)primaryLabelFont;
+ (double)spaceBetweenColonAndFirstAtomNaturalEdge;

- (void)_reflow;
- (void)_setNeedsReflow;
- (void)addressAtom:(id)arg1 displayStringDidChange:(id)arg2;
- (id)addressAtoms;
- (void)addressBookDidChange:(id)arg1;
- (id)atomDisplayStrings;
- (struct CGPoint { double x1; double x2; })baselinePointForRow:(unsigned long long)arg1;
- (void)crossFadeLabelVisibility:(bool)arg1 atomSeparatorStyle:(int)arg2 animationDuration:(double)arg3;
- (void)dealloc;
- (void)enumerateAddressAtomsUsingBlock:(id)arg1;
- (id)initWithLabel:(id)arg1 title:(id)arg2 totalWidth:(double)arg3 firstLineWidth:(double)arg4 addresses:(id)arg5 arePhoneNumbers:(id)arg6 atomPresentationOptions:(unsigned long long)arg7 addressBook:(void*)arg8 completionBlock:(id)arg9;
- (bool)isLabelVisible;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (id)labelText;
- (id)labelTextColor;
- (void)layoutSubviews;
- (double)lineSpacing;
- (unsigned long long)numberOfRows;
- (id)passthroughViews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)primary;
- (void)setAddressAtomScale:(double)arg1;
- (void)setAddressAtomSeparatorStyle:(int)arg1;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setAtomAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstLineWidth:(double)arg1;
- (void)setFirstLineWidth:(double)arg1 reflow:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setLabelVisible:(bool)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setUsePadDisplayStyle:(bool)arg1;
- (id)title;
- (void)updateAtomsForVIP;
- (bool)usePadDisplayStyle;

@end

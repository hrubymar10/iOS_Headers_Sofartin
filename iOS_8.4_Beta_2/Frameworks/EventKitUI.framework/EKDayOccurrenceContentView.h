/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayOccurrenceContentView : UIView {
    bool _allDay;
    bool _allDayDrawingStyle;
    NSAttributedString *_attributedContentString;
    bool _birthday;
    double _cachedLineHeight;
    UIFont *_cachedPrimaryFont;
    double _cachedPrimaryFontBottomOutset;
    double _cachedPrimaryFontTopOutset;
    UIFont *_cachedSecondaryFont;
    double _cachedSecondaryLineHeight;
    bool _cancelled;
    UIColor *_color;
    bool _declined;
    bool _facebook;
    unsigned long long _fontCompressionDegree;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _fullTextRect;
    bool _hideText;
    NSString *_location;
    double _minimumCachedLineHeight;
    bool _needsReply;
    int _occurrenceBackgroundStyle;
    bool _reduceProcessingForAnimation;
    UIColor *_secondaryTextColor;
    bool _selected;
    UIColor *_statusTextColor;
    bool _tentative;
    UIColor *_textBackgroundColor;
    double _textEndY;
    NSString *_time;
    UIColor *_timeTextColor;
    NSString *_title;
    struct CGPoint { 
        double x; 
        double y; 
    } _titleEndPoint;
    NSIndexSet *_titleMetrics;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _titleRect;
    UIColor *_titleTextColor;
    bool _usesSmallText;
}

@property(getter=isAllDay,assign,readwrite) bool allDay;
@property(getter=isAllDayDrawingStyle,assign,readwrite) bool allDayDrawingStyle;
@property(getter=isBirthday,assign,readwrite) bool birthday;
@property(getter=isCancelled,assign,readwrite) bool cancelled;
@property(assign,retain) UIColor * color;
@property(getter=isDeclined,assign,readwrite) bool declined;
@property(getter=isFacebook,assign,readwrite) bool facebook;
@property(assign,readwrite) bool hideText;
@property(assign,copy) NSString * location;
@property(assign,readwrite) bool needsReply;
@property(assign,readwrite) int occurrenceBackgroundStyle;
@property(assign,readwrite) bool reduceProcessingForAnimation;
@property(assign,retain) UIColor * secondaryTextColor;
@property(assign,readwrite) bool selected;
@property(getter=isTentative,assign,readwrite) bool tentative;
@property(assign,retain) UIColor * textBackgroundColor;
@property(assign,copy) NSString * time;
@property(assign,retain) UIColor * timeTextColor;
@property(assign,copy) NSString * title;
@property(assign,retain) UIColor * titleTextColor;
@property(assign,readwrite) bool usesSmallText;

+ (id)defaultPrimaryTextFont;
+ (id)defaultSecondaryTextFont;
+ (id)defaultSmallPrimaryTextFont;
+ (Class)layerClass;

- (void).cxx_destruct;
- (double)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForText;
- (void)_getLanguageAwareOutsets;
- (void)_invalidateCachedFonts;
- (void)_invalidateMetrics;
- (double)_minimumPrimaryFontLineHeight;
- (double)_primaryFontLineHeight;
- (id)_primaryTextFont;
- (double)_secondaryFontLineHeight;
- (id)_secondaryText;
- (id)_secondaryTextFont;
- (struct CGSize { double x1; double x2; })_spaceForText;
- (id)_statusText;
- (id)_statusTextFont;
- (id)_timeText;
- (id)_timeTextFont;
- (id)attributedContentString;
- (id)attributedContentStringUnconstrained:(bool)arg1;
- (double)attributedStringMinimumLineHeight;
- (double)bottomTextOutset;
- (id)color;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hasIcon;
- (bool)hideText;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateCachedFontMetrics;
- (bool)isAllDay;
- (bool)isAllDayDrawingStyle;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isFacebook;
- (bool)isTentative;
- (id)location;
- (double)minimumNaturalHeightAllText;
- (double)minimumNaturalHeightForPrimaryText;
- (bool)needsReply;
- (int)occurrenceBackgroundStyle;
- (bool)reduceProcessingForAnimation;
- (id)secondaryTextColor;
- (bool)selected;
- (void)setAllDay:(bool)arg1;
- (void)setAllDayDrawingStyle:(bool)arg1;
- (void)setBirthday:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCancelled:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(bool)arg1;
- (void)setFacebook:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideText:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsReply:(bool)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setReduceProcessingForAnimation:(bool)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTentative:(bool)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsesSmallText:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusTextColor;
- (id)strikethroughColor;
- (id)stringDrawingContext;
- (id)textBackgroundColor;
- (double)textNaturalWidth;
- (id)time;
- (id)timeTextColor;
- (id)title;
- (id)titleTextColor;
- (double)topTextOutset;
- (bool)usesSmallText;

@end

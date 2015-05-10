/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassFieldView : UIView {
    long long _background;
    struct CGSize { 
        double width; 
        double height; 
    } _cachedSize;
    PKPassColorProfile *_colorProfile;
    PKDiffView *_diffView;
    PKPassField *_field;
    PKPassFieldTemplate *_fieldTemplate;
    UILabel *_labelLabel;
    bool _needsRecalculation;
    UILabel *_valueLabel;
}

@property(assign,retain) PKPassColorProfile * colorProfile;
@property(assign,retain) PKDiffView * diffView;
@property(assign,retain) PKPassField * field;
@property(assign,retain) PKPassFieldTemplate * fieldTemplate;
@property(assign,readonly) UILabel * labelLabel;
@property(assign,readonly) UILabel * valueLabel;

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;

- (id)_labelAttributedStringForColorProfile:(id)arg1 background:(long long)arg2;
- (struct CGSize { double x1; double x2; })_resizeMultiLineValueFontForAvailableSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldDisplayLabel;
- (id)_valueAttributedStringForColorProfile:(id)arg1 background:(long long)arg2;
- (id)colorProfile;
- (void)dealloc;
- (id)description;
- (id)diffView;
- (id)field;
- (id)fieldTemplate;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;
- (void)invalidateCachedFieldSize;
- (id)labelLabel;
- (void)layoutSubviews;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;
- (void)setColorProfile:(id)arg1;
- (void)setColorProfile:(id)arg1 background:(long long)arg2;
- (void)setDiffView:(id)arg1;
- (void)setField:(id)arg1;
- (void)setFieldTemplate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)valueLabel;

@end
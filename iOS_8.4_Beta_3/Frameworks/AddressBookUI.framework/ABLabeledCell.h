/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabeledCell : ABContactCell {
    UIImageView *_chevron;
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
}

@property(assign,readonly) double bottomBaselineConstant;
@property(assign,readonly) UIImageView * chevron;
@property(assign,readonly) double chevronWidth;
@property(assign,readonly) NSString * labelString;
@property(assign,copy) NSDictionary * labelTextAttributes;
@property(assign,readonly) UIView<ABText> * labelView;
@property(assign,readonly) UIView * rightMostView;
@property(assign,readonly) UILabel * standardLabelView;
@property(assign,readonly) UILabel * standardValueView;
@property(assign,readonly) double topBaselineConstant;
@property(assign,readonly) NSString * valueString;
@property(assign,copy) NSDictionary * valueTextAttributes;
@property(assign,readonly) UIView<ABText> * valueView;

+ (bool)wantsChevron;
+ (bool)wantsHorizontalLayout;
+ (bool)wantsStandardConstraints;

- (double)bottomBaselineConstant;
- (id)chevron;
- (double)chevronWidth;
- (id)constantConstraints;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForStandardLayout;
- (id)constantConstraintsForVerticalLayout;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelString;
- (id)labelTextAttributes;
- (id)labelView;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setBackgroundColor:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (id)standardLabelView;
- (id)standardValueView;
- (void)tintColorDidChange;
- (double)topBaselineConstant;
- (id)valueString;
- (id)valueTextAttributes;
- (id)valueView;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)variableConstraintsForVerticalLayout;

@end
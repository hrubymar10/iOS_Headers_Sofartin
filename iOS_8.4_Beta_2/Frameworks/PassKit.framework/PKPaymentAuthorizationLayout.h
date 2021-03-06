/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationLayout : NSObject <UITraitEnvironment> {
    double _contentHeightPadding;
    double _contentMargin;
    UIViewController *_controller;
    double _headerMargin;
    double _valueLeftMargin;
}

@property(assign,readonly) double contentHeightPadding;
@property(assign,readonly) double contentMargin;
@property(assign,readwrite) UIViewController * controller;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) double headerMargin;
@property(assign,readonly) Class superclass;
@property(assign,readonly) UITraitCollection * traitCollection;
@property(assign,readonly) double valueLeftMargin;

- (double)contentHeightPadding;
- (double)contentMargin;
- (id)controller;
- (double)headerMargin;
- (id)initWithController:(id)arg1;
- (void)setController:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (double)valueLeftMargin;

@end

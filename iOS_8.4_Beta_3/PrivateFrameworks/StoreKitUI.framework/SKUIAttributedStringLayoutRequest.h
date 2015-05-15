/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringLayoutRequest : NSObject <SKUILayoutRequest> {
    NSAttributedString *_attributedString;
    long long _numberOfLines;
    bool _wantsBaselineOffset;
    double _width;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class layoutClass;
@property (nonatomic) long long numberOfLines;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsBaselineOffset;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAttributedString:(id)arg1;
- (Class)layoutClass;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (void)setWantsBaselineOffset:(bool)arg1;
- (void)setWidth:(double)arg1;
- (bool)wantsBaselineOffset;
- (double)width;

@end

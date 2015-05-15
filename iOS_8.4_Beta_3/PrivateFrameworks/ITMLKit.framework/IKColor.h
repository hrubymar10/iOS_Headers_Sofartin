/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColor : NSObject <NSCopying> {
    UIColor *_color;
    long long _colorType;
    NSArray *_gradientColors;
    long long _gradientDirectionType;
    long long _gradientType;
}

@property(assign,retain) UIColor * color;
@property(assign,readwrite) long long colorType;
@property(assign,copy) NSArray * gradientColors;
@property(assign,readwrite) long long gradientDirectionType;
@property(assign,readwrite) long long gradientType;

- (void).cxx_destruct;
- (id)color;
- (long long)colorType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)gradientColors;
- (long long)gradientDirectionType;
- (long long)gradientType;
- (id)initWithColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorType:(long long)arg1;
- (void)setGradientColors:(id)arg1;
- (void)setGradientDirectionType:(long long)arg1;
- (void)setGradientType:(long long)arg1;

@end

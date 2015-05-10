/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTimeFormatter : NSFormatter {
    double _formatTemplate;
    unsigned int _fullWidth;
    long long _style;
}

@property(assign,readwrite) double formatTemplate;
@property(getter=isFullWidth,assign,readwrite) bool fullWidth;
@property(assign,readwrite) long long style;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)formatTemplate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFullWidth;
- (void)setFormatTemplate:(double)arg1;
- (void)setFullWidth:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (long long)style;

@end

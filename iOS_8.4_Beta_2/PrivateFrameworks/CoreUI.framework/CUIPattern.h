/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPattern : NSObject {
    double _alpha;
    struct CGPattern { } *_pattern;
    struct CGImage { } *_patternImage;
}

@property(assign,readwrite) double alpha;

- (struct CGPattern { }*)_newPattern;
- (double)alpha;
- (void)dealloc;
- (id)description;
- (id)initWithImageRef:(struct CGImage { }*)arg1;
- (struct CGPattern { }*)pattern;
- (struct CGImage { }*)patternImageRef;
- (void)setAlpha:(double)arg1;
- (void)setPatternInContext:(struct CGContext { }*)arg1;

@end

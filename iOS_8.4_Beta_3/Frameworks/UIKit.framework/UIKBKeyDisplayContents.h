/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyDisplayContents : NSObject {
    long long _displayPathType;
    NSString *_displayString;
    NSString *_displayStringImage;
    UIKBKeyDisplayContents *_fallbackContents;
    bool _fillPath;
    bool _force1xImages;
    NSArray *_highlightedVariantsList;
    bool _isCustomGlyph;
    NSString *_secondaryDisplayString;
    NSString *_secondaryDisplayStringImage;
    bool _secondaryIsCustomGlyph;
    bool _stringKeycapOverImage;
    NSArray *_variantDisplayContents;
}

@property(assign,readwrite) long long displayPathType;
@property(assign,retain) NSString * displayString;
@property(assign,retain) NSString * displayStringImage;
@property(assign,retain) UIKBKeyDisplayContents * fallbackContents;
@property(assign,readwrite) bool fillPath;
@property(assign,readwrite) bool force1xImages;
@property(assign,retain) NSArray * highlightedVariantsList;
@property(assign,readwrite) bool isCustomGlyph;
@property(assign,retain) NSString * secondaryDisplayString;
@property(assign,retain) NSString * secondaryDisplayStringImage;
@property(assign,readwrite) bool secondaryIsCustomGlyph;
@property(assign,readwrite) bool stringKeycapOverImage;
@property(assign,retain) NSArray * variantDisplayContents;

+ (id)displayContents;

- (void)dealloc;
- (id)description;
- (long long)displayPathType;
- (id)displayString;
- (id)displayStringImage;
- (id)fallbackContents;
- (bool)fillPath;
- (bool)force1xImages;
- (id)highlightedVariantsList;
- (bool)isCustomGlyph;
- (id)secondaryDisplayString;
- (id)secondaryDisplayStringImage;
- (bool)secondaryIsCustomGlyph;
- (void)setDisplayPathType:(long long)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayStringImage:(id)arg1;
- (void)setFallbackContents:(id)arg1;
- (void)setFillPath:(bool)arg1;
- (void)setForce1xImages:(bool)arg1;
- (void)setHighlightedVariantsList:(id)arg1;
- (void)setIsCustomGlyph:(bool)arg1;
- (void)setSecondaryDisplayString:(id)arg1;
- (void)setSecondaryDisplayStringImage:(id)arg1;
- (void)setSecondaryIsCustomGlyph:(bool)arg1;
- (void)setStringKeycapOverImage:(bool)arg1;
- (void)setVariantDisplayContents:(id)arg1;
- (bool)stringKeycapOverImage;
- (id)variantDisplayContents;

@end

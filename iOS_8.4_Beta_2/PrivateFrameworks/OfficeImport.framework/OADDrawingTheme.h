/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawingTheme : NSObject {
    OADColorMap *mColorMap;
    <OADColorPalette> *mColorPalette;
    OADColorScheme *mColorScheme;
    OADFontScheme *mFontScheme;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mShapeDefaults;
    OADStyleMatrix *mStyleMatrix;
    OADDefaultProperties *mTextDefaults;
}

@property(assign,readonly) OADColorMap * colorMap;
@property(assign,retain) <OADColorPalette> * colorPalette;
@property(assign,retain) OADColorScheme * colorScheme;
@property(assign,readonly) OADFontScheme * fontScheme;
@property(assign,readonly) OADDefaultProperties * lineDefaults;
@property(assign,readonly) OADDefaultProperties * shapeDefaults;
@property(assign,readonly) OADStyleMatrix * styleMatrix;
@property(assign,readonly) OADDefaultProperties * textDefaults;

- (void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2;
- (id)colorMap;
- (id)colorPalette;
- (id)colorScheme;
- (void)dealloc;
- (id)fontScheme;
- (id)initWithStyleMatrix:(id)arg1 fontScheme:(id)arg2 colorScheme:(id)arg3 colorMap:(id)arg4 colorPalette:(id)arg5;
- (id)initWithTheme:(id)arg1 colorMap:(id)arg2 colorPalette:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lineDefaults;
- (void)setColorPalette:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (id)shapeDefaults;
- (id)styleMatrix;
- (id)textDefaults;

@end

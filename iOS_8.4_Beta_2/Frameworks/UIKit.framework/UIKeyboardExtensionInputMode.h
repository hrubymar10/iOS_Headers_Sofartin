/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {
    NSExtension *_extension;
}

@property(assign,retain) NSExtension * extension;

- (id)containingBundle;
- (id)containingBundleDisplayName;
- (void)dealloc;
- (bool)defaultLayoutIsASCIICapable;
- (id)displayName;
- (id)extendedDisplayName;
- (id)extension;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAllowedForTraits:(id)arg1;
- (bool)isDefaultRightToLeft;
- (bool)isDesiredForTraits:(id)arg1 forceASCIICapable:(bool)arg2;
- (bool)isExtensionInputMode;
- (id)normalizedIdentifierLevels;
- (void)setExtension:(id)arg1;

@end

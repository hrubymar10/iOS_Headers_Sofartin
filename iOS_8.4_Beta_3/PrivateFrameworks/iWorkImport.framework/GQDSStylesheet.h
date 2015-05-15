/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSStylesheet : NSObject {
    struct __CFDictionary { } *mIdentifiedStyles;
    GQDSStylesheet *mParent;
    GQDRoot *mRoot;
    struct __CFArray { } *mStylesNeedingParentResolution;
    struct __CFArray { } *mStylesNeedingParentResolutionInParent;
}

- (void)addStyle:(id)arg1 needingParentResolution:(const char *)arg2 resolveInParent:(bool)arg3;
- (void)addStyle:(id)arg1 withOwnedIdentifier:(char *)arg2;
- (bool)addStyle:(id)arg1 withOwnedXmlUid:(char *)arg2;
- (void)dealloc;
- (id)initWithRoot:(id)arg1;
- (id)parent;
- (void)resolveStyleParents;
- (struct __CFArray { }*)retainedArrayOfIdentifiedStyles;
- (id)styleWithIdentifier:(const char *)arg1;
- (id)styleWithXmlUid:(const char *)arg1;

@end

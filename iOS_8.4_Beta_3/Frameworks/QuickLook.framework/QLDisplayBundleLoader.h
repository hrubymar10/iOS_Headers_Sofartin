/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDisplayBundleLoader : NSObject {
    NSMutableDictionary *_displayBundlesById;
}

+ (id)sharedLoader;

- (void)_lookForDisplayBundles;
- (id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2;
- (void)dealloc;
- (Class)displayBundleClassForDocumentType:(id)arg1;
- (id)init;
- (Class)loadDisplayBundle:(id)arg1;

@end

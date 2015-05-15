/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextContainerContentSizeUpdater : NSObject {
    NSString *_lastSeenPreferredContentSizeCategory;
    <MPUTextContainer> *_textContainer;
}

@property(assign,retain) NSString * lastSeenPreferredContentSizeCategory;
@property(assign,readwrite) <MPUTextContainer> * textContainer;

- (void).cxx_destruct;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_updateTextStyleFonts;
- (void)dealloc;
- (void)ensureTextStyleFontsMatchPreferredTextStyleFonts;
- (id)init;
- (id)lastSeenPreferredContentSizeCategory;
- (void)setLastSeenPreferredContentSizeCategory:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (id)textContainer;

@end
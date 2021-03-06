/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacement : NSObject {
    NSString *_menuTitle;
    NSString *_originalText;
    UITextRange *_range;
    NSString *_replacementText;
    unsigned int _usageTrackingMask;
}

@property(assign,readonly) NSString * menuTitle;
@property(assign,readonly) NSString * originalText;
@property(assign,readonly) UITextRange * range;
@property(assign,readonly) NSString * replacementText;
@property(assign,readwrite) unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;

- (void)dealloc;
- (id)menuTitle;
- (id)originalText;
- (id)range;
- (id)replacementText;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (unsigned int)usageTrackingMask;

@end

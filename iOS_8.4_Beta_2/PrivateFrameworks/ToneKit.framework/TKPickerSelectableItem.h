/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKPickerSelectableItem : TKPickerRowItem {
    NSString *_detailText;
    bool _showsCheckmark;
    bool _showsDisclosureIndicator;
    NSString *_text;
    bool _textCentered;
}

@property(assign,copy) NSString * detailText;
@property(assign,readwrite) bool showsCheckmark;
@property(assign,readwrite) bool showsDisclosureIndicator;
@property(assign,copy) NSString * text;
@property(getter=isTextCentered,assign,readwrite) bool textCentered;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setDetailText:(id)arg1;
- (void)_setShowsCheckmark:(bool)arg1;
- (void)_setShowsDisclosureIndicator:(bool)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextCentered:(bool)arg1;
- (void)dealloc;
- (id)detailText;
- (bool)isTextCentered;
- (bool)showsCheckmark;
- (bool)showsDisclosureIndicator;
- (id)text;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardAutocorrectionController : NSObject {
    TIAutocorrectionList *_autocorrectionList;
    bool _deferredAutocorrection;
    bool _needsAutocorrection;
    bool _requestedAutocorrection;
}

@property(assign,readonly) TIKeyboardCandidate * autocorrection;
@property(assign,retain) TIAutocorrectionList * autocorrectionList;
@property(assign,readwrite) bool deferredAutocorrection;
@property(assign,readwrite) bool needsAutocorrection;
@property(assign,readwrite) bool requestedAutocorrection;

- (id)autocorrection;
- (id)autocorrectionList;
- (void)clearAutocorrection;
- (void)dealloc;
- (bool)deferredAutocorrection;
- (bool)hasAutocorrection;
- (bool)needsAutocorrection;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (bool)requestedAutocorrection;
- (void)setAutocorrectionList:(id)arg1;
- (void)setDeferredAutocorrection:(bool)arg1;
- (void)setNeedsAutocorrection;
- (void)setNeedsAutocorrection:(bool)arg1;
- (void)setRequestedAutocorrection:(bool)arg1;
- (void)updateSuggestionViews;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
}

@property(assign,retain) TIDocumentState * documentState;
@property(assign,retain) TITextInputTraits * textInputTraits;

+ (id)stateForKeyboardState:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createDocumentStateIfNecessary;
- (void)dealloc;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (id)textInputTraits;

@end
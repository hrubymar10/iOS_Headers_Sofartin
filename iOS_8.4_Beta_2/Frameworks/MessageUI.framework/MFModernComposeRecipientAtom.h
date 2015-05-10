/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernComposeRecipientAtom : MFModernAtomView {
    <MFComposeRecipientAtomDelegate> *_delegate;
    MFComposeRecipient *_recipient;
    unsigned int _touchesWereCancelled;
    UITextInputTraits *_traits;
    unsigned int _wasSelectedWhenTouchesBegan;
}

@property(assign,readwrite) <MFComposeRecipientAtomDelegate> * delegate;
@property(assign,readonly) MFComposeRecipient * recipient;

- (void)dealloc;
- (id)delegate;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)keyCommands;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (id)recipient;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIHostedTextServiceSession : _UITextServiceSession {
    <_UIHostedTextServiceSessionDelegate> *_delegate;
}

@property(assign,readwrite) <_UIHostedTextServiceSessionDelegate> * delegate;

+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;

- (id)delegate;
- (void)dismissTextServiceAnimated:(bool)arg1;
- (void)remoteSessionDidDismiss;
- (void)setDelegate:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard> {
    <IKAppKeyboardBridge> *_appBridge;
    NSString *_text;
}

@property(assign,retain) <IKAppKeyboardBridge> * appBridge;
@property(assign,copy) NSString * text;

- (void).cxx_destruct;
- (id)appBridge;
- (void)setAppBridge:(id)arg1;
- (void)setText:(id)arg1;
- (void)setUserInputText:(id)arg1;
- (id)text;

@end
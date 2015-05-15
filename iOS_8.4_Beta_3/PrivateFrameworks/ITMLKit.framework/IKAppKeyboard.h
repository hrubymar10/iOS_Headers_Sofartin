/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {
    IKAppContext *_appContext;
    <IKAppKeyboardDelegate> *_delegate;
    NSString *_featureName;
    IKJSKeyboard *_jsKeyboard;
    NSString *_text;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKAppKeyboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (setter=setJSKeyboard:, nonatomic) IKJSKeyboard *jsKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)jsKeyboard;
- (void)setDelegate:(id)arg1;
- (void)setJSKeyboard:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)textDidChangeForJSKeyboard:(id)arg1;

@end

/* Generated by RuntimeBrowser.
 */

@protocol _NCWidgetViewController_Service_IPC

@required

- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(NSUUID *)arg1;
- (void)__performUpdateWithReplyHandler:(id)arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(id)arg1;
- (void)__setWidgetIdentifier:(NSString *)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 requestIdentifier:(NSUUID *)arg2;

@end
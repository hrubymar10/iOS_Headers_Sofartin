/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {
    MPAudioVideoRoutingActionSheet *_actionSheet;
    UIWebDocumentView *_delegate;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAVRoutingController *_routingController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_dismissAirPlayRoutePickerIPad;
- (void)_presentAirPlayPopoverAnimated:(bool)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_windowDidRotate:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)show:(bool)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showAirPlayPickerIPad:(unsigned long long)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)showAirPlayPickerIPhone:(unsigned long long)arg1;

@end

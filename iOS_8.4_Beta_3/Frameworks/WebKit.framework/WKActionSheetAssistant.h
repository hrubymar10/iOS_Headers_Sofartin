/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheetAssistant : NSObject <DDDetectionControllerInteractionDelegate, WKActionSheetDelegate> {
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate> > { 
        id m_weakReference; 
    } _delegate;
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    } _elementInfo;
    struct RetainPtr<WKActionSheet> { 
        void *m_ptr; 
    } _interactionSheet;
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKActionSheetAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForSheetGivenPoint:(struct CGPoint { double x1; double x2; })arg1 inHostView:(id)arg2;
- (void)cleanupSheet;
- (void)dealloc;
- (id)delegate;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet;
- (bool)presentSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet;
- (void)setDelegate:(id)arg1;
- (void)showDataDetectorsSheet;
- (void)showImageSheet;
- (void)showLinkSheet;
- (id)superviewForSheet;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end

/* Generated by RuntimeBrowser.
 */

@protocol WKActionSheetAssistantDelegate <NSObject>

@required

- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(int)arg2;
- (const struct InteractionInformationAtPosition { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_9_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_9_1_2; } x9; struct RefPtr<WebKit::ShareableBitmap> { struct ShareableBitmap {} *x_10_1_1; } x10; }*)positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional

- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@end

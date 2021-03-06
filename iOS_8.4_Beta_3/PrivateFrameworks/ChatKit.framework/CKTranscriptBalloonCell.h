/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptBalloonCell : CKTranscriptMessageCell {
    CKBalloonView *_balloonView;
    UILabel *_drawerLabel;
    NSAttributedString *_drawerText;
    bool _drawerTextChanged;
    struct CGSize { 
        double width; 
        double height; 
    } _drawerTextSize;
    bool _drawerWasVisible;
}

@property (nonatomic, retain) CKBalloonView *balloonView;
@property (nonatomic, retain) UILabel *drawerLabel;
@property (nonatomic, copy) NSAttributedString *drawerText;
@property (nonatomic) bool drawerTextChanged;
@property (nonatomic) struct CGSize { double x1; double x2; } drawerTextSize;
@property (nonatomic) bool drawerWasVisible;

- (id)balloonView;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)drawerLabel;
- (id)drawerText;
- (bool)drawerTextChanged;
- (struct CGSize { double x1; double x2; })drawerTextSize;
- (bool)drawerWasVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForDrawer;
- (void)setBalloonView:(id)arg1;
- (void)setDrawerLabel:(id)arg1;
- (void)setDrawerText:(id)arg1;
- (void)setDrawerTextChanged:(bool)arg1;
- (void)setDrawerTextSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDrawerWasVisible:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;

@end

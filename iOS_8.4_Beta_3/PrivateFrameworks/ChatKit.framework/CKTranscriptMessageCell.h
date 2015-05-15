/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptMessageCell : CKTranscriptCell {
    CKBalloonImageView *_contactImageView;
    UIButton *_failureButton;
    bool _wantsContactImageLayout;
}

@property (nonatomic, retain) UIImage *contactImage;
@property (nonatomic, retain) CKBalloonImageView *contactImageView;
@property (nonatomic) bool failed;
@property (nonatomic, retain) UIButton *failureButton;
@property (nonatomic) bool wantsContactImageLayout;

+ (double)failureButtonWidthPlusSpacing;

- (id)contactImage;
- (id)contactImageView;
- (void)dealloc;
- (id)description;
- (bool)failed;
- (id)failureButton;
- (void)layoutSubviewsForContents;
- (void)setContactImage:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setFailed:(bool)arg1;
- (void)setFailureButton:(id)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (bool)wantsContactImageLayout;

@end

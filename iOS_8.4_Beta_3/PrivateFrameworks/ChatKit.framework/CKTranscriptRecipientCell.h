/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptRecipientCell : UITableViewCell {
    UIImage *_contactImage;
    UIImageView *_contactImageView;
    NSString *_entityName;
    UIButton *_facetimeVideoButton;
    UIButton *_infoButton;
    UILabel *_locationLabel;
    NSString *_locationString;
    UIButton *_mailButton;
    double _margin;
    UILabel *_nameLabel;
    UIButton *_phoneButton;
    bool _showFaceTimeVideoButton;
    bool _showInfoButton;
    bool _showMailButton;
    bool _showPhoneButton;
    bool _showsLocation;
    NSMutableArray *_visibleButtons;
}

@property(assign,retain) UIImage * contactImage;
@property(assign,retain) UIImageView * contactImageView;
@property(assign,copy) NSString * entityName;
@property(assign,retain) UIButton * facetimeVideoButton;
@property(assign,retain) UIButton * infoButton;
@property(assign,retain) UILabel * locationLabel;
@property(assign,copy) NSString * locationString;
@property(assign,retain) UIButton * mailButton;
@property(assign,readwrite) double margin;
@property(assign,retain) UILabel * nameLabel;
@property(assign,retain) UIButton * phoneButton;
@property(assign,readwrite) bool showFaceTimeVideoButton;
@property(assign,readwrite) bool showInfoButton;
@property(assign,readwrite) bool showMailButton;
@property(assign,readwrite) bool showPhoneButton;
@property(assign,readwrite) bool showsLocation;
@property(assign,retain) NSMutableArray * visibleButtons;

+ (id)identifier;
+ (double)marginWidth;
+ (double)preferredHeight;

- (void)_updateVisibleButtons;
- (id)contactImage;
- (id)contactImageView;
- (void)dealloc;
- (id)entityName;
- (id)facetimeVideoButton;
- (id)infoButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)locationLabel;
- (id)locationString;
- (id)mailButton;
- (double)margin;
- (id)nameLabel;
- (id)phoneButton;
- (void)setContactImage:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setFacetimeVideoButton:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setLocationString:(id)arg1;
- (void)setMailButton:(id)arg1;
- (void)setMargin:(double)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPhoneButton:(id)arg1;
- (void)setShowFaceTimeVideoButton:(bool)arg1;
- (void)setShowInfoButton:(bool)arg1;
- (void)setShowMailButton:(bool)arg1;
- (void)setShowPhoneButton:(bool)arg1;
- (void)setShowsLocation:(bool)arg1;
- (void)setVisibleButtons:(id)arg1;
- (bool)showFaceTimeVideoButton;
- (bool)showInfoButton;
- (bool)showMailButton;
- (bool)showPhoneButton;
- (bool)showsLocation;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)visibleButtons;

@end

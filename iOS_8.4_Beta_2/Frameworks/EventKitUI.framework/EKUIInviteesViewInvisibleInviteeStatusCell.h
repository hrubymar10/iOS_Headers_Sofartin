/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewInvisibleInviteeStatusCell : UITableViewCell {
    UILabel *_commentLabel;
    double _leftInset;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_nameBaselineToTopConstraint;
    UILabel *_nameLabel;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
}

@property(assign,retain) UILabel * commentLabel;
@property(assign,readwrite) double leftInset;
@property(assign,retain) NSLayoutConstraint * minimumHeightConstraint;
@property(assign,retain) NSLayoutConstraint * nameBaselineToTopConstraint;
@property(assign,retain) UILabel * nameLabel;
@property(assign,retain) NSArray * persistentConstraints;
@property(assign,retain) NSArray * removableConstraints;

+ (id)_commentLabelFont;
+ (id)_nameLabelFont;

- (void).cxx_destruct;
- (id)commentLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)leftInset;
- (id)minimumHeightConstraint;
- (id)nameBaselineToTopConstraint;
- (id)nameLabel;
- (id)persistentConstraints;
- (id)removableConstraints;
- (void)setCommentLabel:(id)arg1;
- (void)setLeftInset:(double)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setNameBaselineToTopConstraint:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setRemovableConstraints:(id)arg1;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1;

@end

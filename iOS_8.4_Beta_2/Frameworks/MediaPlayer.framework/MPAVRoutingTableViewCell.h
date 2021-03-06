/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingTableViewCell : UITableViewCell {
    bool _debugCell;
    <MPAVRoutingTableViewCellDelegate> *_delegate;
    UILabel *_mirroringLabel;
    UIView *_mirroringSeparatorView;
    UISwitch *_mirroringSwitch;
    bool _mirroringSwitchVisible;
    MPAVRoute *_route;
}

@property(getter=isDebugCell,assign,readwrite) bool debugCell;
@property(assign,readwrite) <MPAVRoutingTableViewCellDelegate> * delegate;
@property(assign,readwrite) bool mirroringSwitchVisible;
@property(assign,retain) MPAVRoute * route;

- (void).cxx_destruct;
- (void)_configureLabel:(id)arg1;
- (void)_mirroringSwitchValueDidChange:(id)arg1;
- (bool)_shouldShowMirroringAsEnabledForRoute:(id)arg1;
- (id)delegate;
- (bool)isDebugCell;
- (void)layoutSubviews;
- (bool)mirroringSwitchVisible;
- (id)route;
- (void)setDebugCell:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1 animated:(bool)arg2;
- (void)setRoute:(id)arg1;

@end

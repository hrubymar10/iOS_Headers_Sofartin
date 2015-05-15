/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFPersonCollectionViewCell : UICollectionViewCell {
    long long _cellState;
    SFCircleProgressView *_circleProgressView;
    bool _darkStyleOnLegacyApp;
    UILabel *_declinedLabel;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
    UILabel *_failedLabel;
    UILabel *_nameLabel;
    CALayer *_nameLabelMaskLayer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _nameLabelOneLineFrame;
    double _nameLabelOriginY;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _nameLabelTwoLinesFrame;
    SFAirDropNode *_person;
    _SFPersonImageView *_personImageView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _personViewFrame;
    NSProgress *_progress;
    NSArray *_progressKeyPaths;
    id _progressToken;
    UILabel *_secondaryNameLabel;
    UILabel *_sendingLabel;
    UILabel *_sentLabel;
    NSString *_sessionID;
    bool _stateBeingRestored;
    UIColor *_textColor;
    UILabel *_waitingLabel;
}

@property(assign,readwrite) long long cellState;
@property(assign,readwrite) bool darkStyleOnLegacyApp;
@property(assign,readwrite) NSObject<SFPersonCollectionViewCellDelegate> * delegate;
@property(assign,retain) SFAirDropNode * person;
@property(assign,retain) NSProgress * progress;
@property(assign,retain) NSString * sessionID;
@property(assign,readwrite) bool stateBeingRestored;
@property(assign,retain) UIColor * textColor;

- (void).cxx_destruct;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)animateCellShow:(bool)arg1 delay:(double)arg2 completion:(id)arg3;
- (long long)cellState;
- (id)createLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)darkStyleOnLegacyApp;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)person;
- (void)prepareForReuse;
- (id)progress;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)resetNameLabel;
- (void)resetPersonIconView;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (id)sessionID;
- (void)setCellState:(long long)arg1;
- (void)setCellState:(long long)arg1 animated:(bool)arg2;
- (void)setDarkStyleOnLegacyApp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStateBeingRestored:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (bool)stateBeingRestored;
- (void)switchToStatusLabel:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)textColor;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updateNameLabel;
- (void)updatePersonIconView;
- (void)userDidCancel;
- (void)userDidSelect;
- (id)visibleStatusLabel;

@end
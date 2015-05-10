/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallContainerDataSource, TPStarkPhoneCallContainerDelegate> {
    TPStarkPhoneCallContainer *_container;
    <TPStarkPhoneCallGalleryViewDelegate> *_delegate;
}

@property(assign,retain) TPStarkPhoneCallContainer * container;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <TPStarkPhoneCallGalleryViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)statusStringForDisplayForCall:(id)arg1;

- (void)addPrimaryPhoneCall:(id)arg1 animated:(bool)arg2;
- (id)container;
- (void)dealloc;
- (id)delegate;
- (void)endPhoneCall:(id)arg1 animated:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)mergePrimaryPhoneCallsAnimated:(bool)arg1;
- (id)mergedCalls;
- (id)mergedStringForMergedCalls;
- (unsigned long long)numberOfViewCellsForPhoneCallContainer:(id)arg1;
- (bool)phoneCallContainer:(id)arg1 cellIsDimmedAtIndex:(unsigned long long)arg2;
- (void)phoneCallContainer:(id)arg1 phoneCallViewTappedAtIndex:(unsigned long long)arg2;
- (id)phoneCallContainer:(id)arg1 subtitleForViewCellAtIndex:(unsigned long long)arg2;
- (id)phoneCallContainer:(id)arg1 titleForViewCellAtIndex:(unsigned long long)arg2;
- (void)phoneCallDataDidChange:(id)arg1;
- (id)phoneCallForIndex:(unsigned long long)arg1 isMerged:(bool*)arg2;
- (id)primaryCalls;
- (void)reloadPhoneCallData;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsShowingCallFailure:(bool)arg1;
- (void)startListeningForCallNotifications;
- (void)stopListeningForCallNotifications;

@end

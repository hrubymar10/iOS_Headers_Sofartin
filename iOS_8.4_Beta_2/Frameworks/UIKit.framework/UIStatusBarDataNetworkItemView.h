/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    int _dataNetworkType;
    bool _enableRSSI;
    bool _showRSSI;
    int _wifiStrengthBars;
    int _wifiStrengthRaw;
}

- (id)_dataNetworkImage;
- (id)_stringForRSSI;
- (id)contentsImage;
- (double)extraLeftPadding;
- (double)maximumOverlap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

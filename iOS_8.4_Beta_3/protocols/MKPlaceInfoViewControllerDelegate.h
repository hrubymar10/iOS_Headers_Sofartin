/* Generated by RuntimeBrowser.
 */

@protocol MKPlaceInfoViewControllerDelegate <NSObject>

@required

- (void)infoViewController:(MKPlaceInfoViewController *)arg1 didSelectDeal:(id <MKMapItemVendorDeal>)arg2;
- (bool)shouldShowDirectionsForInfoViewController:(MKPlaceInfoViewController *)arg1;
- (bool)shouldShowFlyoverTourForInfoViewController:(MKPlaceInfoViewController *)arg1;
- (bool)shouldShowInlineMapForInfoViewController:(MKPlaceInfoViewController *)arg1;

@end
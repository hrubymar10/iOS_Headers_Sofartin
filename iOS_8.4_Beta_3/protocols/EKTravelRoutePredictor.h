/* Generated by RuntimeBrowser.
 */

@protocol EKTravelRoutePredictor <NSObject>

@required

- (EKTravelAgendaItem *)agendaItem;
- (id)initWithSource:(CLLocation *)arg1 destination:(CLLocation *)arg2 arrivalDate:(NSDate *)arg3 travelMethod:(int)arg4;
- (void)setAgendaItem:(EKTravelAgendaItem *)arg1;
- (void)updateLocation:(CLLocation *)arg1 handler:(id)arg2;

@end

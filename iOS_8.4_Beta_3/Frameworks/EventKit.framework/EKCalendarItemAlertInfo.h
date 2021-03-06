/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarItemAlertInfo : NSObject <NSCopying> {
    bool _acknowledged;
    NSURL *_action;
    NSString *_alarmID;
    bool _allDay;
    NSString *_dismissalID;
    NSDate *_endDate;
    NSURL *_entityID;
    NSDate *_eventDate;
    NSTimeZone *_eventTimeZone;
    NSString *_externalID;
    NSDate *_firstDateAlertedForTravelAdvice;
    struct { 
        double latitude; 
        double longitude; 
    } _geoLocationCoordinates;
    bool _hasGeoLocationCoordinates;
    bool _hasOrganizerThatIsNotCurrentUser;
    bool _isOffsetFromTravelTimeStart;
    NSDate *_lastFireTimeOfAlertOffsetFromTravelTime;
    <EKTravelAdvice> *_latestTravelAdvice;
    NSString *_location;
    NSString *_organizerEmailAddress;
    long long _proximity;
    NSString *_publisherBulletinID;
    NSString *_startLocationRouting;
    bool _tentative;
    NSString *_title;
}

@property (nonatomic, readonly) bool acknowledged;
@property (nonatomic, readonly) NSURL *action;
@property (nonatomic, readonly) NSString *alarmID;
@property (nonatomic, readonly) bool allDay;
@property (nonatomic, readonly) NSString *dismissalID;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSURL *entityID;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, retain) NSDate *firstDateAlertedForTravelAdvice;
@property (nonatomic) struct { double x1; double x2; } geoLocationCoordinates;
@property (nonatomic) bool hasGeoLocationCoordinates;
@property (nonatomic) bool hasOrganizerThatIsNotCurrentUser;
@property (nonatomic, readonly) bool isOffsetFromTravelTimeStart;
@property (nonatomic, retain) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (nonatomic, retain) <EKTravelAdvice> *latestTravelAdvice;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, retain) NSString *organizerEmailAddress;
@property (nonatomic, readonly) long long proximity;
@property (nonatomic, readonly) NSString *publisherBulletinID;
@property (nonatomic, readonly) NSString *recordID;
@property (nonatomic, retain) NSString *startLocationRouting;
@property (nonatomic, readonly) bool tentative;
@property (nonatomic, readonly) NSString *title;

- (bool)acknowledged;
- (id)action;
- (id)alarmID;
- (bool)allDay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dismissalID;
- (id)endDate;
- (id)entityID;
- (id)eventDate;
- (id)eventTimeZone;
- (id)externalID;
- (id)firstDateAlertedForTravelAdvice;
- (struct { double x1; double x2; })geoLocationCoordinates;
- (bool)hasGeoLocationCoordinates;
- (bool)hasOrganizerThatIsNotCurrentUser;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 location:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 allDay:(bool)arg6 tentative:(bool)arg7 publisherBulletinID:(id)arg8 entityID:(id)arg9 action:(id)arg10 proximity:(long long)arg11 externalID:(id)arg12 acknowledged:(bool)arg13 dismissalID:(id)arg14 alarmID:(id)arg15 isOffsetFromTravelTimeStart:(bool)arg16;
- (bool)isEqual:(id)arg1;
- (bool)isOffsetFromTravelTimeStart;
- (id)lastFireTimeOfAlertOffsetFromTravelTime;
- (id)latestTravelAdvice;
- (id)location;
- (id)organizerEmailAddress;
- (long long)proximity;
- (id)publisherBulletinID;
- (id)recordID;
- (void)setFirstDateAlertedForTravelAdvice:(id)arg1;
- (void)setGeoLocationCoordinates:(struct { double x1; double x2; })arg1;
- (void)setHasGeoLocationCoordinates:(bool)arg1;
- (void)setHasOrganizerThatIsNotCurrentUser:(bool)arg1;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(id)arg1;
- (void)setLatestTravelAdvice:(id)arg1;
- (void)setOrganizerEmailAddress:(id)arg1;
- (void)setStartLocationRouting:(id)arg1;
- (id)startLocationRouting;
- (bool)tentative;
- (id)title;

@end

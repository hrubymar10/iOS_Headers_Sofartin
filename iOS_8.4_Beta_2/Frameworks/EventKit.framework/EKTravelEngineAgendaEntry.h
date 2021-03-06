/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngineAgendaEntry : NSObject {
    EKTravelAdvisor *_advisor;
    EKTravelAgendaItem *_agendaItem;
    bool _dismissed;
    NSString *_eventExternalURL;
}

@property(assign,retain) EKTravelAdvisor * advisor;
@property(assign,retain) EKTravelAgendaItem * agendaItem;
@property(assign,readwrite) bool dismissed;
@property(assign,retain) NSString * eventExternalURL;

- (id)advisor;
- (id)agendaItem;
- (void)dealloc;
- (id)description;
- (bool)dismissed;
- (id)eventExternalURL;
- (id)init;
- (void)setAdvisor:(id)arg1;
- (void)setAgendaItem:(id)arg1;
- (void)setDismissed:(bool)arg1;
- (void)setEventExternalURL:(id)arg1;

@end

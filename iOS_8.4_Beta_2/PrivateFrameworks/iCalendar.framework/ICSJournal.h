/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSJournal : ICSComponent

@property(assign,retain) NSArray * attach;
@property(assign,retain) NSArray * attendee;
@property(assign,readwrite) int classification;
@property(assign,retain) ICSDate * created;
@property(assign,retain) NSString * description;
@property(assign,retain) ICSDate * dtstamp;
@property(assign,retain) ICSDate * dtstart;
@property(assign,retain) NSArray * exdate;
@property(assign,retain) NSArray * exrule;
@property(assign,retain) ICSDate * last_modified;
@property(assign,retain) ICSUserAddress * organizer;
@property(assign,retain) NSArray * rdate;
@property(assign,retain) ICSDate * recurrence_id;
@property(assign,retain) NSArray * rrule;
@property(assign,readwrite) unsigned long long sequence;
@property(assign,readwrite) int status;
@property(assign,retain) NSString * summary;
@property(assign,retain) NSString * uid;
@property(assign,retain) NSURL * url;

+ (id)name;

- (bool)validate:(id*)arg1;

@end
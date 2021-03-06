/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarInfo : NSObject {
    EKCalendar *_calendar;
    UIColor *_color;
    int _customGroupType;
    EKGroupInfo *_group;
    bool _selected;
    NSString *_title;
}

@property(assign,retain) EKCalendar * calendar;
@property(assign,retain) UIColor * color;
@property(assign,readwrite) int customGroupType;
@property(assign,readonly) int displayOrder;
@property(assign,readonly) bool excludeFromSelectAll;
@property(assign,readwrite) EKGroupInfo * group;
@property(assign,readonly) UIImage * highlightedIcon;
@property(assign,readonly) UIImage * icon;
@property(assign,readonly) bool isEditable;
@property(assign,readonly) bool isPublished;
@property(assign,readonly) bool isShared;
@property(assign,readonly) bool isSubscribed;
@property(assign,readwrite) bool selected;
@property(assign,copy) NSString * title;

- (void).cxx_destruct;
- (void)_updateCustomGroupType;
- (id)calendar;
- (id)color;
- (int)customGroupType;
- (id)description;
- (int)displayOrder;
- (bool)excludeFromSelectAll;
- (id)group;
- (id)highlightedIcon;
- (id)icon;
- (id)initWithCalendar:(id)arg1;
- (bool)isEditable;
- (bool)isPublished;
- (bool)isShared;
- (bool)isSubscribed;
- (bool)selected;
- (void)setCalendar:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCustomGroupType:(int)arg1;
- (void)setGroup:(id)arg1;
- (void)setSelected:(bool)arg1;
- (id)title;

@end

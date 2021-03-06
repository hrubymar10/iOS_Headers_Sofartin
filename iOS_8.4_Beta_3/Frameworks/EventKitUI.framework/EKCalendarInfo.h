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

@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) int customGroupType;
@property (nonatomic, readonly) int displayOrder;
@property (nonatomic, readonly) bool excludeFromSelectAll;
@property (nonatomic) EKGroupInfo *group;
@property (nonatomic, readonly) UIImage *highlightedIcon;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic, readonly) bool isPublished;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) bool isSubscribed;
@property (nonatomic) bool selected;
@property (nonatomic, readonly, copy) NSString *title;

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

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKReminderPredicate : EKPredicate {
    bool _completed;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    bool _limitToCompletedOrIncomplete;
    NSString *_listTitle;
    unsigned long long _maxResults;
    NSString *_searchTerm;
    int _sortOrder;
    NSString *_title;
    bool _useCompletionDateAsAlternate;
    bool _useDueDateAsCompletionDate;
}

@property (nonatomic) bool completed;
@property (nonatomic, retain) NSDate *dueAfter;
@property (nonatomic, retain) NSDate *dueBefore;
@property (nonatomic) bool limitToCompletedOrIncomplete;
@property (nonatomic, retain) NSString *listTitle;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic, retain) NSString *searchTerm;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool useCompletionDateAsAlternate;
@property (nonatomic) bool useDueDateAsCompletionDate;

+ (id)predicateWithCalendars:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dueAfter;
- (id)dueBefore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)limitToCompletedOrIncomplete;
- (id)listTitle;
- (unsigned long long)maxResults;
- (id)searchTerm;
- (void)setCompleted:(bool)arg1;
- (void)setDueAfter:(id)arg1;
- (void)setDueBefore:(id)arg1;
- (void)setLimitToCompletedOrIncomplete:(bool)arg1;
- (void)setListTitle:(id)arg1;
- (void)setMaxResults:(unsigned long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseCompletionDateAsAlternate:(bool)arg1;
- (void)setUseDueDateAsCompletionDate:(bool)arg1;
- (int)sortOrder;
- (id)title;
- (bool)useCompletionDateAsAlternate;
- (bool)useDueDateAsCompletionDate;

@end

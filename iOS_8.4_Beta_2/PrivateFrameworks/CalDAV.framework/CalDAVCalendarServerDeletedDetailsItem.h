/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {
    NSString *_componentType;
    NSString *_displayName;
    bool _hadMoreInstances;
    ICSDateValue *_nextInstance;
    NSString *_summary;
}

@property(assign,retain) NSString * componentType;
@property(assign,retain) NSString * displayName;
@property(assign,readwrite) bool hadMoreInstances;
@property(assign,retain) ICSDateValue * nextInstance;
@property(assign,retain) NSString * summary;

- (id)componentType;
- (id)copyParseRules;
- (void)dealloc;
- (id)displayName;
- (bool)hadMoreInstances;
- (id)init;
- (id)nextInstance;
- (void)setComponentType:(id)arg1;
- (void)setComponentTypeItem:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameItem:(id)arg1;
- (void)setHadMoreInstances:(bool)arg1;
- (void)setHadMoreInstancesItem:(id)arg1;
- (void)setNextInstance:(id)arg1;
- (void)setNextInstanceItem:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setSummaryItem:(id)arg1;
- (id)summary;

@end

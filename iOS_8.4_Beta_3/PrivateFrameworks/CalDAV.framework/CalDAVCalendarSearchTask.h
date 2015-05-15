/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarSearchTask : CoreDAVTask {
    NSString *_calendarType;
    NSArray *_languages;
    NSString *_location;
    NSDictionary *_urlsToResults;
}

@property(assign,retain) NSDictionary * urlsToResults;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4;
- (id)requestBody;
- (id)urlsToResults;

@end
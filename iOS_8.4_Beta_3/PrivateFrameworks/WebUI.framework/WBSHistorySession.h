/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSHistorySession : NSObject {
    NSDate *_startDate;
}

@property(assign,readonly) bool isCurrentSession;
@property(assign,readonly) NSDate * startDate;

+ (id)currentSession;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSessionStartDate:(id)arg1;
- (bool)isCurrentSession;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
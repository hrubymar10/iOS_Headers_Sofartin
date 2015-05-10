/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDHistoryWindow : NSObject {
    double _duration;
    double _recurrenceDelta;
    double _recurrenceWidth;
    NSDate *_start;
}

@property(assign,readonly) double duration;
@property(assign,readonly) double recurrenceDelta;
@property(assign,readonly) double recurrenceWidth;
@property(assign,readonly) NSDate * start;

+ (id)allTimeHistoryWindow;
+ (id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3;
+ (id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id*)arg5;
- (double)recurrenceDelta;
- (double)recurrenceWidth;
- (id)start;

@end
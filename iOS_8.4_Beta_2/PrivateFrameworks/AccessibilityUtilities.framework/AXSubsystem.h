/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSubsystem : NSObject

+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (int)defaultLogLevel;
+ (int)effectiveLogLevel;
+ (id)errorWithDescription:(id)arg1;
+ (id)identifier;
+ (void)initialize;
+ (void)resetPreferredLogLevel;
+ (void)setPreferredLogLevel:(int)arg1;
+ (void)setShouldLogToFile:(bool)arg1;
+ (bool)shouldIncludeBacktraceInLogs;
+ (bool)shouldLogToFile;
+ (bool)shouldProcessMessageForLogs;
+ (id)subsystems;
+ (bool)willLog;
+ (id)wrapError:(id)arg1 description:(id)arg2;

@end

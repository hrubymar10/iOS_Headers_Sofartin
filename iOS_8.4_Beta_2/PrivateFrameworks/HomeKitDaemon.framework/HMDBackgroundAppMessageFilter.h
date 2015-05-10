/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackgroundAppMessageFilter : HMDMessageFilter {
    NSMutableSet *_pidOfAppsRunningInBackground;
}

@property(assign,retain) NSMutableSet * pidOfAppsRunningInBackground;

+ (bool)isWhitelistedMessage:(id)arg1;

- (void).cxx_destruct;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)initWithName:(id)arg1;
- (id)pidOfAppsRunningInBackground;
- (void)setPidOfAppsRunningInBackground:(id)arg1;
- (void)updateAppWithPid:(int)arg1 runningInBackground:(bool)arg2;

@end

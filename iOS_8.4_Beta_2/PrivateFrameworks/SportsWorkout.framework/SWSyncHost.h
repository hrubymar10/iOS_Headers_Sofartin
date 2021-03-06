/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWSyncHost : NSObject {
    NSString *_hostName;
    bool _secure;
}

@property(assign,readonly) NSString * hostName;
@property(assign,readonly) NSString * scheme;
@property(getter=isSecure,assign,readwrite) bool secure;

+ (id)developmentSyncHost;
+ (id)productionLandingPageHost;
+ (id)productionSyncHost;

- (void)dealloc;
- (id)generatePINServiceURL;
- (id)generateTokenServiceURL;
- (id)getPINStatusServiceURL;
- (id)hostName;
- (id)initWithHostName:(id)arg1 secure:(bool)arg2;
- (bool)isSecure;
- (id)loginURLForToken:(id)arg1;
- (id)scheme;
- (void)setSecure:(bool)arg1;
- (id)syncCompleteServiceURL;
- (id)syncServiceURL;

@end

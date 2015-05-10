/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMUserNotification : NSObject {
    id _reserved;
}

@property(assign,readonly) unsigned long long displayFlags;
@property(assign,retain) NSDictionary * displayInformation;
@property(assign,retain) id identifier;
@property(assign,retain) NSString * representedApplicationBundle;
@property(assign,readonly) unsigned long long response;
@property(assign,readonly) unsigned long long responseFlags;
@property(assign,retain) NSDictionary * responseInformation;
@property(assign,readwrite) bool showInLockScreen;
@property(assign,readonly) double timeout;
@property(assign,retain) NSDictionary * userInfo;
@property(assign,readwrite) bool usesNotificationCenter;

+ (id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5;
+ (id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6;

- (id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4;
- (void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2;
- (void)dealloc;
- (unsigned long long)displayFlags;
- (id)displayInformation;
- (id)identifier;
- (id)representedApplicationBundle;
- (unsigned long long)response;
- (unsigned long long)responseFlags;
- (id)responseInformation;
- (void)setRepresentedApplicationBundle:(id)arg1;
- (void)setShowInLockScreen:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUsesNotificationCenter:(bool)arg1;
- (bool)showInLockScreen;
- (double)timeout;
- (id)userInfo;
- (bool)usesNotificationCenter;

@end

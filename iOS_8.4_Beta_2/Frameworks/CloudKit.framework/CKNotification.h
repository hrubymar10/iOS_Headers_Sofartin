/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotification : NSObject <NSSecureCoding> {
    NSString *_alertActionLocalizationKey;
    NSString *_alertBody;
    NSString *_alertLaunchImage;
    NSArray *_alertLocalizationArgs;
    NSString *_alertLocalizationKey;
    NSNumber *_badge;
    NSString *_containerIdentifier;
    bool _isPruned;
    CKNotificationID *_notificationID;
    long long _notificationType;
    NSString *_soundName;
}

@property(assign,copy) NSString * alertActionLocalizationKey;
@property(assign,copy) NSString * alertBody;
@property(assign,copy) NSString * alertLaunchImage;
@property(assign,copy) NSArray * alertLocalizationArgs;
@property(assign,copy) NSString * alertLocalizationKey;
@property(assign,copy) NSNumber * badge;
@property(assign,copy) NSString * containerIdentifier;
@property(assign,readwrite) bool isPruned;
@property(assign,copy) CKNotificationID * notificationID;
@property(assign,readwrite) long long notificationType;
@property(assign,copy) NSString * soundName;

+ (id)_realNotificationFromRemoteNotificationDictionary:(id)arg1;
+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initBare;
- (id)alertActionLocalizationKey;
- (id)alertBody;
- (id)alertLaunchImage;
- (id)alertLocalizationArgs;
- (id)alertLocalizationKey;
- (id)badge;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (bool)isPruned;
- (bool)isRead;
- (id)notificationID;
- (long long)notificationType;
- (void)setAlertActionLocalizationKey:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertLocalizationArgs:(id)arg1;
- (void)setAlertLocalizationKey:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setIsPruned:(bool)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setNotificationType:(long long)arg1;
- (void)setSoundName:(id)arg1;
- (id)soundName;

@end

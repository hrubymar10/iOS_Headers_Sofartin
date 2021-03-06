/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
 */

@interface NGSGlance : NSObject <NSCopying> {
    bool _active;
    NSString *_appBundleIdentifier;
    bool _cannotBeDisabled;
    bool _defaultGlance;
    NSString *_glanceBundleIdentifier;
    bool _installed;
    NSString *_name;
    bool _prelaunch;
    NSString *_sockPuppetIdentifier;
}

@property(getter=isActive,assign,readwrite) bool active;
@property(assign,copy) NSString * appBundleIdentifier;
@property(assign,readwrite) bool cannotBeDisabled;
@property(getter=isDefaultGlance,assign,readwrite) bool defaultGlance;
@property(assign,copy) NSString * glanceBundleIdentifier;
@property(assign,readonly) NSString * glanceIdentifier;
@property(getter=isInstalled,assign,readwrite) bool installed;
@property(assign,copy) NSString * name;
@property(assign,readwrite) bool prelaunch;
@property(assign,copy) NSString * sockPuppetIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (bool)cannotBeDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)glanceBundleIdentifier;
- (id)glanceIdentifier;
- (id)initWithDictionary:(id)arg1;
- (bool)isActive;
- (bool)isDefaultGlance;
- (bool)isInstalled;
- (id)name;
- (bool)prelaunch;
- (void)setActive:(bool)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCannotBeDisabled:(bool)arg1;
- (void)setDefaultGlance:(bool)arg1;
- (void)setGlanceBundleIdentifier:(id)arg1;
- (void)setInstalled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPrelaunch:(bool)arg1;
- (void)setSockPuppetIdentifier:(id)arg1;
- (id)sockPuppetIdentifier;

@end

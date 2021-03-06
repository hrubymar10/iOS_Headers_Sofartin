/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterManager : NSObject {
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
    NSArray *_entitlements;
    bool _hasLoaded;
}

@property(assign,retain) NEConfiguration * configuration;
@property(assign,readonly) NEConfigurationManager * configurationManager;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,retain) NSArray * entitlements;
@property(assign,readwrite) bool hasLoaded;
@property(assign,copy) NSString * localizedDescription;
@property(assign,retain) NEContentFilterPlugin * pluginConfiguration;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationManager;
- (void)createEmptyConfiguration;
- (id)entitlements;
- (bool)hasLoaded;
- (id)init;
- (id)initFilterManager;
- (bool)isEnabled;
- (void)loadFromPreferencesWithCompletionHandler:(id)arg1;
- (id)localizedDescription;
- (id)pluginConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPluginConfiguration:(id)arg1;

@end

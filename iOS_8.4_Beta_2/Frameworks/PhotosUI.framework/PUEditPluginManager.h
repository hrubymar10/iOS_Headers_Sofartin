/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditPluginManager : NSObject {
    NSArray *__plugins;
    long long _mediaType;
}

@property(setter=_setPlugins:,assign,copy) NSArray * _plugins;
@property(assign,readonly) long long mediaType;

+ (id)sharedManagerForMediaType:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithMediaType:(long long)arg1;
- (id)_plugins;
- (void)_setPlugins:(id)arg1;
- (bool)hasPlugins;
- (long long)mediaType;
- (id)pluginActivities;
- (void)rediscoverAvailablePlugins;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoute : NSObject {
    NSDictionary *_avRouteDescription;
    long long _displayRouteType;
    long long _pickableRouteType;
    bool _picked;
    bool _requiresPassword;
    NSString *_routeName;
    long long _routeSubtype;
    long long _routeType;
    NSString *_routeUID;
    MPAVRoute *_wirelessDisplayRoute;
}

@property(assign,readonly) bool displayIsPicked;
@property(assign,readonly) long long displayRouteType;
@property(assign,readonly) long long passwordType;
@property(assign,readonly) long long pickableRouteType;
@property(getter=isPicked,assign,readonly) bool picked;
@property(assign,readonly) long long rc_audioRouteType;
@property(assign,readonly) bool rc_shouldExpectFaceContact;
@property(assign,readonly) bool requiresPassword;
@property(assign,readonly) NSString * routeName;
@property(assign,readonly) long long routeSubtype;
@property(assign,readonly) long long routeType;
@property(assign,readonly) NSString * routeUID;
@property(assign,readonly) MPAVRoute * wirelessDisplayRoute;

- (void).cxx_destruct;
- (id)_initWithAVRouteDescription:(id)arg1;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (id)avRouteDescription;
- (void)dealloc;
- (id)description;
- (bool)displayIsPicked;
- (long long)displayRouteType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPicked;
- (long long)passwordType;
- (long long)pickableRouteType;
- (long long)rc_audioRouteType;
- (bool)rc_shouldExpectFaceContact;
- (bool)requiresPassword;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(long long)arg1;
- (void)setPicked:(bool)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (id)wirelessDisplayRoute;

@end
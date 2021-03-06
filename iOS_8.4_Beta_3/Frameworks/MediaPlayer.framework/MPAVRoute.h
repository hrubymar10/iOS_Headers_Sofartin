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

@property (nonatomic, readonly) bool displayIsPicked;
@property (nonatomic, readonly) long long displayRouteType;
@property (nonatomic, readonly) long long passwordType;
@property (nonatomic, readonly) long long pickableRouteType;
@property (getter=isPicked, nonatomic, readonly) bool picked;
@property (nonatomic, readonly) long long rc_audioRouteType;
@property (nonatomic, readonly) bool rc_shouldExpectFaceContact;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSString *routeUID;
@property (nonatomic, readonly) MPAVRoute *wirelessDisplayRoute;

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

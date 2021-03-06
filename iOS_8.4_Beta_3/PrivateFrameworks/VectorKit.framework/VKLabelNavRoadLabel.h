/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavRoadLabel : NSObject {
    long long _alignment;
    float _desiredOffsetDistance;
    NSString *_displayGroup;
    unsigned int _displayID;
    struct shared_ptr<vk::NavLabel> { 
        struct NavLabel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _label;
    <VKLabelNavFeature> *_navFeature;
    int _navLabelType;
}

@property (nonatomic) long long alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (nonatomic, readonly) bool isJunctionLabel;
@property (nonatomic, readonly) bool isRoadLabel;
@property (nonatomic, readonly) bool isShieldLabel;
@property (nonatomic, readonly) const struct shared_ptr<vk::NavLabel> { struct NavLabel {} *x1; struct __shared_weak_count {} *x2; }*label;
@property (nonatomic) <VKLabelNavFeature> *navFeature;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)alignment;
- (void)dealloc;
- (id)description;
- (float)desiredOffsetDistance;
- (id)displayGroup;
- (unsigned int)displayID;
- (id)initWithNavFeature:(id)arg1 label:(const struct shared_ptr<vk::NavLabel> { struct NavLabel {} *x1; struct __shared_weak_count {} *x2; }*)arg2 navLabelType:(int)arg3;
- (bool)isJunctionLabel;
- (bool)isRoadLabel;
- (bool)isShieldLabel;
- (const struct shared_ptr<vk::NavLabel> { struct NavLabel {} *x1; struct __shared_weak_count {} *x2; }*)label;
- (id)navFeature;
- (void)setAlignment:(long long)arg1;
- (void)setDesiredOffsetDistance:(float)arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setNavFeature:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRoadTrafficMapModel : VKVectorMapModel {
    bool _enabled;
    VKRoadMapModel *_roadModel;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> > { 
        struct __compressed_pair<vk::TrafficManager *, std::__1::default_delete<vk::TrafficManager> > { 
            struct TrafficManager {} *__first_; 
        } __ptr_; 
    } _trafficManager;
}

@property(assign,readwrite) bool enabled;
@property(assign,retain) VKRoadMapModel * roadModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (bool)enabled;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (id)roadModel;
- (void)setEnabled:(bool)arg1;
- (void)setRoadModel:(id)arg1;
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;

@end
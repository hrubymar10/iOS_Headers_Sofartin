/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIImageResource : NSObject {
    NSString *_localPressedResourceName;
    SAUIAppPunchOut *_localPunchOut;
    NSBundle *_localResourceBundle;
    NSString *_localResourceName;
    struct CGSize { 
        double width; 
        double height; 
    } _logoSize;
    double _remotePressedScale;
    NSURL *_remotePressedURL;
    SAUIAppPunchOut *_remotePunchOut;
    double _remoteScale;
    NSURL *_remoteURL;
}

@property(assign,copy) NSString * localPressedResourceName;
@property(assign,retain) SAUIAppPunchOut * localPunchOut;
@property(assign,retain) NSBundle * localResourceBundle;
@property(assign,copy) NSString * localResourceName;
@property(assign,readwrite) struct CGSize { double x1; double x2; } logoSize;
@property(assign,readwrite) double remotePressedScale;
@property(assign,copy) NSURL * remotePressedURL;
@property(assign,retain) SAUIAppPunchOut * remotePunchOut;
@property(assign,readwrite) double remoteScale;
@property(assign,copy) NSURL * remoteURL;

+ (id)imageResourceFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;
+ (id)imageResourceWithAppPunchOut:(id)arg1;
+ (id)imageResourceWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;

- (void).cxx_destruct;
- (void)_fetchLocalResourcesWithCompletion:(id)arg1;
- (void)_fetchRemoteResourcesWithCompletion:(id)arg1;
- (id)_imageInLocalResourceBundleNamed:(id)arg1;
- (void)getLogoWithCompletion:(id)arg1;
- (id)localPressedResourceName;
- (id)localPunchOut;
- (id)localResourceBundle;
- (id)localResourceName;
- (struct CGSize { double x1; double x2; })logoSize;
- (double)remotePressedScale;
- (id)remotePressedURL;
- (id)remotePunchOut;
- (double)remoteScale;
- (id)remoteURL;
- (void)setLocalPressedResourceName:(id)arg1;
- (void)setLocalPunchOut:(id)arg1;
- (void)setLocalResourceBundle:(id)arg1;
- (void)setLocalResourceName:(id)arg1;
- (void)setLogoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemotePressedScale:(double)arg1;
- (void)setRemotePressedURL:(id)arg1;
- (void)setRemotePunchOut:(id)arg1;
- (void)setRemoteScale:(double)arg1;
- (void)setRemoteURL:(id)arg1;

@end

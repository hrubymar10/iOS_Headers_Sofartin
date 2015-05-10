/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceView : AceObject <SAAceSerializable>

@property(assign,retain) <SAAceSerializable> * context;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSNumber * deferredRendering;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSNumber * listenAfterSpeaking;
@property(assign,copy) NSString * speakableText;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * viewId;

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)deferredRendering;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (void)setContext:(id)arg1;
- (void)setDeferredRendering:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)speakableText;
- (id)viewId;

@end
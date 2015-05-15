/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent {
    FBSContext *_context;
    bool _orderOut;
}

@property(assign,retain) FBSContext * context;
@property(assign,readwrite) bool orderOut;

- (id)context;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)orderOut;
- (void)setContext:(id)arg1;
- (void)setOrderOut:(bool)arg1;

@end

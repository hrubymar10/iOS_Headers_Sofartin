/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextHostInfo : NSObject <FBWindowContextManagerObserver> {
    FBWindowContextManager *_contextManager;
    NSMutableSet *_hiddenContexts;
    NSDictionary *_realContextHostViewChangedProperties;
    NSDictionary *_realContextHostViewOriginalProperties;
    FBScene *_scene;
    FBWindowContextHostWrapperView *_wrapperView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSMutableSet *hiddenContexts;
@property (nonatomic, retain) NSDictionary *realContextHostViewChangedProperties;
@property (nonatomic, retain) NSDictionary *realContextHostViewOriginalProperties;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) FBWindowContextHostWrapperView *wrapperView;

- (void)dealloc;
- (id)hiddenContexts;
- (id)initWithContextManager:(id)arg1 hostManager:(id)arg2 scene:(id)arg3;
- (id)realContextHostViewChangedProperties;
- (id)realContextHostViewOriginalProperties;
- (void)setRealContextHostViewChangedProperties:(id)arg1;
- (void)setRealContextHostViewOriginalProperties:(id)arg1;
- (void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (id)wrapperView;

@end

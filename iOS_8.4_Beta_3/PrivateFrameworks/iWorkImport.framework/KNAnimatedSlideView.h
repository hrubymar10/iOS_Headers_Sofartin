/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedSlideView : NSObject <TSDCanvasDelegate, TSDConnectedInfoReplacing> {
    NSMutableSet *mActiveAnimatedBuilds;
    KNSlideNode *mAlternateDestinationSlideNode;
    KNAnimatedSlideModel *mAnimatedSlideModel;
    unsigned long long mAnimationsActive;
    unsigned long long mAnimationsStarted;
    TSUNoCopyDictionary *mBuildsToStartAfterMovieStartsMap;
    TSDCanvas *mCanvas;
    NSMutableArray *mChunks;
    unsigned long long mCurrentEventIndex;
    NSMutableArray *mDelayedAnimations;
    SEL mEventAnimationActiveCallbackSelector;
    id mEventAnimationActiveCallbackTarget;
    SEL mEventEndCallbackSelector;
    id mEventEndCallbackTarget;
    SEL mEventImmediateEndCallbackSelector;
    id mEventImmediateEndCallbackTarget;
    NSIndexSet *mEventIndexesToAnimate;
    SEL mEventStartCallbackSelector;
    id mEventStartCallbackTarget;
    bool mEventTriggered;
    TSDTexturedRectangle *mIncomingTexture;
    bool mIsInDelayBeforeActiveAnimations;
    int mIsTexturePreloadingCancelled;
    SEL mMovieEndCallbackSelector;
    id mMovieEndCallbackTarget;
    NSMutableSet *mMovieRenderers;
    SEL mMovieStartCallbackSelector;
    id mMovieStartCallbackTarget;
    TSDTexturedRectangle *mOutgoingTexture;
    bool mPlaysAutomaticTransitions;
    bool mQueuedTrigger;
    KNPlaybackSession *mSession;
    bool mShouldStopAnimations;
    bool mSkipDelayOnTransition;
    KNSlide *mSlide;
    bool mSlideIsBuildable;
    KNSlideNode *mSlideNode;
    unsigned long long mSlideNumber;
    TSUNoCopyDictionary *mTextureSetForRepMap;
    NSMutableSet *mTextureSets;
    bool mTransitionInitialized;
    double mTransitionStartTime;
}

@property (nonatomic, readonly) NSSet *activeAnimatedBuilds;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic) bool eventHasTriggered;
@property (nonatomic) unsigned long long eventIndex;
@property (nonatomic, copy) NSIndexSet *eventIndexesToAnimate;
@property (nonatomic, readonly) bool hasBuilds;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSDTexturedRectangle *incomingTexture;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic, readonly) bool isDoneAnimating;
@property (nonatomic, readonly) bool isMovieAnimating;
@property (nonatomic, readonly) bool isNonMovieAnimationActive;
@property (nonatomic, readonly) bool isNonMovieAnimationAnimating;
@property (nonatomic, readonly) KNAnimatedSlideModel *model;
@property (nonatomic, readonly) NSSet *movieRenderers;
@property (nonatomic, readonly) KNAnimatedSlideView *nextASV;
@property (nonatomic, retain) TSDTexturedRectangle *outgoingTexture;
@property (nonatomic) bool playsAutomaticTransitions;
@property (nonatomic, readonly) KNPlaybackSession *session;
@property (nonatomic) bool skipDelayOnTransition;
@property (readonly) Class superclass;
@property (nonatomic) bool triggerQueued;

+ (void)initialize;
+ (void)registerUserDefaults;

- (id)activeAnimatedBuilds;
- (void)addActiveAnimatedBuild:(id)arg1;
- (void)buildHasFinishedAnimating:(id)arg1;
- (void)cancelTexturePreloading;
- (id)canvas;
- (void)clearActiveAnimatedBuilds;
- (void)dealloc;
- (id)documentRoot;
- (unsigned long long)eventCount;
- (bool)eventHasTriggered;
- (unsigned long long)eventIndex;
- (id)eventIndexesToAnimate;
- (bool)hasBuilds;
- (bool)hasTransitionAtEventIndex:(long long)arg1;
- (id)incomingTexture;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)infosCurrentlyVisible;
- (id)infosVisibleAtEvent:(unsigned long long)arg1 ignoreBuildVisibility:(bool)arg2;
- (id)initForSlideNode:(id)arg1 session:(id)arg2;
- (void)interruptAndReset;
- (bool)isAnimating;
- (bool)isAtFirstEvent;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isDoneAnimating;
- (bool)isMovieAnimating;
- (bool)isNonMovieAnimationActive;
- (bool)isNonMovieAnimationAnimating;
- (bool)isPrintingCanvas;
- (bool)isRenderingForKPF;
- (id)model;
- (void)movieHasFinishedPlayback:(id)arg1;
- (id)movieRenderers;
- (id)nextASV;
- (id)outgoingTexture;
- (void)p_addMovieRenderer:(id)arg1;
- (void)p_animateBuild:(id)arg1;
- (void)p_animateBuild:(id)arg1 afterDelay:(double)arg2;
- (void)p_animateBuild:(id)arg1 isMoviePlayback:(bool)arg2;
- (void)p_animateCurrentEventIgnoringDelays:(bool)arg1;
- (void)p_animateTransition:(id)arg1;
- (void)p_clearMovieRenderers;
- (id)p_getRenderersAtEventIndex:(long long)arg1;
- (id)p_infosForSlide;
- (void)p_initializeTextureSetForRep:(id)arg1 info:(id)arg2 eventIndex:(unsigned long long)arg3 shouldPrepareBuildAnimation:(bool)arg4 ignoreBuildVisibility:(bool)arg5 isRenderingToContext:(bool)arg6 buildInfos:(id)arg7 postInitBlock:(id)arg8;
- (double)p_minimumDelay;
- (void)p_movieStarted:(id)arg1;
- (void)p_performAnimationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (void)p_recursivelyRemoveCallbackObserversFromAnimatedBuilds:(id)arg1;
- (void)p_removeDelayedAnimation:(id)arg1;
- (void)p_removeMovieRenderer:(id)arg1;
- (void)p_renderTexturesOnBaseLayer:(id)arg1 atEvent:(unsigned long long)arg2 shouldPrepareBuildAnimation:(bool)arg3 ignoreBuildVisibility:(bool)arg4;
- (void)p_resetMovieTextures;
- (void)p_setupTransitionStartTime;
- (bool)p_shouldAddInfoToTree:(id)arg1;
- (bool)p_shouldSkipActionBuild:(id)arg1 onMovieInfo:(id)arg2;
- (void)p_stopAllMovieRenderers;
- (void)p_tearDownTexturesIsExitingShow:(bool)arg1;
- (void)pauseAnimations;
- (bool)playAutomaticEvents;
- (bool)playsAutomaticTransitions;
- (void)preloadTexturesForEvent:(unsigned long long)arg1 ignoreBuildVisibility:(bool)arg2 priority:(long long)arg3 completionHandler:(id)arg4;
- (void)registerForEventAnimationActiveCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventImmediateEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForEventStartCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieEndCallback:(SEL)arg1 target:(id)arg2;
- (void)registerForMovieStartCallback:(SEL)arg1 target:(id)arg2;
- (void)removeActiveAnimatedBuild:(id)arg1;
- (void)renderCurrentEvent;
- (void)renderEvent:(unsigned long long)arg1 intoContext:(struct CGContext { }*)arg2 ignoreBuildVisibility:(bool)arg3;
- (void)renderEvent:(unsigned long long)arg1 onBaseLayer:(id)arg2 shouldPrepareBuildAnimation:(bool)arg3;
- (id)repsCurrentlyVisible;
- (void)reset;
- (void)resumeAnimationsIfPaused;
- (id)session;
- (void)setEventHasTriggered:(bool)arg1;
- (void)setEventIndex:(unsigned long long)arg1;
- (void)setEventIndexesToAnimate:(id)arg1;
- (void)setIncomingTexture:(id)arg1;
- (void)setNewDestinationSlideNode:(id)arg1;
- (void)setOutgoingTexture:(id)arg1;
- (void)setPlaysAutomaticTransitions:(bool)arg1;
- (void)setSkipDelayOnTransition:(bool)arg1;
- (void)setTexture:(id)arg1 forRep:(id)arg2;
- (void)setTriggerQueued:(bool)arg1;
- (void)setupTransition;
- (bool)shouldShowInstructionalText;
- (bool)shouldSuppressBackgrounds;
- (bool)skipDelayOnTransition;
- (bool)slideContainsRepsThatMustDrawOnMainThread;
- (unsigned long long)slideNumber;
- (void)stopAnimations;
- (id)textureSetForRep:(id)arg1;
- (void)transitionHasFinishedAnimating:(id)arg1;
- (void)transitionHasImmediatelyFinishedAnimating:(id)arg1;
- (void)triggerNextEvent;
- (void)triggerNextEventIgnoringDelay:(bool)arg1;
- (bool)triggerQueued;

@end

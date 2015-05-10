/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStackPushAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    long long _animationPreset;
    NSMutableArray *_animationsToRunAlongsideToVC;
    id _completionBlock;
    double _completionStagger;
    bool _hasStartedAnimation;
    UINavigationController *_navigationController;
    double _pushDuration;
    NSArray *_snapshots;
    double _springDamping;
    double _startStagger;
    NSArray *_viewControllers;
}

@property(assign,readwrite) long long animationPreset;
@property(assign,copy) id completionBlock;
@property(assign,readwrite) double completionStagger;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) UINavigationController * navigationController;
@property(assign,readwrite) double pushDuration;
@property(assign,readwrite) double springDamping;
@property(assign,readwrite) double startStagger;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSArray * viewControllers;

+ (id)_animationParametersForPreset:(long long)arg1;
+ (id)_snapshotOfViewController:(id)arg1 withNavigationBar:(id)arg2 prevViewController:(id)arg3;
+ (id)controllerWithViewControllerStack:(id)arg1 navigationController:(id)arg2;
+ (void)resetDefaultAnimationParameters;
+ (void)setDefaultAnimationPreset:(long long)arg1;

- (double)_actualDuration;
- (void)_addAnimation:(id)arg1 forViewAtIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (double)_desiredDuration;
- (void)_loadDefaultValues;
- (bool)_shouldSkipFirstPush;
- (id)_valueForAnimationParameter:(id)arg1;
- (void)animateAlongsideToViewController:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (long long)animationPreset;
- (id)completionBlock;
- (double)completionStagger;
- (void)dealloc;
- (id)init;
- (id)navigationController;
- (double)pushDuration;
- (void)setAnimationPreset:(long long)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setCompletionStagger:(double)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPushDuration:(double)arg1;
- (void)setSpringDamping:(double)arg1;
- (void)setStartStagger:(double)arg1;
- (void)setViewControllers:(id)arg1;
- (double)springDamping;
- (double)startStagger;
- (double)transitionDuration:(id)arg1;
- (id)viewControllers;

@end
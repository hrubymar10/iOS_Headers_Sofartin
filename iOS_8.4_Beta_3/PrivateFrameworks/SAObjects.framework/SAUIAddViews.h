/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAddViews : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic, copy) NSString *displayTarget;
@property (nonatomic) bool scrollToTop;
@property (nonatomic) bool temporary;
@property (nonatomic, copy) NSArray *views;

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (bool)_afui_isUsefulUserResultCommand;
- (id)afui_dialogPhase;
- (id)dialogPhase;
- (id)displayTarget;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (bool)scrollToTop;
- (void)setDialogPhase:(id)arg1;
- (void)setDisplayTarget:(id)arg1;
- (void)setScrollToTop:(bool)arg1;
- (void)setTemporary:(bool)arg1;
- (void)setViews:(id)arg1;
- (bool)temporary;
- (id)views;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    float _coefficient;
    double _constant;
    id _container;
    id _firstItem;
    unsigned long long _layoutConstraintFlags;
    double _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    float _priority;
    id _secondItem;
}

@property(getter=isActive,assign,readwrite) bool active;
@property(assign,readwrite) double constant;
@property(assign,readwrite) id container;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=_encodedConstant,setter=_setEncodedConstant:,assign,readwrite) _NSLayoutConstraintConstant * encodedConstant;
@property(assign,readwrite) long long firstAttribute;
@property(assign,readwrite) id firstItem;
@property(assign,readonly) bool hasBeenLowered;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * identifier;
@property(getter=_loweredConstantNeedsUpdate,setter=_setLoweredConstantNeedsUpdate:,assign,readwrite) bool loweredConstantNeedsUpdate;
@property(assign,readwrite) double multiplier;
@property(assign,readwrite) float priority;
@property(assign,readwrite) long long relation;
@property(assign,readwrite) long long secondAttribute;
@property(assign,readwrite) id secondItem;
@property(assign,readwrite) bool shouldBeArchived;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * symbolicConstant;

+ (bool)_UIWantsMarginAttributeSupport;
+ (void)_addOrRemoveConstraints:(id)arg1 activate:(bool)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(long long)arg3;
+ (id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 equalsAttribute:(long long)arg2 ofView:(id)arg3;
+ (id)_gkConstraintForView:(id)arg1 withConstantHeight:(double)arg2;
+ (id)_gkConstraintForView:(id)arg1 withConstantWidth:(double)arg2;
+ (id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(double)arg3;
+ (id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(double)arg3;
+ (id)_gkConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 leading:(double)arg7 fontTextStyle:(id)arg8;
+ (id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(double)arg3;
+ (id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(long long)arg2;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(bool)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(bool)arg2 overlap:(double)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 applyOrthogonalConstraints:(bool)arg6;
+ (void)_setLegacyDecodingOnly:(bool)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 priority:(float)arg8;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintWithItem:(id)arg1 height:(double)arg2;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned long long)arg3 offset:(struct UIOffset { double x1; double x2; })arg4;
+ (id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(int)arg3 offset:(struct UIOffset { double x1; double x2; })arg4;
+ (id)constraintsBySizingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;
+ (bool)rc_areConstraints:(id)arg1 equalToConstraints:(id)arg2;
+ (id)rc_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
+ (id)rc_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned long long)arg3 relatedBy:(long long)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
+ (id)rc_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned long long)arg3 offset:(struct UIOffset { double x1; double x2; })arg4;
+ (id)rc_constraintsBySizingView:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)rc_constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;
+ (id)rc_viewsInConstraints:(id)arg1;

- (bool)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(double)arg3 lastLoweredConstantWasRounded:(bool)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (void)_addToEngine:(id)arg1;
- (bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (double)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(double*)arg1;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (void)_containerGeometryDidChange;
- (bool)_deferDTraceLogging;
- (bool)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (bool)_effectiveConstant:(double*)arg1 error:(id*)arg2;
- (id)_encodedConstant;
- (struct CGSize { double x1; double x2; })_engineToContainerScalingCoefficients;
- (void)_ensureValueMaintainsArbitraryLimit:(double*)arg1;
- (double)_fudgeIncrement;
- (id)_identifier;
- (bool)_isFudgeable;
- (bool)_isIBPrototypingLayoutConstraint;
- (id)_layoutEngine;
- (bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(bool*)arg2;
- (bool)_loweredConstantIsRounded;
- (bool)_loweredConstantNeedsUpdate;
- (id)_loweredExpression;
- (void)_makeExtraVars;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (bool)_nsib_isRedundant;
- (bool)_nsib_isRedundantInEngine:(id)arg1;
- (int)_primitiveConstraintType;
- (id)_priorityDescription;
- (void)_removeFromEngine:(id)arg1;
- (void)_setDeferDTraceLogging:(bool)arg1;
- (void)_setEncodedConstant:(id)arg1;
- (void)_setFirstAttribute:(long long)arg1;
- (void)_setFirstItem:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setLoweredConstantNeedsUpdate:(bool)arg1;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (void)_setRelation:(long long)arg1;
- (void)_setSecondAttribute:(long long)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (id)_symbolicConstant;
- (bool)_tryToChangeContainerGeometryWithUndoHandler:(id)arg1;
- (id)animations;
- (id)asciiArtDescription;
- (void)ax_removeFromContainer;
- (double)constant;
- (id)container;
- (void)dealloc;
- (bool)defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;
- (id)description;
- (id)descriptionAccessory;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (long long)firstAttribute;
- (id)firstItem;
- (bool)hasBeenLowered;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (double)multiplier;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (float)priority;
- (double)priorityForVariable:(id)arg1;
- (id)rc_debugIdentifierWithBaseLabel:(id)arg1;
- (bool)rc_isEqualToConstraint:(id)arg1;
- (void)rc_setIdentifierWithLabel:(id)arg1;
- (long long)relation;
- (long long)secondAttribute;
- (id)secondItem;
- (void)setActive:(bool)arg1;
- (void)setAnimations:(id)arg1;
- (void)setConstant:(double)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasBeenLowered:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setShouldBeArchived:(bool)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (bool)shouldBeArchived;
- (id)symbolicConstant;
- (void)tk_removeFromContainer;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent> {
    TSCHChartAxisID *mAxisID;
    TSCHChartModel *mModel;
    TSCHReferenceLineNonStyle *mNonStyle;
    TSCHReferenceLineStyle *mStyle;
    unsigned long long mStyleSwapIndex;
    NSUUID *mUUID;
}

@property (nonatomic, readonly) TSCHChartAxis *axis;
@property (nonatomic, readonly, copy) TSCHChartAxisID *axisID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool labelShowing;
@property (nonatomic, readonly) bool lineShowing;
@property (nonatomic, readonly) unsigned long long styleSwapIndex;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) bool valueLabelShowing;

+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (id)defaultNonStyleWithContext:(id)arg1 referenceLineType:(unsigned long long)arg2 axis:(id)arg3;
+ (unsigned long long)maxNumberOfReferenceLines;
+ (id)p_lineLabelForType:(unsigned long long)arg1;
+ (unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)arg1;
+ (unsigned char)styleOwnerPathType;
+ (unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg1 refLineIndex:(unsigned long long)arg2;

- (id)axis;
- (id)axisID;
- (id)chartInfo;
- (void)clearParent;
- (id)context;
- (void)dealloc;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (id)drawableInfo;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (bool)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
- (bool)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
- (bool)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
- (id)initWithModel:(id)arg1 axisID:(id)arg2 index:(unsigned long long)arg3 uuid:(id)arg4;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (bool)labelShowing;
- (bool)lineShowing;
- (id)localizedTypeName;
- (id)model;
- (id)nonstyle;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_genericToDefaultPropertyMap;
- (double)referenceLineAxisValue;
- (void)setStyle:(id)arg1 nonStyle:(id)arg2;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)style;
- (unsigned long long)styleSwapIndex;
- (id)swapTuplesForMutations:(id)arg1 forImport:(bool)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)uuid;
- (id)valueForProperty:(int)arg1;
- (bool)valueLabelShowing;

@end

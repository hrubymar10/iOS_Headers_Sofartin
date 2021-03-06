/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack {
    TSTMutableStrokeLayer *_clearedStrokeLayer;
    TSTStrokeLayer *_customStrokeLayer;
    TSTStrokeLayer *_defaultStrokeLayer;
    TSTMutableStrokeLayer *_dynamicStrokeLayer;
    TSTMutableStrokeLayer *_spillStrokeLayer;
    long long _stackKind;
    long long _type;
}

@property(assign,retain) TSTMutableStrokeLayer * clearedStrokeLayer;
@property(assign,retain) TSTStrokeLayer * customStrokeLayer;
@property(assign,retain) TSTStrokeLayer * defaultStrokeLayer;
@property(assign,retain) TSTMutableStrokeLayer * dynamicStrokeLayer;
@property(assign,retain) TSTMutableStrokeLayer * spillStrokeLayer;
@property(assign,readwrite) long long stackKind;
@property(assign,readwrite) long long type;

+ (id)strokeLayerStackWithStackKind:(long long)arg1;

- (id)clearedStrokeLayer;
- (id)customStrokeLayer;
- (void)dealloc;
- (id)defaultStrokeLayer;
- (id)dynamicStrokeLayer;
- (id)initWithStackKind:(long long)arg1;
- (void)insertClearedStrokeAtRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)insertDynamicStroke:(id)arg1 strokeOrder:(int)arg2 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3;
- (void)insertSpillStroke:(id)arg1 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2;
- (void)invalidateClearedStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)invalidateCustomStrokes;
- (void)invalidateDynamicStrokes;
- (void)invalidateDynamicStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)invalidateSpillStrokes;
- (id)portalledStrokeLayer;
- (bool)replaceCustomStrokeLayerWith:(id)arg1;
- (bool)replaceDefaultStrokeLayerWith:(id)arg1;
- (bool)replaceDynamicStrokeLayerWith:(id)arg1;
- (void)setClearedStrokeLayer:(id)arg1;
- (void)setCustomStrokeLayer:(id)arg1;
- (void)setDefaultStrokeLayer:(id)arg1;
- (void)setDynamicStrokeLayer:(id)arg1;
- (void)setSpillStrokeLayer:(id)arg1;
- (void)setStackKind:(long long)arg1;
- (void)setType:(long long)arg1;
- (id)spillStrokeLayer;
- (long long)stackKind;
- (id)strokeLayerEnumeration;
- (long long)type;

@end

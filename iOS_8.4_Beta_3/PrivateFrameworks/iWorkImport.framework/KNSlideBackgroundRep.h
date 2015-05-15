/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {
    CALayer *mBlackBackgroundLayer;
    bool mFillCanApplyToCALayer;
    bool mLayerNeedsUpdate;
}

@property(assign,readonly) KNSlideBackgroundInfo * slideBackgroundInfo;

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3;

- (id)additionalLayersUnderLayer;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isOpaque;
- (id)slideBackgroundInfo;
- (id)textureForContext:(id)arg1;
- (bool)wantsToDistortWithImagerContext;

@end

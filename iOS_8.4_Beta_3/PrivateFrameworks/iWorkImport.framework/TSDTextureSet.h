/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTextureSet : NSObject <NSCopying> {
    bool _isFlippedHorizontally;
    long long _objectType;
    long long _stageIndex;
    double _textureAnimationPercent;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } mActiveChunkIndices;
    NSMutableArray *mAllTextures;
    CALayer *mAlternateLayer;
    NSDictionary *mBakedAttributes;
    TSDBitmapRenderingQualityInfo *mBitmapRenderingQualityInfo;
    NSMutableDictionary *mBoundingRectForStage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mBounds;
    struct CGPoint { 
        double x; 
        double y; 
    } mCenter;
    unsigned long long mChunkCount;
    struct CGColorSpace { } *mColorSpace;
    NSMutableDictionary *mFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    bool mIsBackground;
    bool mIsBaked;
    bool mIsMagicMove;
    CALayer *mLayer;
    long long mMaxStageIndex;
    struct CGPoint { 
        double x; 
        double y; 
    } mOriginalPosition;
    TSDRep *mRep;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    bool mShouldIncludeFinalTexturesInVisibleSet;
    bool mShouldTransformUsingTextureCenter;
    TSUNoCopyDictionary *mStageIndexForTexture;
    double mTextureAngle;
    double mTextureOpacity;
    long long mTextureZOrder;
    NSMutableArray *mTextures;
}

@property (nonatomic, readonly) NSArray *allTextures;
@property (nonatomic, retain) CALayer *alternateLayer;
@property (nonatomic, retain) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, retain) NSDictionary *boundingRectForStage;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) unsigned long long chunkCount;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool isBackground;
@property (nonatomic) bool isBaked;
@property (nonatomic) bool isFlippedHorizontally;
@property (nonatomic, readonly) bool isImageSource;
@property (nonatomic) bool isMagicMove;
@property (nonatomic, readonly) bool isRenderable;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) long long maxStageIndex;
@property (nonatomic) long long objectType;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPosition;
@property TSDRep *rep;
@property (nonatomic) bool shouldIncludeFinalTexturesInVisibleSet;
@property (nonatomic) bool shouldTransformUsingTextureCenter;
@property (nonatomic, readonly) long long stageIndex;
@property (nonatomic) double textureAngle;
@property (nonatomic) double textureAnimationPercent;
@property (nonatomic) double textureOpacity;
@property (nonatomic) long long textureZOrder;
@property (nonatomic, readonly) NSArray *visibleTextures;

+ (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(bool)arg3;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize { double x1; double x2; })arg2;
- (void)addRenderable:(id)arg1;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (id)allTextures;
- (id)alternateLayer;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(bool)arg3 shouldBake:(bool)arg4 applyScaleOnly:(bool)arg5 ignoreScale:(bool)arg6 shouldCheckActionKeys:(bool)arg7;
- (id)bitmapRenderingQualityInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)boundingRectForStage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForStage:(long long)arg1 isBuildIn:(bool)arg2;
- (struct CGPoint { double x1; double x2; })center;
- (unsigned long long)chunkCount;
- (struct CGColorSpace { }*)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)finalTextureForStage:(long long)arg1 reverse:(bool)arg2;
- (id)firstVisibleTextureForTextureType:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)hideLayersOfFinalTextures;
- (id)init;
- (bool)isBackground;
- (bool)isBackgroundTexture:(id)arg1;
- (bool)isBaked;
- (bool)isFlippedHorizontally;
- (bool)isImageSource;
- (bool)isMagicMove;
- (bool)isRenderable;
- (id)layer;
- (long long)maxStageIndex;
- (id)newFlattenedTexture;
- (long long)objectType;
- (struct CGPoint { double x1; double x2; })originalPosition;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2;
- (void)p_resetAttributesWithViewScale:(double)arg1;
- (void)removeRenderable:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 requiresTransparentBackground:(bool)arg2;
- (void)renderLayerContentsIfNeeded;
- (id)rep;
- (void)resetAnchorPoint;
- (void)resetToOriginalSource;
- (void)setAlternateLayer:(id)arg1;
- (void)setBitmapRenderingQualityInfo:(id)arg1;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStage:(long long)arg2;
- (void)setBoundingRectForStage:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setIsBackground:(bool)arg1;
- (void)setIsBaked:(bool)arg1;
- (void)setIsFlippedHorizontally:(bool)arg1;
- (void)setIsMagicMove:(bool)arg1;
- (void)setLayerGeometryFromRep:(id)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setOriginalPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setShouldIncludeFinalTexturesInVisibleSet:(bool)arg1;
- (void)setShouldTransformUsingTextureCenter:(bool)arg1;
- (void)setTextureAngle:(double)arg1;
- (void)setTextureAnimationPercent:(double)arg1;
- (void)setTextureOpacity:(double)arg1;
- (void)setTextureZOrder:(long long)arg1;
- (bool)shouldIncludeFinalTexturesInVisibleSet;
- (bool)shouldTransformUsingTextureCenter;
- (long long)stageIndex;
- (long long)stageIndexForTexture:(id)arg1;
- (void)teardown;
- (double)textureAngle;
- (double)textureAnimationPercent;
- (double)textureOpacity;
- (long long)textureZOrder;
- (id)visibleTextures;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(bool)arg2 shouldFlatten:(bool)arg3;
- (id)visibleTexturesWithTextureType:(long long)arg1;

@end

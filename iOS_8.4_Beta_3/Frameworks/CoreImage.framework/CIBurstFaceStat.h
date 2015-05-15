/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstFaceStat : NSObject <NSCopying> {
    int FCRBlinkFeaturesSize;
    int FCRLeftEyeFeaturesOffset;
    int FCRRightEyeFeaturesOffset;
    NSMutableArray *FCRSmileAndBlinkFeatures;
    int FCRSmileFeaturesOffset;
    int FCRSmileFeaturesSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _hwFaceRect;
    bool _isSyncedWithImage;
    float faceCropTime;
    NSMutableArray *faceHOG;
    float faceHOGTime;
    int faceId;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } faceRect;
    float faceScore;
    float faceScoreTime;
    float focusScore;
    bool foundByFaceCore;
    int framesSinceLast;
    bool hasLeftEye;
    bool hasRightEye;
    bool hasRollAngle;
    bool hasYawAngle;
    int hwFaceId;
    float leftEyeBlinkScore;
    bool leftEyeOpen;
    bool leftEyePleasant;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } leftEyeRect;
    bool mouthPleasant;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } normalizedFaceRect;
    float normalizedFocusScore;
    float normalizedSigma;
    float normalizedSmileScore;
    float rightEyeBlinkScore;
    bool rightEyeOpen;
    bool rightEyePleasant;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } rightEyeRect;
    float rollAngle;
    bool smallFace;
    float smileScore;
    bool smiling;
    double timestamp;
    float yawAngle;
}

@property(assign,readwrite) int FCRBlinkFeaturesSize;
@property(assign,readwrite) int FCRLeftEyeFeaturesOffset;
@property(assign,readwrite) int FCRRightEyeFeaturesOffset;
@property(assign,readwrite) NSMutableArray * FCRSmileAndBlinkFeatures;
@property(assign,readwrite) int FCRSmileFeaturesOffset;
@property(assign,readwrite) int FCRSmileFeaturesSize;
@property(assign,readwrite) float faceCropTime;
@property(assign,readwrite) NSMutableArray * faceHOG;
@property(assign,readwrite) float faceHOGTime;
@property(assign,readwrite) int faceId;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceRect;
@property(assign,readwrite) float faceScore;
@property(assign,readwrite) float faceScoreTime;
@property(assign,readwrite) float focusScore;
@property(assign,readwrite) bool foundByFaceCore;
@property(assign,readwrite) int framesSinceLast;
@property(assign,readwrite) bool hasLeftEye;
@property(assign,readwrite) bool hasRightEye;
@property(assign,readwrite) bool hasRollAngle;
@property(assign,readwrite) bool hasYawAngle;
@property(assign,readwrite) int hwFaceId;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hwFaceRect;
@property(assign,readwrite) bool isSyncedWithImage;
@property(assign,readwrite) float leftEyeBlinkScore;
@property(assign,readwrite) bool leftEyeOpen;
@property(assign,readwrite) bool leftEyePleasant;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } leftEyeRect;
@property(assign,readwrite) bool mouthPleasant;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedFaceRect;
@property(assign,readwrite) float normalizedFocusScore;
@property(assign,readwrite) float normalizedSigma;
@property(assign,readwrite) float normalizedSmileScore;
@property(assign,readwrite) float rightEyeBlinkScore;
@property(assign,readwrite) bool rightEyeOpen;
@property(assign,readwrite) bool rightEyePleasant;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rightEyeRect;
@property(assign,readwrite) float rollAngle;
@property(assign,readwrite) bool smallFace;
@property(assign,readwrite) float smileScore;
@property(assign,readwrite) bool smiling;
@property(assign,readwrite) double timestamp;
@property(assign,readwrite) float yawAngle;

- (int)FCRBlinkFeaturesSize;
- (int)FCRLeftEyeFeaturesOffset;
- (int)FCRRightEyeFeaturesOffset;
- (id)FCRSmileAndBlinkFeatures;
- (int)FCRSmileFeaturesOffset;
- (int)FCRSmileFeaturesSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)faceCropTime;
- (id)faceHOG;
- (float)faceHOGTime;
- (int)faceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRect;
- (float)faceScore;
- (float)faceScoreTime;
- (float)focusScore;
- (bool)foundByFaceCore;
- (int)framesSinceLast;
- (bool)hasLeftEye;
- (bool)hasRightEye;
- (bool)hasRollAngle;
- (bool)hasYawAngle;
- (int)hwFaceId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hwFaceRect;
- (id)initWithFaceStat:(id)arg1;
- (bool)isSyncedWithImage;
- (float)leftEyeBlinkScore;
- (bool)leftEyeOpen;
- (bool)leftEyePleasant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftEyeRect;
- (bool)mouthPleasant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceRect;
- (float)normalizedFocusScore;
- (float)normalizedSigma;
- (float)normalizedSmileScore;
- (float)rightEyeBlinkScore;
- (bool)rightEyeOpen;
- (bool)rightEyePleasant;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightEyeRect;
- (float)rollAngle;
- (void)setFCRBlinkFeaturesSize:(int)arg1;
- (void)setFCRLeftEyeFeaturesOffset:(int)arg1;
- (void)setFCRRightEyeFeaturesOffset:(int)arg1;
- (void)setFCRSmileAndBlinkFeatures:(id)arg1;
- (void)setFCRSmileFeaturesOffset:(int)arg1;
- (void)setFCRSmileFeaturesSize:(int)arg1;
- (void)setFaceCropTime:(float)arg1;
- (void)setFaceHOG:(id)arg1;
- (void)setFaceHOGTime:(float)arg1;
- (void)setFaceId:(int)arg1;
- (void)setFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFaceScore:(float)arg1;
- (void)setFaceScoreTime:(float)arg1;
- (void)setFocusScore:(float)arg1;
- (void)setFoundByFaceCore:(bool)arg1;
- (void)setFramesSinceLast:(int)arg1;
- (void)setHasLeftEye:(bool)arg1;
- (void)setHasRightEye:(bool)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setHwFaceId:(int)arg1;
- (void)setHwFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsSyncedWithImage:(bool)arg1;
- (void)setLeftEyeBlinkScore:(float)arg1;
- (void)setLeftEyeOpen:(bool)arg1;
- (void)setLeftEyePleasant:(bool)arg1;
- (void)setLeftEyeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMouthPleasant:(bool)arg1;
- (void)setNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNormalizedFocusScore:(float)arg1;
- (void)setNormalizedSigma:(float)arg1;
- (void)setNormalizedSmileScore:(float)arg1;
- (void)setRightEyeBlinkScore:(float)arg1;
- (void)setRightEyeOpen:(bool)arg1;
- (void)setRightEyePleasant:(bool)arg1;
- (void)setRightEyeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRollAngle:(float)arg1;
- (void)setSmallFace:(bool)arg1;
- (void)setSmileScore:(float)arg1;
- (void)setSmiling:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setYawAngle:(float)arg1;
- (bool)smallFace;
- (float)smileScore;
- (bool)smiling;
- (double)timestamp;
- (float)yawAngle;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLStatisticsData : NSObject {
    unsigned long long mFrames;
    TSCH3DGLPointerCountedSet *mGeometryUseCount;
    TSCH3DGLPointerCountedSet *mShadersUseCount;
}

@property(assign,readwrite) unsigned long long frames;

+ (id)statisticsData;

- (void)activateShader:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)drawGeometry:(id)arg1;
- (unsigned long long)frames;
- (id)init;
- (void)setFrames:(unsigned long long)arg1;

@end

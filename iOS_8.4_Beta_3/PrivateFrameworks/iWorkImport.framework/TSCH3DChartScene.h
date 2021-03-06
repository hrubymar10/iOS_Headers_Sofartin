/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartScene : NSObject {
    struct ChartSceneInfo { 
        TSCH3DScene *scene; 
        TSCHChartInfo *chartInfo; 
        TSCHChartType *chartType; 
        TSCHChartSeriesType *seriesType; 
        struct { 
            bool forceOmitLegend; 
            bool forceOmitTitle; 
            bool forceOmitAxisTitle; 
            bool enable3DTightBounds; 
            bool enable3DScaledDepthBounds; 
            bool enable3DSageMaxDepthRatio; 
            unsigned long long max3DLimitingSeries; 
        } layoutSettings; 
    } mSceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(const struct ChartSceneInfo { id x1; id x2; id x3; id x4; struct { bool x_5_1_1; bool x_5_1_2; bool x_5_1_3; bool x_5_1_4; bool x_5_1_5; bool x_5_1_6; unsigned long long x_5_1_7; } x5; }*)arg1;
+ (bool)supportsValueAxisLabelAlignmentCaching;

- (id).cxx_construct;
- (void)addAllLabelsToScene;
- (void)addAllObjectsToScene;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)adjustSceneSettings;
- (id)chartInfo;
- (id)chartType;
- (id)initWithSceneInfo:(const struct ChartSceneInfo { id x1; id x2; id x3; id x4; struct { bool x_5_1_1; bool x_5_1_2; bool x_5_1_3; bool x_5_1_4; bool x_5_1_5; bool x_5_1_6; unsigned long long x_5_1_7; } x5; }*)arg1;
- (const struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; unsigned long long x7; }*)layoutSettings;
- (id)scene;
- (id)seriesType;

@end

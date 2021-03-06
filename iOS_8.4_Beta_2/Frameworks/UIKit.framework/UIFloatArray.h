/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFloatArray : NSObject {
    int _count;
    struct { 
        unsigned int valueIsSingleton : 1; 
        unsigned int hideGaps : 1; 
        unsigned int unused : 30; 
    } _floatArrayFlags;
    int _gapCount;
    float _gapValue;
    int *_gaps;
    float _minValue;
    union { 
        float singleton; 
        float *array; 
    } _values;
}

- (struct { int x1; int x2; int x3; int x4; bool x5; bool x6; })_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2;
- (struct { int x1; int x2; int x3; int x4; bool x5; bool x6; })_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2;
- (bool)_setupGapIndexesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(bool)arg3;
- (bool)_setupValuesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(bool)arg3;
- (bool)_setupValuesWithCount:(int)arg1 singleValue:(float)arg2 isRefresh:(bool)arg3;
- (bool)_setupWithDataProvider:(id)arg1 valueIsSingleton:(bool)arg2 singletonValue:(float)arg3 isRefresh:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)hideGaps:(bool)arg1;
- (int)indexForGapIndex:(int)arg1;
- (struct { int x1; int x2; int x3; int x4; bool x5; bool x6; })indexesFromOffset:(float)arg1 toOffset:(float)arg2;
- (id)init;
- (float)minValue;
- (struct { float x1; float x2; })offsetsForGapIndex:(int)arg1;
- (struct { float x1; float x2; })offsetsForIndex:(int)arg1;
- (bool)refreshWithDataProvider:(id)arg1;
- (bool)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2;
- (float)singleValue;
- (float)sum;
- (int)valueCount;

@end

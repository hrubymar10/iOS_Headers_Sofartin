/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {
    TSCH3DTextureAtlas *mAtlas;
    NSMutableDictionary *mCache;
}

@property (nonatomic, readonly) TSCH3DTextureAtlas *atlas;

- (id)atlas;
- (void)dealloc;
- (id)initWithSize:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (id)paragraphStyleForKey:(unsigned long long)arg1 defaultStyle:(id)arg2;
- (id)prepareTextureAtlasWithSamples:(float)arg1;
- (id)resourceAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4;
- (void)setParagraphStyle:(id)arg1 atIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)setParagraphStyle:(id)arg1 forKey:(unsigned long long)arg2 atIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {
    NSData *mConstData;
    NSMutableData *mMutableData;
}

@property (nonatomic, readonly) NSData *NSData;

+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1 data:(id)arg2;
+ (id)bufferWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1 mutableData:(id)arg2;

- (id)NSData;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)count;
- (const void*)data;
- (void)dealloc;
- (void)fillCapacity;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1 data:(id)arg2;
- (id)initWithCapacityDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1 mutableData:(id)arg2;
- (void*)mutableData;
- (void)resizeFillDimension:(const struct DataBuffer2DDimension { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; unsigned long long x2; bool x3; }*)arg1;

@end

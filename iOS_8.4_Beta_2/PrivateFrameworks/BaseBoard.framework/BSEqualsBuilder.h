/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEqualsBuilder : NSObject {
    bool _equal;
}

+ (id)builder;
+ (id)builderWithObject:(id)arg1 ofExpectedClass:(Class)arg2;

- (id)appendArray:(id)arg1 counterpart:(id)arg2;
- (id)appendBool:(bool)arg1 counterpart:(id)arg2;
- (id)appendCGFloat:(double)arg1 counterpart:(id)arg2;
- (id)appendCGPoint:(struct CGPoint { double x1; double x2; })arg1 counterpart:(id)arg2;
- (id)appendCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 counterpart:(id)arg2;
- (id)appendCGSize:(struct CGSize { double x1; double x2; })arg1 counterpart:(id)arg2;
- (id)appendEqualsBlocks:(id)arg1;
- (id)appendInteger:(long long)arg1 counterpart:(id)arg2;
- (id)appendObject:(id)arg1 counterpart:(id)arg2;
- (id)appendPointer:(void*)arg1 counterpart:(id)arg2;
- (id)appendString:(id)arg1 counterpart:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 counterpart:(id)arg2;
- (id)init;
- (bool)isEqual;

@end

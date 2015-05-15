/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGlobePointCache : NSObject {
    VKClassicGlobeCanvas *_canvas;
}

@property(assign,readwrite) VKClassicGlobeCanvas * canvas;

- (id)addHandleAtCoordinate:(struct { double x1; double x2; })arg1 withHighPrecision:(bool)arg2;
- (id)canvas;
- (struct VKPoint { double x1; double x2; double x3; })pointForHandle:(id)arg1 atCoordinate:(struct { double x1; double x2; })arg2 withHighPrecision:(bool)arg3;
- (void)removeHandle:(id)arg1;
- (void)setCanvas:(id)arg1;

@end

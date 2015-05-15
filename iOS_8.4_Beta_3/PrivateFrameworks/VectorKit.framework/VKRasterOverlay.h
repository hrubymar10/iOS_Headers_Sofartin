/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterOverlay : NSObject {
    <VKRasterOverlayDelegate> *_delegate;
    unsigned long long _level;
    VKRasterOverlayTileSource *_mapModel;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _replaceMapContentInRect;
    VKRasterOverlayTileSource *_tileSource;
}

@property <VKRasterOverlayDelegate> *delegate;
@property (nonatomic) unsigned long long level;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } replaceMapContentInRect;
@property (nonatomic) VKRasterOverlayTileSource *tileSource;

- (id).cxx_construct;
- (bool)canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)delegate;
- (void)drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (unsigned long long)level;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })replaceMapContentInRect;
- (void)setDelegate:(id)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 level:(long long)arg2;
- (void)setReplaceMapContentInRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTileSource:(id)arg1;
- (id)tileSource;

@end

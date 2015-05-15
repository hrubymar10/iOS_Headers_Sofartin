/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileServerCallback : NSObject {
    id handler;
    VKRasterMapTileRequest *request;
    double startTimestamp;
}

@property (nonatomic, copy) id handler;
@property (nonatomic, retain) VKRasterMapTileRequest *request;
@property (nonatomic) double startTimestamp;

- (void)dealloc;
- (id)description;
- (id)handler;
- (id)request;
- (void)setHandler:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;

@end

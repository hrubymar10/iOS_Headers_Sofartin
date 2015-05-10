/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {
    NSString *_lastAttributionString;
    UIImage *_lastSnapshot;
    NSLock *_requestLock;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MKMapSnapshotRequest * servingRequest;
@property(assign,readonly) Class superclass;

+ (bool)supportsHighResolutionSnapshots;
+ (bool)supportsSharingThumbnails;

- (void).cxx_destruct;
- (id)_newSnapshotWithView:(id)arg1;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 handler:(id)arg4;
- (void)createSnapShotWithCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 requester:(id)arg4 context:(id)arg5;
- (void)dealloc;
- (void)flushRequestQueue;
- (id)init;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (id)servingRequest;
- (void)setServingRequest:(id)arg1;

@end

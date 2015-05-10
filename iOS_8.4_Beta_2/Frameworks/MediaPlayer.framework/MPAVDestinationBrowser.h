/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVDestinationBrowser : NSObject {
    bool _isScanning;
    MPAVRoutingController *_routingController;
    bool _scansForDestinationsWhenEnteringForeground;
}

@property(assign,readwrite) bool scansForDestinationsWhenEnteringForeground;

- (void).cxx_destruct;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)beginScanningForDestinations;
- (void)dealloc;
- (void)endScanningForDestinations;
- (id)init;
- (bool)scansForDestinationsWhenEnteringForeground;
- (void)setScansForDestinationsWhenEnteringForeground:(bool)arg1;

@end
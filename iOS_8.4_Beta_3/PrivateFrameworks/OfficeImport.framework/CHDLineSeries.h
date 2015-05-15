/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {
    CHDMarker *mMarker;
    bool mSmooth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithChart:(id)arg1;
- (bool)isSmooth;
- (id)marker;
- (void)setMarker:(id)arg1;
- (void)setSmooth:(bool)arg1;

@end

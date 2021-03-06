/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate> {
    bool _cancelled;
    id _finished;
    id _refinement;
    GEORequester *_requester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_searchURLForRequest:(id)arg1;

- (void)cancel;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(bool)arg3 finished:(id)arg4 refinement:(id)arg5 error:(id)arg6 isCompletions:(bool)arg7;

@end

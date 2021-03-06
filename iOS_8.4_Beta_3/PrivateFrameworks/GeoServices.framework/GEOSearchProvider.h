/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchProvider : NSObject {
    id _error;
}

@property (nonatomic, copy) id error;

- (void)cancel;
- (void)dealloc;
- (id)error;
- (void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(bool)arg3 finished:(id)arg4 refinement:(id)arg5 error:(id)arg6 isCompletions:(bool)arg7;
- (void)setError:(id)arg1;

@end

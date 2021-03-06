/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropBrowser : NSObject {
    struct __SFBrowser { } *_browser;
    <SFAirDropBrowserDelegate> *_delegate;
    bool _didDelay;
    NSMutableDictionary *_nodes;
    NSArray *_people;
    double _startTime;
    NSObject<OS_dispatch_source> *_timer;
}

@property(assign,readwrite) <SFAirDropBrowserDelegate> * delegate;
@property(assign,readonly) NSArray * people;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)handleBrowserCallBack;
- (id)init;
- (id)people;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateDiscoveredPeople;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelRealRoutePredictorInternalDelegate : NSObject <GEORouteHypothesizerDelegate> {
    NSDate *_lastUpdateDate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSDate * lastUpdateDate;
@property(assign,readonly) Class superclass;

- (id)lastUpdateDate;
- (void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2;
- (void)routeHypothesizerArrived:(id)arg1;
- (void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2;

@end

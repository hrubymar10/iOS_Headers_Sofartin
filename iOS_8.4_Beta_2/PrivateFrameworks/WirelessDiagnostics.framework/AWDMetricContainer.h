/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDMetricContainer : NSObject {
    PBCodable *_metric;
    unsigned int _metricId;
}

@property(assign,retain) PBCodable * metric;
@property(assign,readonly) unsigned int metricId;

- (void)dealloc;
- (id)initWithMetricId:(unsigned int)arg1;
- (id)metric;
- (unsigned int)metricId;
- (void)setMetric:(id)arg1;

@end

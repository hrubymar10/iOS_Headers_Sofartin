/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
 */

@interface ABLEBONPrediction : NSObject {
    ABLEStaticMapInclusiveDomainVectorRange *_bonDoubleMap;
}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange *bonDoubleMap;

+ (id)bonPredict;
+ (id)bonPredictWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)bonDoubleMap;
- (id)initWithArray:(id)arg1;
- (id)initWithJsonResource:(id)arg1;
- (float)lookupForPredicted:(float)arg1 andBatteryLevel:(float)arg2;
- (void)setBonDoubleMap:(id)arg1;

@end

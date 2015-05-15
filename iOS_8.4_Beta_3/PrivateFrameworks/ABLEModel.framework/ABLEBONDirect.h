/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
 */

@interface ABLEBONDirect : NSObject {
    NSArray *_bonArray;
    ABLEStaticMapInclusiveDomainVectorRange *_bonDoubleMap;
}

@property (readonly) NSArray *bonArray;
@property (retain) ABLEStaticMapInclusiveDomainVectorRange *bonDoubleMap;

+ (id)bonDirect;
+ (id)bonDirectWithArray:(id)arg1;

- (void).cxx_destruct;
- (id)bonArray;
- (id)bonDoubleMap;
- (id)initBonDirectWithArray:(id)arg1;
- (id)initWithJsonResource:(id)arg1;
- (float)lookupForBatteryLevel:(float)arg1;
- (void)setBonDoubleMap:(id)arg1;

@end

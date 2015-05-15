/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLModel : NSObject {
    NSString *_modelPath;
    NSString *_savedPlistPath;
    CPMLModelEvaluate *cpModelEvaluate;
}

@property (nonatomic, retain) CPMLModelEvaluate *cpModelEvaluate;

- (void).cxx_destruct;
- (void)boundResult:(id)arg1;
- (id)cpModelEvaluate;
- (id)evalArray:(id)arg1;
- (id)evalDict:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)getPropertyList;
- (id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2;
- (bool)reset;
- (void)setCpModelEvaluate:(id)arg1;
- (bool)updateModelWithCPDB:(id)arg1;
- (bool)updateModelWithDB:(id)arg1;

@end

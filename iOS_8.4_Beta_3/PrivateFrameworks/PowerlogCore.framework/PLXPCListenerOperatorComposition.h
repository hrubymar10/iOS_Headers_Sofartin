/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLXPCListenerOperatorComposition : NSObject {
    PLOperator *_operator;
    id _operatorBlock;
    NSDictionary *_registration;
}

@property PLOperator *operator;
@property (nonatomic, copy) id operatorBlock;
@property (readonly) NSDictionary *registration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(id)arg3;
- (void)messageRecievedForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (id)operator;
- (id)operatorBlock;
- (id)registration;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;

@end

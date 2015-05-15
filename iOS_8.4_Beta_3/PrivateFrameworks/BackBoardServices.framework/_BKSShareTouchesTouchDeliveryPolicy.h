/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface _BKSShareTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
    unsigned int _childContextId;
    unsigned int _hostContextId;
}

@property(assign,readonly) unsigned int childContextId;
@property(assign,readonly) unsigned int hostContextId;

+ (bool)supportsSecureCoding;

- (id)assertionEndpoint;
- (unsigned int)childContextId;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)hostContextId;
- (id)initWithChildContextId:(unsigned int)arg1 hostContextId:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id)arg1 orCancelTouchesPolicy:(id)arg2 orCombinedPolicy:(id)arg3;
- (void)setAssertionEndpoint:(id)arg1;

@end
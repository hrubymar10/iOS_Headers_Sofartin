/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionCreateEvent : BKSProcessAssertionUpdateEvent <BSXPCCoding> {
    unsigned int _reason;
    NSString *_targetBundleIdentifier;
    int _targetPID;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) unsigned int reason;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * targetBundleIdentifier;
@property(assign,readwrite) int targetPID;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;
- (void)setTargetBundleIdentifier:(id)arg1;
- (void)setTargetPID:(int)arg1;
- (id)targetBundleIdentifier;
- (int)targetPID;

@end
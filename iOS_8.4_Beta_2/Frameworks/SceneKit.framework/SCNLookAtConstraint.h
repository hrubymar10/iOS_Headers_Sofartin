/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLookAtConstraint : SCNConstraint {
    bool _gimbalLockEnabled;
    id _reserved;
    SCNNode *_target;
}

@property(assign,readwrite) bool gimbalLockEnabled;
@property(assign,readonly) SCNNode * target;

+ (id)SCNJSExportProtocol;
+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)gimbalLockEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)setGimbalLockEnabled:(bool)arg1;
- (id)target;

@end

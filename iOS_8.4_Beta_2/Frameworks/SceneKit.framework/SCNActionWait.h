/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionWait : SCNAction {
    struct SCNCActionWait { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; bool x6; double x7; double x8; double x9; double x10; double x11; bool x12; bool x13; id x14; void*x15; struct __CFString {} *x16; long long x17; double x18; double x19; double x20; double x21; } *_mycaction;
}

+ (bool)supportsSecureCoding;
+ (id)waitForDuration:(double)arg1;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionActivity : CMLogItem {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        bool isStanding; 
        float tilt; 
        double timestamp; 
        int exitState; 
        double estExitTime; 
        double startTime; 
    } fState;
}

@property(assign,readonly) bool automotive;
@property(assign,readonly) long long confidence;
@property(assign,readonly) bool cycling;
@property(assign,readonly) bool running;
@property(assign,readonly) NSDate * startDate;
@property(assign,readonly) bool stationary;
@property(assign,readonly) bool unknown;
@property(assign,readonly) bool walking;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (bool)automotive;
- (long long)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cycling;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; bool x5; float x6; double x7; int x8; double x9; double x10; })arg1;
- (bool)running;
- (id)startDate;
- (bool)stationary;
- (bool)unknown;
- (bool)walking;

@end

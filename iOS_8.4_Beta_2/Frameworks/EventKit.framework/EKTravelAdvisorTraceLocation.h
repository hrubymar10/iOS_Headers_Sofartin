/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisorTraceLocation : NSObject <NSSecureCoding> {
    NSDate *_date;
    CLLocation *_location;
}

@property(assign,readonly) NSDate * date;
@property(assign,readonly) CLLocation * location;

+ (bool)supportsSecureCoding;

- (id)date;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 location:(id)arg2;
- (id)location;

@end
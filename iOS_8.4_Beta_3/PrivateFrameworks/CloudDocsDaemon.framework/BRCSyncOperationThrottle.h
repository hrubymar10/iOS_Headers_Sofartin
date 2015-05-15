/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    NSString *_containerID;
    double _delay;
    int _lastErrorKind;
    double _nextTry;
}

@property (nonatomic, retain) NSString *containerID;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) int lastErrorKind;
@property (nonatomic, readonly) double nextTry;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clear;
- (id)containerID;
- (double)delay;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1;
- (int)lastErrorKind;
- (double)nextTry;
- (void)setContainerID:(id)arg1;
- (void)updateAfterSchedulingTask;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)arg1;
- (bool)updateForClearingOutOfQuota;
- (void)updateForError:(id)arg1 isSyncDown:(bool)arg2;

@end

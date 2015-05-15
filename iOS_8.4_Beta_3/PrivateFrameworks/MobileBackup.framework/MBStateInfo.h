/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBStateInfo : NSObject <NSCoding, NSCopying> {
    NSDate *_date;
    NSError *_error;
    unsigned long long _estimatedTimeRemaining;
    float _progress;
    int _state;
}

@property(assign,readonly) NSDate * date;
@property(assign,readonly) NSError * error;
@property(assign,readonly) unsigned long long estimatedTimeRemaining;
@property(assign,readonly) float progress;
@property(assign,readonly) int state;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 error:(id)arg4;
- (float)progress;
- (void)setError:(id)arg1;
- (void)setEstimatedTimeRemaining:(unsigned long long)arg1;
- (void)setProgress:(float)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end

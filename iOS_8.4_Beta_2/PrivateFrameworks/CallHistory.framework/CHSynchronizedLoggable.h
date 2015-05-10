/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHSynchronizedLoggable : NSObject <CHLoggerProtocol, CHSynchronizableProtocol> {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}

- (void).cxx_destruct;
- (void)execute:(id)arg1;
- (void)executeSync:(id)arg1;
- (bool)executeSyncWithBOOL:(id)arg1;
- (id)executeSyncWithResult:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)logWithLevel:(unsigned int)arg1 withFormat:(id)arg2;
- (id)queue;
- (bool)shouldLogForLevel:(unsigned int)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@interface STEmpedLinkingManager : NSObject {
    <STEmpedLinkingManagerDelegate> *_delegate;
    unsigned int _isLinking;
}

@property(assign,readwrite) <STEmpedLinkingManagerDelegate> * delegate;

+ (void)_startLinking;
+ (void)_startRemoteLinking;
+ (void)_stopLinking;

- (void)_empedLinkingStateChanged:(id)arg1;
- (void)_fakeEmpedLinkingStateChanged:(bool)arg1 afterDelay:(double)arg2;
- (void)_remoteLinkingStateChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isLinking;
- (void)setDelegate:(id)arg1;
- (void)startLinking;
- (void)startRemoteLinking;
- (void)stopLinking;
- (void)unlinkRemote;
- (void)unlinkSensor;

@end

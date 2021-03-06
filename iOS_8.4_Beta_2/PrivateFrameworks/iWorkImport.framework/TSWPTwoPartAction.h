/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTwoPartAction : NSObject {
    id _cancelAction;
    id _finishAction;
    bool _performImmediately;
    id _startAction;
}

@property(assign,readwrite) bool performImmediately;

+ (id)actionWithStartAction:(id)arg1 cancelAction:(id)arg2 finishAction:(id)arg3;

- (void)cancel;
- (void)dealloc;
- (id)initWithStartAction:(id)arg1 cancelAction:(id)arg2 finishAction:(id)arg3;
- (void)performFinishAction;
- (bool)performImmediately;
- (void)performStartAction;
- (void)setPerformImmediately:(bool)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationStreamingOperations : NSObject {
    <UITextInput> *_document;
    NSMutableArray *_operations;
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
}

@property (nonatomic, retain) NSMutableArray *operations;

- (void)_performReplaceSelectedText:(id)arg1;
- (void)clearOperations;
- (void)dealloc;
- (double)delayAfterSelector:(SEL)arg1;
- (void)dictationWillBeginInDocument:(id)arg1;
- (bool)hasOperations;
- (id)init;
- (bool)isEmpty;
- (bool)isNotEmpty;
- (id)operations;
- (void)performSelectRangeForSpeech:(id)arg1;
- (id)pop;
- (void)popAndInvoke;
- (void)pushInsertTextForSpeech:(id)arg1;
- (void)pushReplaceSelectionWithText:(id)arg1;
- (void)pushSelectRangeForSpeech:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)pushSpeechOperation:(id)arg1;
- (void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (unsigned long long)selectionChangeDelta;
- (void)setDocument:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)willEndEditingInInputDelegate:(id)arg1;

@end

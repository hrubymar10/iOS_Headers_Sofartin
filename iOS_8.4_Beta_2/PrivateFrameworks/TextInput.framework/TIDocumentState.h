/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIDocumentState : NSObject <NSSecureCoding> {
    NSString *_contextAfterInput;
    NSString *_contextBeforeInput;
    NSString *_markedText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _selectedRangeInMarkedText;
    NSString *_selectedText;
}

@property(assign,readonly) NSString * contextAfterInput;
@property(assign,readonly) NSString * contextBeforeInput;
@property(assign,readonly) NSString * markedText;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRangeInMarkedText;
@property(assign,readonly) NSString * selectedText;

+ (id)documentStateOfDocument:(id)arg1;
+ (id)documentStateOfSecureTextDocument:(id)arg1;
+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (bool)supportsSecureCoding;

- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2;
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2;
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(id)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(id)arg3;
- (id)contextAfterInput;
- (id)contextBeforeInput;
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)documentIsEmpty;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterCursorAdjustment:(long long)arg1;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterInsertingText:(id)arg1;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)documentStateAfterUnmarkingText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)initWithDocument:(id)arg1;
- (id)initWithSecureTextDocument:(id)arg1;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)inputIndexWithTerminatorPredicate:(id)arg1;
- (id)inputStemWithTerminatorPredicate:(id)arg1;
- (id)inputStringWithTerminatorPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)markedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeInMarkedText;
- (id)selectedText;
- (bool)string:(id)arg1 matchesString:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(id)arg2 reverse:(bool)arg3;

@end
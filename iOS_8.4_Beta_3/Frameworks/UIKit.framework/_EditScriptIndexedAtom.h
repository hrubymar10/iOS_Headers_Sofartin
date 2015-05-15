/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _EditScriptIndexedAtom : NSObject {
    long long _editOperation;
    unsigned long long _indexInArrayB;
    unsigned long long _indexToEdit;
    NSString *_replacementText;
}

@property(assign,readwrite) long long editOperation;
@property(assign,readwrite) unsigned long long indexInArrayB;
@property(assign,readwrite) unsigned long long indexToEdit;
@property(assign,retain) NSString * replacementText;

+ (id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;

- (void)dealloc;
- (id)description;
- (long long)editOperation;
- (unsigned long long)indexInArrayB;
- (unsigned long long)indexToEdit;
- (id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (id)replacementText;
- (void)setEditOperation:(long long)arg1;
- (void)setIndexInArrayB:(unsigned long long)arg1;
- (void)setIndexToEdit:(unsigned long long)arg1;
- (void)setReplacementText:(id)arg1;

@end

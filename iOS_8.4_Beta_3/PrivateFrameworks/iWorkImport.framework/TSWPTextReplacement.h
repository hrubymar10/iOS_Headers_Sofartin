/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction> {
    TSWPSelection *_selection;
    NSString *_string;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (long long)delta;
- (id)initWithSelection:(id)arg1 string:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder { }*)arg3 withFlags:(unsigned int)arg4 replaceBlock:(id)arg5;
- (unsigned long long)targetCharIndex;

@end

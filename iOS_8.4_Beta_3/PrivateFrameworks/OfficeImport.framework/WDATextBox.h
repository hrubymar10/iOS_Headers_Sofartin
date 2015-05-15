/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDATextBox : NSObject {
    WDDocument *mDocument;
    unsigned long long mNextTextBoxId;
    bool mOle;
    WDAContent *mParent;
    WDText *mText;
}

- (void)dealloc;
- (id)document;
- (id)init;
- (bool)isOle;
- (unsigned long long)nextTextBoxId;
- (id)parent;
- (void)setDocument:(id)arg1;
- (void)setNextTextBoxId:(unsigned long long)arg1;
- (void)setOle:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
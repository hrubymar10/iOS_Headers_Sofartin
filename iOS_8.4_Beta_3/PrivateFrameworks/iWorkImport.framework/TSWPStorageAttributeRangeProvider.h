/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageAttributeRangeProvider : TSWPStorageRangeProvider {
    struct TSWPAttributeEnumerator { id x1; unsigned long long x2; unsigned long long x3; struct TSWPAttributeArray {} *x4; bool x5; unsigned long long x6; bool x7; struct TSWPAttributeRecord { unsigned long long x_8_1_1; union { id x_2_2_1; struct TSWPParagraphData { union { struct { unsigned int x_1_5_1; } x_1_4_1; struct { unsigned short x_2_5_1; unsigned short x_2_5_2; } x_1_4_2; struct { unsigned short x_3_5_1; unsigned short x_3_5_2; } x_1_4_3; struct { int x_4_5_1; } x_1_4_4; struct { unsigned int x_5_5_1; } x_1_4_5; struct { unsigned short x_6_5_1; unsigned short x_6_5_2; } x_1_4_6; } x_2_3_1; } x_2_2_2; } x_8_1_2; } x8; } *_enumerator;
}

- (void)dealloc;
- (id)initWithStorage:(id)arg1 kind:(int)arg2;
- (void)nextRange;

@end
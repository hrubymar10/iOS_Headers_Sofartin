/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBSplitRow : NSObject {
    UIKBTree *_attrlistLeft;
    UIKBTree *_attrlistRight;
    struct CGSize { 
        double width; 
        double height; 
    } _defaultKeySize;
    UIKBTree *_geolistLeft;
    UIKBTree *_geolistRight;
    NSDictionary *_hints;
    UIKBTree *_keylistLeft;
    UIKBTree *_keylistRight;
    NSMutableArray *_keys;
    unsigned char _rowIndex;
    double _rowOffset;
    double _rowWidth;
    NSMutableArray *_vacancies;
}

@property(assign,readwrite) struct CGSize { double x1; double x2; } defaultKeySize;
@property(assign,retain) NSDictionary * hints;
@property(assign,readonly) NSMutableArray * keys;
@property(assign,readwrite) unsigned char rowIndex;
@property(assign,readwrite) double rowOffset;
@property(assign,readwrite) double rowWidth;

- (void)addKey:(id)arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultKeySize;
- (id)description;
- (id)hints;
- (id)init;
- (id)keyAtIndex:(int)arg1;
- (id)keys;
- (id)listOfType:(int)arg1 left:(bool)arg2;
- (unsigned char)rowIndex;
- (double)rowOffset;
- (double)rowWidth;
- (void)setDefaultKeySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHints:(id)arg1;
- (void)setRowIndex:(unsigned char)arg1;
- (void)setRowOffset:(double)arg1;
- (void)setRowWidth:(double)arg1;

@end

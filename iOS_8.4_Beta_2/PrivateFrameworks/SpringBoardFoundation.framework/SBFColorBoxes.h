/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFColorBoxes : NSObject {
    struct { /* ? */ } **_colorBoxes;
    unsigned long long _columnCount;
    double _contrast;
    unsigned long long _rowCount;
    unsigned long long _size;
}

@property(assign,readonly) struct { /* ? */ }** colorBoxes;
@property(assign,readonly) unsigned long long columnCount;
@property(assign,readonly) double contrast;
@property(assign,readonly) unsigned long long rowCount;
@property(assign,readonly) unsigned long long size;

- (void)_freeColorBoxes;
- (struct { /* ? */ }**)colorBoxes;
- (unsigned long long)columnCount;
- (double)contrast;
- (void)dealloc;
- (id)description;
- (id)initWithColorBoxes:(struct { /* ? */ }**)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 contrast:(double)arg5;
- (unsigned long long)rowCount;
- (unsigned long long)size;

@end
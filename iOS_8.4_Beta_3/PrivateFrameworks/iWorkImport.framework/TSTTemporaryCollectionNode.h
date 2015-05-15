/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTemporaryCollectionNode : NSObject {
    NSMutableArray *mChildren;
    struct TSCEVectorIndexPair { 
        unsigned short column; 
        unsigned short row; 
    } mDimensions;
    unsigned long long mFirstIndex;
    unsigned long long mLastIndex;
    NSMutableArray *mWhitespaceAfterDelimiters;
    NSString *mWhitespaceBeforeFirstChild;
}

@property(assign,retain) NSMutableArray * children;
@property(assign,readwrite) struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; } dimensions;
@property(assign,readwrite) unsigned long long firstIndex;
@property(assign,readwrite) unsigned long long lastIndex;
@property(assign,retain) NSMutableArray * whitespaceAfterDelimiters;
@property(assign,retain) NSString * whitespaceBeforeFirstChild;

- (id).cxx_construct;
- (id)children;
- (void)dealloc;
- (struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })dimensions;
- (unsigned long long)firstIndex;
- (id)init;
- (unsigned long long)lastIndex;
- (void)setChildren:(id)arg1;
- (void)setDimensions:(struct TSCEVectorIndexPair { unsigned short x1; unsigned short x2; })arg1;
- (void)setFirstIndex:(unsigned long long)arg1;
- (void)setLastIndex:(unsigned long long)arg1;
- (void)setWhitespaceAfterDelimiters:(id)arg1;
- (void)setWhitespaceBeforeFirstChild:(id)arg1;
- (id)whitespaceAfterDelimiters;
- (id)whitespaceBeforeFirstChild;

@end

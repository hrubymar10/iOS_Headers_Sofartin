/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUIndexedStringStore : NSObject {
    NSMutableDictionary *_indexByString;
    int _lock;
    NSMutableArray *_stringByIndex;
}

- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)indexForString:(id)arg1;
- (id)init;
- (id)stringForIndex:(unsigned long long)arg1;

@end

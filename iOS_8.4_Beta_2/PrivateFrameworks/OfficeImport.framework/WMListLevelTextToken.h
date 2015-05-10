/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMListLevelTextToken : NSObject {
    int m_level;
    NSString *m_string;
}

+ (id)tokenWithString:(id)arg1 andLevel:(int)arg2;

- (void)dealloc;
- (id)initWithString:(id)arg1 andLevel:(int)arg2;
- (int)level;
- (id)string;
- (id)stringForIndex:(unsigned long long)arg1 withFormat:(int)arg2 orNumberFormatter:(void**)arg3 initialNumber:(unsigned long long)arg4;

@end
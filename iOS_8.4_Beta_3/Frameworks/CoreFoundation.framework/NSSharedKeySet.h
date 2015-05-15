/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSSharedKeySet : NSObject <NSCoding, NSCopying, NSFastEnumeration> {
    unsigned int _M;
    double _c;
    unsigned int _factor;
    char *_g;
    id *_keys;
    unsigned int _numKey;
    void *_rankTable;
    unsigned int *_seeds;
    unsigned char _select;
    NSSharedKeySet *_subSharedKeySet;
}

@property unsigned int M;
@property double c;
@property unsigned int factor;
@property char *g;
@property id*keys;
@property unsigned int numKey;
@property void*rankTable;
@property unsigned int*seeds;
@property unsigned char select;
@property (retain) NSSharedKeySet *subSharedKeySet;

+ (id)keySetWithKeys:(id)arg1;

- (unsigned int)M;
- (id)allKeys;
- (double)c;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)factor;
- (void)finalize;
- (char *)g;
- (id)generateSubclassCode:(id)arg1 printChainOfKeySetIfPossible:(bool)arg2 printSpecialCode:(unsigned long long)arg3;
- (unsigned long long)hash;
- (unsigned long long)indexForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeys:(id*)arg1 count:(unsigned long long)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)keySetCount;
- (id*)keys;
- (unsigned long long)maximumIndex;
- (unsigned int)numKey;
- (void*)rankTable;
- (unsigned int*)seeds;
- (unsigned char)select;
- (void)setC:(double)arg1;
- (void)setFactor:(unsigned int)arg1;
- (void)setG:(char *)arg1;
- (void)setKeys:(id*)arg1;
- (void)setM:(unsigned int)arg1;
- (void)setNumKey:(unsigned int)arg1;
- (void)setRankTable:(void*)arg1;
- (void)setSeeds:(unsigned int*)arg1;
- (void)setSelect:(unsigned char)arg1;
- (void)setSubSharedKeySet:(id)arg1;
- (id)subSharedKeySet;

@end

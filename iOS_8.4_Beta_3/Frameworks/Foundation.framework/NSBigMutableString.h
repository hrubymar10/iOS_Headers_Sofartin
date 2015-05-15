/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBigMutableString : NSMutableString {
    union { 
        struct { 
            NSData *data; 
            char *dataBytes; 
        } d; 
        struct { 
            struct __CFStorage {} *storage; 
        } s; 
    } contents;
    struct { 
        unsigned int isStorage : 1; 
        unsigned int isUnicode : 1; 
        unsigned int hasBOM : 1; 
        unsigned int swap : 1; 
        unsigned int immutable : 1; 
        unsigned int  : 27; 
    } flags;
    unsigned long long length;
}

- (void)_checkForInvalidMutationWithSelector:(SEL)arg1;
- (bool)_copyStorage:(struct __CFStorage {}**)arg1 encoding:(unsigned long long*)arg2;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_getData:(id*)arg1 encoding:(unsigned long long*)arg2;
- (bool)_isCString;
- (bool)_isMarkedAsImmutable;
- (void)_markAsImmutable;
- (id)_newBigSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 wantsMutable:(bool)arg2 zone:(struct _NSZone { }*)arg3;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (bool)_setData:(id)arg1 encoding:(unsigned long long)arg2;
- (bool)_setStorage:(struct __CFStorage { }*)arg1 encoding:(unsigned long long)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithStorage:(struct __CFStorage { }*)arg1 length:(unsigned long long)arg2 isUnicode:(bool)arg3;
- (id)initWithString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;

@end

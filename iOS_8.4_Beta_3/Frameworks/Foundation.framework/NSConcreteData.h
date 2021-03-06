/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteData : NSData {
    void *_bytes;
    unsigned long long _capacity;
    unsigned int _isInline;
    unsigned long long _length;
    unsigned int _retainCount;
    /* Warning: unhandled union encoding: '(?="_space"[12C]"_deallocator"@?)' */ union { 
        unsigned char _space[12]; 
        id _deallocator; 
    } _u;
}

- (bool)_copyWillRetain;
- (bool)_isCompact;
- (const void*)bytes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 freeWhenDone:(bool)arg4 bytesAreVM:(bool)arg5;
- (unsigned long long)length;

@end

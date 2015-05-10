/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAddressCheckingResult : NSTextCheckingResult {
    NSDictionary *_components;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    id _underlyingResult;
}

@property(assign,readonly) void* underlyingResult;

- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)components;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 components:(id)arg2;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 components:(id)arg2 underlyingResult:(void*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;
- (void*)underlyingResult;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSCFURLProtocol : NSURLProtocol {
    struct NSCFURLProtocolClient { int (**x1)(); int (**x2)(); id x3; id x4; } *_client;
    struct _CFURLProtocol { } *_prot;
}

+ (const struct InternalProtocolImplementation { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*)_cf_internalImpl;
+ (bool)canInitWithTask:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCDistantObjectSynchronousWithError : _NSXPCDistantObjectWithError {
    double _timeout;
}

@property double timeout;

- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 error:(id)arg5 timeout:(double)arg6;
- (void)forwardInvocation:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end

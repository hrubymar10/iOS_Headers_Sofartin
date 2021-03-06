/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUAssertionHandler : NSAssertionHandler

+ (id)currentHandler;
+ (void)installAsNSHandler;
+ (id)performBlockIgnoringAssertions:(id)arg1;
+ (void)testCaseStarted:(id)arg1;
+ (void)testCaseStopped:(id)arg1;

- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;
- (void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char *)arg5;

@end

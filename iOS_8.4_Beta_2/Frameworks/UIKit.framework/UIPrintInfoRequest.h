/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintInfoRequest : NSObject {
    id _completionHandler;
    PKPrinter *_printer;
    int _requestState;
}

@property(assign,copy) id completionHandler;
@property(assign,readwrite) int requestState;

+ (id)requestInfoForPrinter:(id)arg1;

- (id)completionHandler;
- (void)dealloc;
- (void)requestPrintInfo;
- (int)requestState;
- (void)setCompletionHandler:(id)arg1;
- (void)setRequestState:(int)arg1;

@end

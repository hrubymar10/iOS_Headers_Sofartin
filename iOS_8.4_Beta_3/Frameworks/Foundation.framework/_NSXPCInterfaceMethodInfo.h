/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCInterfaceMethodInfo : NSObject {
    NSMutableArray *_arguments;
    NSMutableArray *_replyArguments;
    int _replyPosition;
    char *_replySignature;
}

@property(assign,retain) NSMutableArray * arguments;
@property(assign,retain) NSMutableArray * replyArguments;
@property(assign,readwrite) int replyPosition;

- (id)arguments;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)replyArguments;
- (int)replyPosition;
- (const char *)replySignature;
- (void)setArguments:(id)arg1;
- (void)setReplyArguments:(id)arg1;
- (void)setReplyPosition:(int)arg1;
- (void)setReplySignature:(id)arg1;

@end

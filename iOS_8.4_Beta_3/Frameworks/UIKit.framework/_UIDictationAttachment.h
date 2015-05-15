/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDictationAttachment : NSTextAttachment {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _attachmentRange;
    NSDictionary *_typingAttributesBeforeInsertion;
}

@property(assign,readwrite) struct _NSRange { unsigned long long x1; unsigned long long x2; } attachmentRange;
@property(assign,copy) NSDictionary * typingAttributesBeforeInsertion;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })attachmentRange;
- (void)dealloc;
- (void)setAttachmentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTypingAttributesBeforeInsertion:(id)arg1;
- (id)typingAttributesBeforeInsertion;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailComposeAttachmentWrapper : NSObject {
    NSData *_data;
    NSString *_fileName;
    NSString *_identifier;
    NSString *_mimeType;
}

@property(assign,readonly) NSData * data;
@property(assign,readonly) NSString * fileName;
@property(assign,readonly) NSString * identifier;
@property(assign,readonly) NSString * mimeType;

+ (id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;

- (id)data;
- (void)dealloc;
- (id)fileName;
- (id)identifier;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)mimeType;

@end
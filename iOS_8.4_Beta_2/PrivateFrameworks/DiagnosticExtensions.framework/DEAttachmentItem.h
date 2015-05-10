/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DEAttachmentItem : NSObject <NSSecureCoding> {
    NSURL *_attachedPath;
    NSString *_attachmentType;
    NSNumber *_deleteOnAttach;
    NSString *_displayName;
    NSNumber *_filesize;
    NSDate *_modificationDate;
    NSURL *_path;
    NSNumber *_shouldCompress;
}

@property(assign,retain) NSURL * attachedPath;
@property(assign,copy) NSString * attachmentType;
@property(assign,copy) NSNumber * deleteOnAttach;
@property(assign,retain) NSString * displayName;
@property(assign,retain) NSNumber * filesize;
@property(assign,retain) NSDate * modificationDate;
@property(assign,retain) NSURL * path;
@property(assign,retain) NSNumber * shouldCompress;

+ (id)newAttachmentWithPath:(id)arg1;
+ (id)newAttachmentWithPath:(id)arg1 withDisplayName:(id)arg2 modificationDate:(id)arg3 andFilesize:(id)arg4;
+ (id)newAttachmentWithPathURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachWithDestinationDir:(id)arg1;
- (id)attachedPath;
- (id)attachmentType;
- (id)deleteOnAttach;
- (id)description;
- (void)detach;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)filesize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)modificationDate;
- (id)path;
- (void)setAttachedPath:(id)arg1;
- (void)setAttachmentType:(id)arg1;
- (void)setDeleteOnAttach:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFilesize:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setShouldCompress:(id)arg1;
- (id)shouldCompress;
- (id)writeAssetToDiskWithURL:(id)arg1 toDirectory:(id)arg2;

@end

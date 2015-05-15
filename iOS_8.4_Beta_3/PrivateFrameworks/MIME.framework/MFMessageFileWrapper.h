/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageFileWrapper : NSObject {
    NSMutableDictionary *_attributes;
    NSData *_data;
    NSString *_filename;
    NSString *_linkDestination;
    NSString *_path;
    NSString *_preferredFilename;
    int _type;
    NSString *_url;
}

+ (id)supportedArchivedClassNames;

- (id)URL;
- (void)_isImage:(bool*)arg1 orPDFFile:(bool*)arg2;
- (bool)_pathExtensionEquals:(id)arg1;
- (id)contentID;
- (unsigned int)creator;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventUniqueID;
- (id)fileAttributes;
- (id)fileProtection;
- (id)fileWrappers;
- (id)filename;
- (unsigned short)finderFlags;
- (id)icsRepresentation;
- (id)inferredMimeType;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestination:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)isDirectory;
- (bool)isDisplayableByWebKit;
- (bool)isDisplayableImage;
- (bool)isImageFile;
- (bool)isMedia;
- (bool)isPDFFile;
- (bool)isPlaceholder;
- (bool)isRFC822;
- (bool)isRegularFile;
- (bool)isSymbolicLink;
- (bool)isUnzippableFile;
- (bool)isZip;
- (id)meetingStorePersistentID;
- (id)messageID;
- (id)mimeType;
- (float)minimumZoomFontSize;
- (id)path;
- (id)preferredFilename;
- (id)preferredFilenameStrippingZipIfNeededUseApplications:(bool)arg1;
- (id)regularFileContents;
- (void)setContentID:(id)arg1;
- (void)setCreator:(unsigned int)arg1;
- (void)setEventUniqueID:(id)arg1;
- (void)setFileAttributes:(id)arg1;
- (void)setFileProtection:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFinderFlags:(unsigned short)arg1;
- (void)setICSRepresentation:(id)arg1;
- (void)setMeetingStorePersistentID:(id)arg1;
- (void)setMessageID:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setURL:(id)arg1;
- (id)symbolicLinkDestination;
- (unsigned int)type;

@end

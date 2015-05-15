/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipEntry : NSObject {
    unsigned int _CRC;
    bool _compressed;
    unsigned long long _compressedSize;
    unsigned short _extraFieldsLength;
    unsigned long long _fileHeaderLength;
    NSString *_name;
    unsigned short _nameLength;
    unsigned long long _offset;
    unsigned long long _size;
}

@property (nonatomic) unsigned int CRC;
@property (getter=isCompressed, nonatomic) bool compressed;
@property (nonatomic) unsigned long long compressedSize;
@property (nonatomic) unsigned short extraFieldsLength;
@property (nonatomic) unsigned long long fileHeaderLength;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned short nameLength;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (unsigned int)CRC;
- (unsigned long long)compressedSize;
- (id)description;
- (unsigned short)extraFieldsLength;
- (unsigned long long)fileHeaderLength;
- (bool)isCompressed;
- (id)name;
- (unsigned short)nameLength;
- (unsigned long long)offset;
- (void)setCRC:(unsigned int)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setCompressedSize:(unsigned long long)arg1;
- (void)setExtraFieldsLength:(unsigned short)arg1;
- (void)setFileHeaderLength:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setNameLength:(unsigned short)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipWriter : NSObject {
    bool _calculateCRC;
    bool _calculateSize;
    TSUZipWriterEntry *_currentEntry;
    long long _currentOffset;
    NSMutableArray *_entries;
    NSMutableDictionary *_entriesMap;
    unsigned long long _entryDataSize;
    NSMutableArray *_entryDatas;
    unsigned short _entryDate;
    unsigned short _entryTime;
    NSError *_error;
    bool _force32BitSize;
    bool _isClosed;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
}

@property(assign,readonly) unsigned long long archiveLength;
@property(assign,readonly) <TSURandomWriteChannel> * writeChannel;

- (void).cxx_destruct;
- (void)addBarrier:(id)arg1;
- (void)addData:(id)arg1;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (unsigned long long)archiveLength;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(bool)arg2;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(bool)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(bool)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4;
- (void)closeWithQueue:(id)arg1 completion:(id)arg2;
- (unsigned long long)encodedLengthForEntryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id)arg1;
- (void)finishEntry;
- (void)flushEntryData;
- (void)handleWriteError:(id)arg1;
- (id)init;
- (void)initEntryTime;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (id)writeChannel;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 fromReadChannel:(id)arg3 completion:(id)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 completion:(id)arg6;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(bool)arg2 size:(unsigned long long)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 writeHandler:(id)arg6;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;

@end

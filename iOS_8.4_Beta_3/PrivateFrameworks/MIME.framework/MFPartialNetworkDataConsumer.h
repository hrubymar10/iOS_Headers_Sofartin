/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPartialNetworkDataConsumer : NSObject <MFDataConsumer> {
    unsigned long long _length;
    <MFGuaranteedCollectingDataConsumer> *_rawDataConsumer;
    unsigned int _seenNetworkLineEndings;
    NSData *_strippedData;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)copyDataWithUnixLineEndings;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (unsigned long long)length;
- (void)purge;

@end
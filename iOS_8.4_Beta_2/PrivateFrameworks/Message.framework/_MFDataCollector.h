/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    bool _incomplete;
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    NSString *_part;
    bool _partial;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(bool)arg4 incomplete:(bool)arg5;
- (id)pathForStorage;

@end

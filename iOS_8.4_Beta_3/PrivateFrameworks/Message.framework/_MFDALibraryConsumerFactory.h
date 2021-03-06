/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFMessageLibrary *library;
@property (nonatomic, retain) MFMessage *message;
@property (readonly) Class superclass;

- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (id)library;
- (id)message;
- (void)setLibrary:(id)arg1;
- (void)setMessage:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) MFMessageLibrary * library;
@property(assign,retain) MFMessage * message;
@property(assign,readonly) Class superclass;

- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (id)library;
- (id)message;
- (void)setLibrary:(id)arg1;
- (void)setMessage:(id)arg1;

@end

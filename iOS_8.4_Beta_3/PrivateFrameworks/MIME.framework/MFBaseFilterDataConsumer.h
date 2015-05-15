/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
    NSMutableArray *_consumers;
    bool _serialAppend;
}

@property(assign,readonly) NSArray * consumers;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=isSerialAppend,assign,readwrite) bool serialAppend;
@property(assign,readonly) Class superclass;

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;

- (long long)appendData:(id)arg1;
- (id)consumers;
- (void)dealloc;
- (void)done;
- (id)initWithConsumer:(id)arg1;
- (id)initWithConsumers:(id)arg1;
- (bool)isSerialAppend;
- (void)setSerialAppend:(bool)arg1;

@end

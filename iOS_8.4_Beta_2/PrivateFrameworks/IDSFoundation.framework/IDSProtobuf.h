/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSProtobuf : NSObject <NSCoding> {
    NSMutableDictionary *_protoBufParams;
    NSData *_uncompressedData;
}

@property(assign,retain) IDSMessageContext * context;
@property(assign,retain) NSData * data;
@property(assign,readwrite) bool isResponse;
@property(assign,readwrite) unsigned short type;
@property(assign,retain) NSData * uncompressedData;

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(bool)arg2;

- (id)context;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithUncompressedData;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(bool)arg3;
- (bool)isResponse;
- (id)nfmDescription;
- (id)npkDescription;
- (id)pbDescription;
- (void)setContext:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIsResponse:(bool)arg1;
- (void)setType:(unsigned short)arg1;
- (void)setUncompressedData:(id)arg1;
- (unsigned short)type;
- (id)uncompressedData;

@end

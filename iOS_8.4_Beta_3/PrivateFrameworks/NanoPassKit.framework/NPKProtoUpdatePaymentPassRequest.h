/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoUpdatePaymentPassRequest : PBRequest <NSCopying> {
    NSString *_passTypeIdentifier;
}

@property (nonatomic, retain) NSString *passTypeIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passTypeIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

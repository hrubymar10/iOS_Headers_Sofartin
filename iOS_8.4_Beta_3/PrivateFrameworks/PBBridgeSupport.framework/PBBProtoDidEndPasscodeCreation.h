/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {
    struct { 
        unsigned int isLong : 1; 
    } _has;
    bool _isLong;
    bool _success;
}

@property (nonatomic) bool hasIsLong;
@property (nonatomic) bool isLong;
@property (nonatomic) bool success;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsLong;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLong;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsLong:(bool)arg1;
- (void)setIsLong:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end

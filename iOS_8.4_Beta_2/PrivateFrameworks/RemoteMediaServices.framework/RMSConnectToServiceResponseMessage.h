/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSConnectToServiceResponseMessage : PBCodable <NSCopying> {
    RMSControlInterfaceMessage *_controlInterface;
    struct { 
        unsigned int responseCode : 1; 
        unsigned int sessionIdentifier : 1; 
    } _has;
    int _responseCode;
    int _sessionIdentifier;
}

@property(assign,retain) RMSControlInterfaceMessage * controlInterface;
@property(assign,readonly) bool hasControlInterface;
@property(assign,readwrite) bool hasResponseCode;
@property(assign,readwrite) bool hasSessionIdentifier;
@property(assign,readwrite) int responseCode;
@property(assign,readwrite) int sessionIdentifier;

- (void).cxx_destruct;
- (id)controlInterface;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasControlInterface;
- (bool)hasResponseCode;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseCode;
- (int)sessionIdentifier;
- (void)setControlInterface:(id)arg1;
- (void)setHasResponseCode:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setResponseCode:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end

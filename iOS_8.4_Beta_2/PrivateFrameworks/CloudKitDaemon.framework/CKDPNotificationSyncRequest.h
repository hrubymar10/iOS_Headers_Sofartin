/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int maxChanges : 1; 
    } _has;
    unsigned int _maxChanges;
    NSData *_serverChangeToken;
}

@property(assign,readwrite) bool hasMaxChanges;
@property(assign,readonly) bool hasServerChangeToken;
@property(assign,readwrite) unsigned int maxChanges;
@property(assign,retain) NSData * serverChangeToken;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxChanges;
- (bool)hasServerChangeToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxChanges;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverChangeToken;
- (void)setHasMaxChanges:(bool)arg1;
- (void)setMaxChanges:(unsigned int)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end

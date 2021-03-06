/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocationBound : PBCodable <NSCopying> {
    struct { 
        unsigned int radius : 1; 
    } _has;
    double _radius;
}

@property(assign,readwrite) bool hasRadius;
@property(assign,readwrite) double radius;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRadius;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)radius;
- (bool)readFrom:(id)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setRadius:(double)arg1;
- (void)writeTo:(id)arg1;

@end

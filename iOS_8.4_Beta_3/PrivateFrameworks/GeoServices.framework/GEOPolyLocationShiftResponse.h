/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _parameters;
    double _radius;
    int _status;
}

@property (nonatomic, readonly) double*parameters;
@property (nonatomic, readonly) unsigned long long parametersCount;
@property (nonatomic) double radius;
@property (nonatomic) int status;

- (void)addParameters:(double)arg1;
- (void)clearParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double*)parameters;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)parametersCount;
- (double)radius;
- (bool)readFrom:(id)arg1;
- (void)setParameters:(double*)arg1 count:(unsigned long long)arg2;
- (void)setRadius:(double)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end

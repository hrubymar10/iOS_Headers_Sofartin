/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributionApp : PBCodable <NSCopying> {
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *handledSchemes;

- (void)addHandledSchemes:(id)arg1;
- (id)appBundleIdentifier;
- (void)clearHandledSchemes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handledSchemes;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setHandledSchemes:(id)arg1;
- (void)writeTo:(id)arg1;

@end

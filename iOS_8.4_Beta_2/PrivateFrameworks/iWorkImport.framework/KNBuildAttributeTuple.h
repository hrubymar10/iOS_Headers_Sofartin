/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAttributeTuple : TSPObject <NSCopying> {
    KNBuildAttributeValue *_attributeValue;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    bool _definedAttributeValue;
    bool _definedBuildChunkIdentifier;
    bool _definedBuildId;
    NSString *_property;
}

@property(assign,readonly) KNBuild * build;
@property(assign,readonly) KNBuildChunk * chunk;
@property(assign,readonly) bool isBuildTuple;
@property(assign,readonly) bool isChunkTuple;
@property(assign,readonly) NSString * property;
@property(assign,readonly) KNBuildAttributeValue * value;

+ (id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 referent:(unsigned long long)arg2;

- (id)build;
- (id)chunk;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4;
- (id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (bool)isBuildTuple;
- (bool)isChunkTuple;
- (id)property;
- (id)value;

@end
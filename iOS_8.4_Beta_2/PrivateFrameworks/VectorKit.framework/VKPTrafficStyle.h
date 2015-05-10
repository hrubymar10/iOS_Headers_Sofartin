/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPTrafficStyle : PBCodable <NSCopying> {
    float _fadingOffset;
    float _fadingSlope;
    unsigned int _fillColor;
    struct { 
        unsigned int fadingOffset : 1; 
        unsigned int fadingSlope : 1; 
        unsigned int fillColor : 1; 
        unsigned int patternLength : 1; 
        unsigned int patternSlotLength : 1; 
        unsigned int patternWidth : 1; 
        unsigned int secondaryColor : 1; 
        unsigned int uNUSEDPattern : 1; 
        unsigned int widthFraction : 1; 
    } _has;
    float _patternLength;
    float _patternSlotLength;
    float _patternWidth;
    unsigned int _secondaryColor;
    int _uNUSEDPattern;
    float _widthFraction;
}

@property(assign,readwrite) float fadingOffset;
@property(assign,readwrite) float fadingSlope;
@property(assign,readwrite) unsigned int fillColor;
@property(assign,readwrite) bool hasFadingOffset;
@property(assign,readwrite) bool hasFadingSlope;
@property(assign,readwrite) bool hasFillColor;
@property(assign,readwrite) bool hasPatternLength;
@property(assign,readwrite) bool hasPatternSlotLength;
@property(assign,readwrite) bool hasPatternWidth;
@property(assign,readwrite) bool hasSecondaryColor;
@property(assign,readwrite) bool hasUNUSEDPattern;
@property(assign,readwrite) bool hasWidthFraction;
@property(assign,readwrite) float patternLength;
@property(assign,readwrite) float patternSlotLength;
@property(assign,readwrite) float patternWidth;
@property(assign,readwrite) unsigned int secondaryColor;
@property(assign,readwrite) int uNUSEDPattern;
@property(assign,readwrite) float widthFraction;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)fadingOffset;
- (float)fadingSlope;
- (unsigned int)fillColor;
- (bool)hasFadingOffset;
- (bool)hasFadingSlope;
- (bool)hasFillColor;
- (bool)hasPatternLength;
- (bool)hasPatternSlotLength;
- (bool)hasPatternWidth;
- (bool)hasSecondaryColor;
- (bool)hasUNUSEDPattern;
- (bool)hasWidthFraction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)patternLength;
- (float)patternSlotLength;
- (float)patternWidth;
- (bool)readFrom:(id)arg1;
- (unsigned int)secondaryColor;
- (void)setFadingOffset:(float)arg1;
- (void)setFadingSlope:(float)arg1;
- (void)setFillColor:(unsigned int)arg1;
- (void)setHasFadingOffset:(bool)arg1;
- (void)setHasFadingSlope:(bool)arg1;
- (void)setHasFillColor:(bool)arg1;
- (void)setHasPatternLength:(bool)arg1;
- (void)setHasPatternSlotLength:(bool)arg1;
- (void)setHasPatternWidth:(bool)arg1;
- (void)setHasSecondaryColor:(bool)arg1;
- (void)setHasUNUSEDPattern:(bool)arg1;
- (void)setHasWidthFraction:(bool)arg1;
- (void)setPatternLength:(float)arg1;
- (void)setPatternSlotLength:(float)arg1;
- (void)setPatternWidth:(float)arg1;
- (void)setSecondaryColor:(unsigned int)arg1;
- (void)setUNUSEDPattern:(int)arg1;
- (void)setWidthFraction:(float)arg1;
- (int)uNUSEDPattern;
- (float)widthFraction;
- (void)writeTo:(id)arg1;

@end
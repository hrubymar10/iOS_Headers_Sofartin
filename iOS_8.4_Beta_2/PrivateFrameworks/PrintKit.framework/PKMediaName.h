/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKMediaName : NSObject {
    NSString *_baseName;
    double _conversionFactor;
    double _heightInUnits;
    NSString *_mediaClass;
    NSString *_mediaName;
    long long _units;
    double _widthInUnits;
    NSString *_widthStr;
}

@property(assign,retain) NSString * baseName;
@property(assign,readwrite) double conversionFactor;
@property(assign,readonly) double height;
@property(assign,readwrite) double heightInUnits;
@property(assign,readonly) bool isRoll;
@property(assign,retain) NSString * mediaClass;
@property(assign,retain) NSString * mediaName;
@property(assign,retain) NSString * unitStr;
@property(assign,readwrite) long long units;
@property(assign,readonly) double width;
@property(assign,readwrite) double widthInUnits;
@property(assign,retain) NSString * widthStr;

+ (id)pkMediaNameWithString:(id)arg1;

- (id)baseName;
- (double)conversionFactor;
- (void)dealloc;
- (double)height;
- (double)heightInUnits;
- (id)initWithString:(id)arg1;
- (bool)isRoll;
- (id)mediaClass;
- (id)mediaName;
- (void)parseMediaName:(id)arg1;
- (void)setBaseName:(id)arg1;
- (void)setConversionFactor:(double)arg1;
- (void)setHeightInUnits:(double)arg1;
- (void)setMediaClass:(id)arg1;
- (void)setMediaName:(id)arg1;
- (void)setUnits:(long long)arg1;
- (void)setWidthInUnits:(double)arg1;
- (void)setWidthStr:(id)arg1;
- (id)unitStr;
- (long long)units;
- (double)width;
- (double)widthInUnits;
- (id)widthStr;

@end

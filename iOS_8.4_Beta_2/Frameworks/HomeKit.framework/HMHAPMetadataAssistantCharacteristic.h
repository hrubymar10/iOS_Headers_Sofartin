/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding> {
    NSString *_format;
    NSString *_name;
    NSString *_readHAPCharacteristicName;
    NSString *_readHAPCharacteristicType;
    bool _supportsLocalization;
    NSDictionary *_values;
    NSString *_writeHAPCharacteristicName;
    NSString *_writeHAPCharacteristicType;
}

@property(assign,retain) NSString * format;
@property(assign,retain) NSString * name;
@property(assign,retain) NSString * readHAPCharacteristicName;
@property(assign,retain) NSString * readHAPCharacteristicType;
@property(assign,readwrite) bool supportsLocalization;
@property(assign,retain) NSDictionary * values;
@property(assign,retain) NSString * writeHAPCharacteristicName;
@property(assign,retain) NSString * writeHAPCharacteristicType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)readHAPCharacteristicName;
- (id)readHAPCharacteristicType;
- (void)setFormat:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReadHAPCharacteristicName:(id)arg1;
- (void)setReadHAPCharacteristicType:(id)arg1;
- (void)setSupportsLocalization:(bool)arg1;
- (void)setValues:(id)arg1;
- (void)setWriteHAPCharacteristicName:(id)arg1;
- (void)setWriteHAPCharacteristicType:(id)arg1;
- (bool)supportsLocalization;
- (id)values;
- (id)writeHAPCharacteristicName;
- (id)writeHAPCharacteristicType;

@end

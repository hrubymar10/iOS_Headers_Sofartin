/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBarcode : NSObject <NSSecureCoding> {
    NSString *_altText;
    long long _format;
    NSData *_messageData;
    NSDictionary *_options;
}

@property (nonatomic, copy) NSString *altText;
@property (nonatomic) long long format;
@property (nonatomic, readonly) bool isTall;
@property (nonatomic, copy) NSData *messageData;
@property (nonatomic, copy) NSDictionary *options;

+ (bool)supportsSecureCoding;

- (id)_imageFromBarcodeMessage;
- (id)_imageFromTextMessage;
- (id)altText;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)format;
- (unsigned long long)hash;
- (id)image;
- (id)initWithBarcodeDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTall;
- (id)messageData;
- (id)options;
- (void)setAltText:(id)arg1;
- (void)setFormat:(long long)arg1;
- (void)setMessageData:(id)arg1;
- (void)setOptions:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEntity : NSObject {
    IMHandle *_handle;
}

@property(assign,copy) NSString * IDSCanonicalAddress;
@property(assign,readonly) void* abRecord;
@property(assign,retain) IMHandle * defaultIMHandle;
@property(assign,copy) NSString * fullName;
@property(assign,retain) IMHandle * handle;
@property(assign,readonly) int identifier;
@property(assign,retain) UIImage * locationMapViewContactImage;
@property(assign,retain) UIImage * locationShareBalloonContactImage;
@property(assign,copy) NSString * name;
@property(assign,copy) NSString * originalAddress;
@property(assign,readonly) int propertyType;
@property(assign,copy) NSString * rawAddress;
@property(assign,copy) NSString * textToneIdentifier;
@property(assign,copy) NSString * textVibrationIdentifier;
@property(assign,retain) UIImage * transcriptContactImage;
@property(assign,retain) UIImage * transcriptDrawerContactImage;

+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
+ (id)copyEntityForAddressString:(id)arg1;

- (id)IDSCanonicalAddress;
- (void*)abRecord;
- (void)dealloc;
- (id)defaultIMHandle;
- (id)description;
- (id)fullName;
- (id)handle;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithIMHandle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationMapViewContactImage;
- (id)locationShareBalloonContactImage;
- (id)name;
- (id)originalAddress;
- (id)personViewControllerWithDelegate:(id)arg1;
- (int)propertyType;
- (id)rawAddress;
- (void)setHandle:(id)arg1;
- (id)textToneIdentifier;
- (id)textVibrationIdentifier;
- (id)transcriptContactImage;
- (id)transcriptDrawerContactImage;

@end

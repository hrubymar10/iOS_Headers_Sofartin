/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding> {
    NSString *_iccid;
    bool _isBootstrap;
    bool _isSelected;
    NSData *_profileId;
}

@property(assign,copy) NSString * iccid;
@property(assign,readwrite) bool isBootstrap;
@property(assign,readwrite) bool isSelected;
@property(assign,copy) NSData * profileId;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(bool)arg3 bootstrap:(bool)arg4;
- (bool)isBootstrap;
- (bool)isSelected;
- (id)profileId;
- (void)setIccid:(id)arg1;
- (void)setIsBootstrap:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setProfileId:(id)arg1;

@end
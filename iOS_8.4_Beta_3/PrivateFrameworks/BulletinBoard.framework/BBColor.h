/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBColor : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    double _alpha;
    double _blue;
    double _green;
    double _red;
}

@property(assign,readonly) double alpha;
@property(assign,readonly) double blue;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) double green;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) double red;
@property(assign,readonly) Class superclass;
@property(assign,copy) UIColor * uiColor;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)_initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (double)alpha;
- (double)blue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)green;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)red;
- (id)uiColor;
- (id)uniqueIdentifier;

@end
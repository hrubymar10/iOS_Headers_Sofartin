/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKFourTuple : NSObject <NSCopying> {
    NSString *_namedStyle;
    long long _specifiedValueCount;
    double _values;
}

@property(assign,readonly) struct IKCornerRadii { double x1; double x2; double x3; double x4; } cornerRadiiValue;
@property(assign,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsetsValue;
@property(assign,readonly) NSString * namedStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct IKCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsValue;
- (id)initWithStyleString:(id)arg1;
- (id)namedStyle;

@end
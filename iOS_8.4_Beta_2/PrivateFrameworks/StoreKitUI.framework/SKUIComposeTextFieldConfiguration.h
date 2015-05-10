/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIComposeTextFieldConfiguration : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _borderInsets;
    long long _columnIndex;
    bool _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property(assign,readwrite) long long columnIndex;
@property(assign,copy) NSString * label;
@property(assign,readwrite) unsigned long long maxLength;
@property(assign,copy) NSString * placeholder;
@property(getter=isRequired,assign,readwrite) bool required;
@property(assign,copy) NSString * value;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (long long)columnIndex;
- (bool)isRequired;
- (id)label;
- (unsigned long long)maxLength;
- (id)placeholder;
- (void)setBorderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setColumnIndex:(long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRequired:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

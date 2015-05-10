/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUComposeTextFieldConfiguration : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _borderInsets;
    bool _isRequired;
    NSString *_label;
    unsigned long long _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderInsets;
@property(assign,retain) NSString * label;
@property(assign,readwrite) unsigned long long maxLength;
@property(assign,retain) NSString * placeholder;
@property(getter=isRequired,assign,readwrite) bool required;
@property(assign,retain) NSString * value;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderInsets;
- (void)dealloc;
- (bool)isRequired;
- (id)label;
- (unsigned long long)maxLength;
- (id)placeholder;
- (void)setBorderInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRequired:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewRow : NSObject <NSCoding> {
    UITableViewCell *_cell;
    double _height;
    long long _indentationLevel;
}

@property(assign,retain) UITableViewCell * cell;
@property(assign,readwrite) double height;

+ (id)row;

- (id)cell;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)height;
- (long long)indentationLevel;
- (id)initWithCoder:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setIndentationLevel:(long long)arg1;

@end

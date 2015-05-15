/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewSection : NSObject <NSCoding> {
    NSString *_footerTitle;
    UIView *_footerView;
    NSString *_headerTitle;
    UIView *_headerView;
    NSArray *_rows;
}

@property(assign,copy) NSString * footerTitle;
@property(assign,retain) UIView * footerView;
@property(assign,copy) NSString * headerTitle;
@property(assign,retain) UIView * headerView;
@property(assign,copy) NSArray * rows;

+ (id)sectionWithRows:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)footerTitle;
- (id)footerView;
- (id)headerTitle;
- (id)headerView;
- (id)initWithCoder:(id)arg1;
- (id)rows;
- (void)setFooterTitle:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setRows:(id)arg1;

@end
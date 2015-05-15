/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTabBarAppearance : NSObject <NSCopying> {
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    double _tabBarButtonSpacing;
    double _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property(assign,retain) UIImage * backgroundImage;
@property(assign,retain) UIImage * dividerImage;
@property(assign,retain) UIImage * selectedDividerImage;
@property(assign,retain) UIImage * selectionIndicatorImage;
@property(assign,readwrite) double tabBarButtonSpacing;
@property(assign,readwrite) double tabBarButtonWidth;

- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dividerImage;
- (void)enumerateTitleTextAttributesUsingBlock:(id)arg1;
- (id)selectedDividerImage;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (void)setDividerImage:(id)arg1;
- (void)setSelectedDividerImage:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setTabBarButtonSpacing:(double)arg1;
- (void)setTabBarButtonWidth:(double)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (double)tabBarButtonSpacing;
- (double)tabBarButtonWidth;
- (id)titleTextAttributesForState:(unsigned long long)arg1;

@end
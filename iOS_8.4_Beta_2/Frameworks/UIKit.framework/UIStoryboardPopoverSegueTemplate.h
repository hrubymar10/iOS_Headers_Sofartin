/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {
    UIBarButtonItem *_anchorBarButtonItem;
    UIView *_anchorView;
    NSArray *_passthroughViews;
    unsigned long long _permittedArrowDirections;
}

@property(assign,retain) UIBarButtonItem * anchorBarButtonItem;
@property(assign,retain) UIView * anchorView;
@property(assign,copy) NSArray * passthroughViews;
@property(assign,readwrite) unsigned long long permittedArrowDirections;

- (id)anchorBarButtonItem;
- (id)anchorView;
- (void)dealloc;
- (id)defaultSegueClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)passthroughViews;
- (unsigned long long)permittedArrowDirections;
- (id)segueWithDestinationViewController:(id)arg1;
- (void)setAnchorBarButtonItem:(id)arg1;
- (void)setAnchorView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;

@end

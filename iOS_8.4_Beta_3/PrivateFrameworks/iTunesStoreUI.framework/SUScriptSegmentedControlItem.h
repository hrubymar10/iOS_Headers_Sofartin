/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSegmentedControlItem : SUScriptObject {
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageURLString;
    NSString *_title;
    id _userInfo;
}

@property(assign,retain) SUScriptCanvasContext * canvas;
@property(assign,retain) NSString * identifier;
@property(assign,readonly) UIImage * image;
@property(assign,retain) NSString * imageURL;
@property(assign,retain) NSString * title;
@property(assign,retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (void)_reloadUserInterface;
- (id)_segmentedControl;
- (void)_setImage:(id)arg1;
- (id)attributeKeys;
- (id)canvas;
- (void)dealloc;
- (id)identifier;
- (id)image;
- (id)imageURL;
- (id)initWithPageSection:(id)arg1;
- (id)newPageSection;
- (id)scriptAttributeKeys;
- (void)setCanvas:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)title;
- (id)userInfo;

@end

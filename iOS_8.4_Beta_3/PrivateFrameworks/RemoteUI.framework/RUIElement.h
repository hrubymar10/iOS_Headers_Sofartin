/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIElement : NSObject {
    NSDictionary *_attributes;
    bool _enabled;
}

@property (nonatomic, retain) NSDictionary *attributes;
@property (nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)URLAttributeForImageName:(id)arg1 getScale:(double*)arg2;
- (int)_horizontalAlignmentForString:(id)arg1;
- (id)attributes;
- (void)dealloc;
- (bool)enabled;
- (void)imageLoaded:(id)arg1;
- (id)init;
- (bool)loadImage;
- (id)name;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)sourceURL;
- (id)subElementsWithName:(id)arg1;

@end

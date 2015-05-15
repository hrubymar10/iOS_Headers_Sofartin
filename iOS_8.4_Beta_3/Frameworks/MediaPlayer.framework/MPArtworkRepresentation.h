/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkRepresentation : NSObject {
    UIImage *_image;
    struct CGSize { 
        double width; 
        double height; 
    } _representationSize;
    id _representationToken;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct CGSize { double x1; double x2; } representationSize;
@property (nonatomic, retain) id representationToken;

+ (id)representationWithSize:(struct CGSize { double x1; double x2; })arg1 image:(id)arg2;

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)image;
- (struct CGSize { double x1; double x2; })representationSize;
- (id)representationToken;
- (void)setImage:(id)arg1;
- (void)setRepresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRepresentationToken:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSettings : NSObject <NSCopying> {
    PUAirplayRoute *_airplayRoute;
    MPMediaItemCollection *_musicCollection;
    NSString *_transition;
}

@property (nonatomic, retain) PUAirplayRoute *airplayRoute;
@property (nonatomic, readonly) bool isOrigamiTransition;
@property (nonatomic, retain) MPMediaItemCollection *musicCollection;
@property (nonatomic, copy) NSString *transition;

+ (id)settingsForAirplayRoute:(id)arg1;

- (void).cxx_destruct;
- (id)airplayRoute;
- (id)copyOfMusicCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 airplayRoute:(id)arg2;
- (bool)isOrigamiTransition;
- (id)musicCollection;
- (void)saveToPreferences;
- (void)setAirplayRoute:(id)arg1;
- (void)setMusicCollection:(id)arg1;
- (void)setTransition:(id)arg1;
- (id)transition;

@end

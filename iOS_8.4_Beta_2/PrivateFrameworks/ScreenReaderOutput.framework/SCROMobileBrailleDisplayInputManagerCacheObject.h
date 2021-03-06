/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject {
    int _brailleInputMode;
    NSBundle *_bundle;
    NSMutableDictionary *_commandDictionary;
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    NSMutableArray *_orderedIdentifiers;
}

@property(assign,readwrite) int brailleInputMode;
@property(assign,retain) NSBundle * bundle;
@property(assign,retain) NSMutableDictionary * commandDictionary;
@property(assign,retain) NSString * driverIdentifier;
@property(assign,retain) NSString * modelIdentifier;
@property(assign,retain) NSMutableArray * orderedIdentifiers;

- (int)brailleInputMode;
- (id)bundle;
- (id)commandDictionary;
- (void)dealloc;
- (id)driverIdentifier;
- (id)modelIdentifier;
- (id)orderedIdentifiers;
- (void)setBrailleInputMode:(int)arg1;
- (void)setBundle:(id)arg1;
- (void)setCommandDictionary:(id)arg1;
- (void)setDriverIdentifier:(id)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setOrderedIdentifiers:(id)arg1;

@end

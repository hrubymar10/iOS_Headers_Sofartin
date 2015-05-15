/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCDDocument : NSObject {
    OADBlipCollection *mBlips;
    NSMutableArray *mCharts;
    OADTextListStyle *mDefaultTextStyle;
    OITSUPointerKeyDictionary *mDualDrawableMap;
    NSData *mEncryptionInfo;
    OADGraphicStyleCache *mGraphicStyleCache;
    OCDReader *mReader;
    OCDSummary *mSummary;
    OCDWriter *mWriter;
}

@property(assign,readonly) OADBlipCollection * blips;
@property(assign,readonly) NSMutableArray * charts;
@property(assign,readonly) OADTextListStyle * defaultTextStyle;
@property(assign,readonly) OITSUPointerKeyDictionary * dualDrawableMap;
@property(assign,retain) OADGraphicStyleCache * graphicStyleCache;
@property(assign,retain) OCDReader * reader;
@property(assign,readonly) OCDSummary * summary;
@property(assign,retain) OCDWriter * writer;

- (id)blips;
- (id)charts;
- (void)dealloc;
- (id)defaultTextStyle;
- (id)dualDrawableMap;
- (id)encryptionInfo;
- (id)graphicStyleCache;
- (id)init;
- (bool)isFromBinaryFile;
- (id)reader;
- (void)setEncryptionInfo:(id)arg1;
- (void)setGraphicStyleCache:(id)arg1;
- (void)setReader:(id)arg1;
- (void)setWriter:(id)arg1;
- (id)summary;
- (id)writer;

@end

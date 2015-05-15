/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDTrendlineLabel : NSObject {
    bool mAutomaticLabelDeleted;
    unsigned long long mContentFormatId;
    bool mGeneratedText;
    OADGraphicProperties *mGraphicProperties;
    unsigned long long mLastCachedNameStringIndex;
    CHDFormula *mName;
    EDResources *mResources;
}

+ (id)trendlineLabelWithResources:(id)arg1;

- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (void)dealloc;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isAutomaticLabelDeleted;
- (bool)isGeneratedText;
- (id)lastCachedName;
- (id)name;
- (void)setAutomaticLabelDeleted:(bool)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setGeneratedText:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setName:(id)arg1 chart:(id)arg2;
- (void)setStringIndex:(unsigned long long)arg1;
- (unsigned long long)stringIndex;

@end

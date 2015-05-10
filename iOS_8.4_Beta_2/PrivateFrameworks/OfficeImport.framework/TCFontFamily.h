/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFontFamily : NSObject {
    NSArray *_members;
    NSDictionary *_namesByLanguage;
}

@property(assign,readonly) NSArray * members;
@property(assign,readonly) NSDictionary * namesByLanguage;

- (id)bestMatchForStyling:(struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; })arg1;
- (void)dealloc;
- (id)description;
- (id)equivalentDictionary;
- (bool)fontIsDesignatedBold:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)members;
- (id)namesByLanguage;
- (id)variantByAddingBoldToFont:(id)arg1;
- (id)variantByAddingItalicToFont:(id)arg1;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (id)variantByRemovingItalicFromFont:(id)arg1;

@end

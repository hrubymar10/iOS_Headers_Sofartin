/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFont : NSObject {
    TCFontFamily *_family;
    NSDictionary *_namesByLanguage;
    NSString *_psName;
    struct TCFontStyling { 
        int fontClass; 
        unsigned int stringEncoding; 
        BOOL weight; 
        bool italic; 
        int width; 
    } _styling;
}

@property(assign,readwrite) TCFontFamily * family;
@property(assign,readonly) NSDictionary * namesByLanguage;
@property(assign,readonly) NSString * psName;
@property(assign,readonly) struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; } styling;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (id)equivalentDictionary;
- (id)family;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; })arg3;
- (id)localizedFontName;
- (id)namesByLanguage;
- (id)psName;
- (void)setFamily:(id)arg1;
- (struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; })styling;

@end

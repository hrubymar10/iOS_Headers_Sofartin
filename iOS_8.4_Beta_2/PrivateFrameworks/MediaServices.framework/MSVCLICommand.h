/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLICommand : NSObject {
    NSDictionary *_cachedOptionsDictionary;
    NSString *_name;
    NSArray *_options;
}

@property(assign,readonly) NSString * name;
@property(assign,readonly) NSArray * options;
@property(assign,readonly) NSDictionary * optionsDictionary;

- (void).cxx_destruct;
- (bool)containsOption:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (id)name;
- (id)options;
- (id)optionsDictionary;
- (id)valueForOption:(id)arg1;

@end

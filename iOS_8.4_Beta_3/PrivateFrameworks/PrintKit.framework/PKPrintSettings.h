/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKPrintSettings : NSObject {
    NSMutableDictionary *_dict;
    PKPaper *paper;
}

@property (nonatomic, retain) NSMutableDictionary *dict;
@property (nonatomic, retain) PKPaper *paper;

+ (id)default;
+ (id)photo;
+ (id)printSettingsForPrinter:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)dict;
- (id)init;
- (id)objectForKey:(id)arg1;
- (id)paper;
- (void)removeObjectForKey:(id)arg1;
- (void)setDict:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPaper:(id)arg1;
- (id)settingsDict;

@end

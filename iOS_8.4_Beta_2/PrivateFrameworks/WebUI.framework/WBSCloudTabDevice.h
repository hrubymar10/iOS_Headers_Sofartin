/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSCloudTabDevice : NSObject <NSCopying> {
    bool _closeRequestSupported;
    bool _hasDuplicateName;
    NSDate *_lastModified;
    NSString *_name;
    NSArray *_tabs;
    NSString *_uuid;
}

@property(getter=isCloseRequestSupported,assign,readonly) bool closeRequestSupported;
@property(assign,readonly) NSDictionary * dictionaryRepresentation;
@property(assign,readonly) bool hasDuplicateName;
@property(assign,readonly) NSDate * lastModified;
@property(assign,copy) NSString * name;
@property(assign,copy) NSArray * tabs;
@property(assign,copy) NSString * uuid;

+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4;
+ (id)deviceNameInDictionary:(id)arg1;
+ (bool)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (bool)isCloudTabDeviceDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceByRemovingTab:(id)arg1;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDuplicateName;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;
- (bool)isCloseRequestSupported;
- (id)lastModified;
- (id)name;
- (id)tabs;
- (id)uuid;

@end

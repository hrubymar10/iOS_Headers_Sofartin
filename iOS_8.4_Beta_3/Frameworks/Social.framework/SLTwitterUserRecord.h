/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLTwitterUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSString *_id_str;
    NSURL *_objectID;
}

@property(assign,retain) NSString * id_str;
@property(assign,retain) NSURL * objectID;

+ (bool)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
+ (id)userRecordWithScreenName:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)id_str;
- (id)initWithCoder:(id)arg1;
- (id)objectID;
- (void)setId_str:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end

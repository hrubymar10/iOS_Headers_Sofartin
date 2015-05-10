/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSEmailModel : NSObject <NSCoding> {
    NSArray *_bcc;
    NSString *_body;
    NSArray *_cc;
    NSURL *_reference;
    NSString *_subject;
    NSArray *_to;
    int _type;
}

@property(assign,copy) NSArray * bcc;
@property(assign,retain) NSString * body;
@property(assign,copy) NSArray * cc;
@property(assign,retain) NSURL * reference;
@property(assign,copy) NSString * subject;
@property(assign,copy) NSArray * to;
@property(assign,readwrite) int type;

- (id)bcc;
- (id)body;
- (id)cc;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reference;
- (void)setBcc:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setReference:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setType:(int)arg1;
- (id)subject;
- (id)to;
- (int)type;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackResult : NSObject <NSSecureCoding> {
    unsigned int _domain;
    NSString *_fbr;
    int _flags;
}

@property(assign,readwrite) unsigned int domain;
@property(assign,retain) NSString * fbr;
@property(assign,readwrite) int flags;
@property(assign,readonly) NSString * parsecString;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (int)flags;
- (id)initWithCoder:(id)arg1;
- (id)parsecString;
- (void)setDomain:(unsigned int)arg1;
- (void)setFbr:(id)arg1;
- (void)setFlags:(int)arg1;

@end